#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00445FD8
// Address: 0x445fd8 - 0x446290
void sub_00445FD8_0x445fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00445FD8_0x445fd8");
#endif

    ctx->pc = 0x445fd8u;

    // 0x445fd8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x445fd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x445fdc: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x445fdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x445fe0: 0x8ce90184  lw          $t1, 0x184($a3)
    ctx->pc = 0x445fe0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x445fe4: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x445fe4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x445fe8: 0x8cea0160  lw          $t2, 0x160($a3)
    ctx->pc = 0x445fe8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x445fec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x445fecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x445ff0: 0x39220003  xori        $v0, $t1, 0x3
    ctx->pc = 0x445ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)3);
    // 0x445ff4: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x445ff4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x445ff8: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x445ff8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x445ffc: 0x154e0044  bne         $t2, $t6, . + 4 + (0x44 << 2)
    ctx->pc = 0x445FFCu;
    {
        const bool branch_taken_0x445ffc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        ctx->pc = 0x446000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445FFCu;
        // 0x446000: 0x182580a  movz        $t3, $t4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445ffc) {
            ctx->pc = 0x446110u;
            goto label_446110;
        }
    }
    ctx->pc = 0x446004u;
    // 0x446004: 0x8ce200b4  lw          $v0, 0xB4($a3)
    ctx->pc = 0x446004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
    // 0x446008: 0x8ce300b8  lw          $v1, 0xB8($a3)
    ctx->pc = 0x446008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 184)));
    // 0x44600c: 0x8ce501d4  lw          $a1, 0x1D4($a3)
    ctx->pc = 0x44600cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 468)));
    // 0x446010: 0x8ce601e4  lw          $a2, 0x1E4($a3)
    ctx->pc = 0x446010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x446014: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x446014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x446018: 0x8ce401f4  lw          $a0, 0x1F4($a3)
    ctx->pc = 0x446018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 500)));
    // 0x44601c: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x44601cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x446020: 0xace501d0  sw          $a1, 0x1D0($a3)
    ctx->pc = 0x446020u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 5));
    // 0x446024: 0xace601e0  sw          $a2, 0x1E0($a3)
    ctx->pc = 0x446024u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 6));
    // 0x446028: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x446028u;
    {
        const bool branch_taken_0x446028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446028u;
        // 0x44602c: 0xace401f0  sw          $a0, 0x1F0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 496), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446028) {
            ctx->pc = 0x44603Cu;
            goto label_44603c;
        }
    }
    ctx->pc = 0x446030u;
    // 0x446030: 0xace000fc  sw          $zero, 0xFC($a3)
    ctx->pc = 0x446030u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
    // 0x446034: 0xace001b8  sw          $zero, 0x1B8($a3)
    ctx->pc = 0x446034u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 440), GPR_U32(ctx, 0));
    // 0x446038: 0xace001b4  sw          $zero, 0x1B4($a3)
    ctx->pc = 0x446038u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 436), GPR_U32(ctx, 0));
label_44603c:
    // 0x44603c: 0x8ce200fc  lw          $v0, 0xFC($a3)
    ctx->pc = 0x44603cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 252)));
    // 0x446040: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x446040u;
    {
        const bool branch_taken_0x446040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x446040) {
            ctx->pc = 0x446044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446040u;
            // 0x446044: 0x8ce201b4  lw          $v0, 0x1B4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x446058u;
            goto label_446058;
        }
    }
    ctx->pc = 0x446048u;
    // 0x446048: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x446048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x44604c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x44604Cu;
    {
        const bool branch_taken_0x44604c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44604c) {
            ctx->pc = 0x446050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44604Cu;
            // 0x446050: 0xace000fc  sw          $zero, 0xFC($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x446080u;
            goto label_446080;
        }
    }
    ctx->pc = 0x446054u;
    // 0x446054: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x446054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
label_446058:
    // 0x446058: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x446058u;
    {
        const bool branch_taken_0x446058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x446058) {
            ctx->pc = 0x44605Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446058u;
            // 0x44605c: 0xace000fc  sw          $zero, 0xFC($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x446080u;
            goto label_446080;
        }
    }
    ctx->pc = 0x446060u;
    // 0x446060: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x446060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x446064: 0x8ce401d8  lw          $a0, 0x1D8($a3)
    ctx->pc = 0x446064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x446068: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x446068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x44606c: 0x8ce301e8  lw          $v1, 0x1E8($a3)
    ctx->pc = 0x44606cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x446070: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x446070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x446074: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x446074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x446078: 0x8ce90184  lw          $t1, 0x184($a3)
    ctx->pc = 0x446078u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x44607c: 0xace000fc  sw          $zero, 0xFC($a3)
    ctx->pc = 0x44607cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
label_446080:
    // 0x446080: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x446080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x446084: 0x1522000b  bne         $t1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x446084u;
    {
        const bool branch_taken_0x446084 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x446088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446084u;
        // 0x446088: 0xace001b8  sw          $zero, 0x1B8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446084) {
            ctx->pc = 0x4460B4u;
            goto label_4460b4;
        }
    }
    ctx->pc = 0x44608Cu;
    // 0x44608c: 0x8ce301c8  lw          $v1, 0x1C8($a3)
    ctx->pc = 0x44608cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x446090: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x446090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x446094: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x446094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x446098: 0x50440018  beql        $v0, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x446098u;
    {
        const bool branch_taken_0x446098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x446098) {
            ctx->pc = 0x44609Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446098u;
            // 0x44609c: 0x8ce301cc  lw          $v1, 0x1CC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4460FCu;
            goto label_4460fc;
        }
    }
    ctx->pc = 0x4460A0u;
    // 0x4460a0: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x4460a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x4460a4: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x4460A4u;
    {
        const bool branch_taken_0x4460a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4460A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4460A4u;
        // 0x4460a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4460a4) {
            ctx->pc = 0x4461C8u;
            goto label_4461c8;
        }
    }
    ctx->pc = 0x4460ACu;
    // 0x4460ac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4460ACu;
    {
        const bool branch_taken_0x4460ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4460B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4460ACu;
        // 0x4460b0: 0x8ce301cc  lw          $v1, 0x1CC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4460ac) {
            ctx->pc = 0x4460FCu;
            goto label_4460fc;
        }
    }
    ctx->pc = 0x4460B4u;
label_4460b4:
    // 0x4460b4: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x4460b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x4460b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4460b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4460bc: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x4460bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x4460c0: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4460C0u;
    {
        const bool branch_taken_0x4460c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4460c0) {
            ctx->pc = 0x4460C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4460C0u;
            // 0x4460c4: 0x8ce201b4  lw          $v0, 0x1B4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4460DCu;
            goto label_4460dc;
        }
    }
    ctx->pc = 0x4460C8u;
    // 0x4460c8: 0x8ce201e8  lw          $v0, 0x1E8($a3)
    ctx->pc = 0x4460c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x4460cc: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x4460ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x4460d0: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4460D0u;
    {
        const bool branch_taken_0x4460d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x4460d0) {
            ctx->pc = 0x4460D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4460D0u;
            // 0x4460d4: 0x8ce201dc  lw          $v0, 0x1DC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4460E8u;
            goto label_4460e8;
        }
    }
    ctx->pc = 0x4460D8u;
    // 0x4460d8: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x4460d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
label_4460dc:
    // 0x4460dc: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x4460DCu;
    {
        const bool branch_taken_0x4460dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4460E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4460DCu;
        // 0x4460e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4460dc) {
            ctx->pc = 0x4461C8u;
            goto label_4461c8;
        }
    }
    ctx->pc = 0x4460E4u;
    // 0x4460e4: 0x8ce201dc  lw          $v0, 0x1DC($a3)
    ctx->pc = 0x4460e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
label_4460e8:
    // 0x4460e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4460e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4460ec: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x4460ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x4460f0: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x4460F0u;
    {
        const bool branch_taken_0x4460f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x4460F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4460F0u;
        // 0x4460f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4460f0) {
            ctx->pc = 0x4461C8u;
            goto label_4461c8;
        }
    }
    ctx->pc = 0x4460F8u;
    // 0x4460f8: 0x8ce301ec  lw          $v1, 0x1EC($a3)
    ctx->pc = 0x4460f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
label_4460fc:
    // 0x4460fc: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x4460fcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446100: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x446100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x446104: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x446104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x446108: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x446108u;
    {
        const bool branch_taken_0x446108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446108u;
        // 0x44610c: 0x2680b  movn        $t5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446108) {
            ctx->pc = 0x4461C4u;
            goto label_4461c4;
        }
    }
    ctx->pc = 0x446110u;
label_446110:
    // 0x446110: 0x54a0000e  bnel        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x446110u;
    {
        const bool branch_taken_0x446110 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x446110) {
            ctx->pc = 0x446114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446110u;
            // 0x446114: 0x8ce201cc  lw          $v0, 0x1CC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44614Cu;
            goto label_44614c;
        }
    }
    ctx->pc = 0x446118u;
    // 0x446118: 0x8ce601c8  lw          $a2, 0x1C8($a3)
    ctx->pc = 0x446118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x44611c: 0x8ce401cc  lw          $a0, 0x1CC($a3)
    ctx->pc = 0x44611cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
    // 0x446120: 0xace601cc  sw          $a2, 0x1CC($a3)
    ctx->pc = 0x446120u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 460), GPR_U32(ctx, 6));
    // 0x446124: 0x8ce601d8  lw          $a2, 0x1D8($a3)
    ctx->pc = 0x446124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x446128: 0x8ce301dc  lw          $v1, 0x1DC($a3)
    ctx->pc = 0x446128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x44612c: 0xace601dc  sw          $a2, 0x1DC($a3)
    ctx->pc = 0x44612cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 476), GPR_U32(ctx, 6));
    // 0x446130: 0x8ce601e8  lw          $a2, 0x1E8($a3)
    ctx->pc = 0x446130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x446134: 0x8ce201ec  lw          $v0, 0x1EC($a3)
    ctx->pc = 0x446134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
    // 0x446138: 0xace401c8  sw          $a0, 0x1C8($a3)
    ctx->pc = 0x446138u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 456), GPR_U32(ctx, 4));
    // 0x44613c: 0xace301d8  sw          $v1, 0x1D8($a3)
    ctx->pc = 0x44613cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 472), GPR_U32(ctx, 3));
    // 0x446140: 0xace201e8  sw          $v0, 0x1E8($a3)
    ctx->pc = 0x446140u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 488), GPR_U32(ctx, 2));
    // 0x446144: 0xace601ec  sw          $a2, 0x1EC($a3)
    ctx->pc = 0x446144u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 492), GPR_U32(ctx, 6));
    // 0x446148: 0x8ce201cc  lw          $v0, 0x1CC($a3)
    ctx->pc = 0x446148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
label_44614c:
    // 0x44614c: 0x8ce401dc  lw          $a0, 0x1DC($a3)
    ctx->pc = 0x44614cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x446150: 0x8ce301ec  lw          $v1, 0x1EC($a3)
    ctx->pc = 0x446150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
    // 0x446154: 0xace201d0  sw          $v0, 0x1D0($a3)
    ctx->pc = 0x446154u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 2));
    // 0x446158: 0xace401e0  sw          $a0, 0x1E0($a3)
    ctx->pc = 0x446158u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 4));
    // 0x44615c: 0x152e0006  bne         $t1, $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x44615Cu;
    {
        const bool branch_taken_0x44615c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 14));
        ctx->pc = 0x446160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44615Cu;
        // 0x446160: 0xace301f0  sw          $v1, 0x1F0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 496), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44615c) {
            ctx->pc = 0x446178u;
            goto label_446178;
        }
    }
    ctx->pc = 0x446164u;
    // 0x446164: 0x554c0017  bnel        $t2, $t4, . + 4 + (0x17 << 2)
    ctx->pc = 0x446164u;
    {
        const bool branch_taken_0x446164 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        if (branch_taken_0x446164) {
            ctx->pc = 0x446168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446164u;
            // 0x446168: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4461C4u;
            goto label_4461c4;
        }
    }
    ctx->pc = 0x44616Cu;
    // 0x44616c: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x44616cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x446170: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x446170u;
    {
        const bool branch_taken_0x446170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x446174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446170u;
        // 0x446174: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446170) {
            ctx->pc = 0x4461B4u;
            goto label_4461b4;
        }
    }
    ctx->pc = 0x446178u;
label_446178:
    // 0x446178: 0x39220001  xori        $v0, $t1, 0x1
    ctx->pc = 0x446178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x44617c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x44617cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x446180: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x446180u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x446184: 0x154c000e  bne         $t2, $t4, . + 4 + (0xE << 2)
    ctx->pc = 0x446184u;
    {
        const bool branch_taken_0x446184 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        ctx->pc = 0x446188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446184u;
        // 0x446188: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446184) {
            ctx->pc = 0x4461C0u;
            goto label_4461c0;
        }
    }
    ctx->pc = 0x44618Cu;
    // 0x44618c: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x44618Cu;
    {
        const bool branch_taken_0x44618c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x44618c) {
            ctx->pc = 0x446190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44618Cu;
            // 0x446190: 0x8ce201d8  lw          $v0, 0x1D8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4461A4u;
            goto label_4461a4;
        }
    }
    ctx->pc = 0x446194u;
    // 0x446194: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x446194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x446198: 0x5046000a  beql        $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x446198u;
    {
        const bool branch_taken_0x446198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x446198) {
            ctx->pc = 0x44619Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446198u;
            // 0x44619c: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4461C4u;
            goto label_4461c4;
        }
    }
    ctx->pc = 0x4461A0u;
    // 0x4461a0: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x4461a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
label_4461a4:
    // 0x4461a4: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x4461a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x4461a8: 0x14860007  bne         $a0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x4461A8u;
    {
        const bool branch_taken_0x4461a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x4461ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4461A8u;
        // 0x4461ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4461a8) {
            ctx->pc = 0x4461C8u;
            goto label_4461c8;
        }
    }
    ctx->pc = 0x4461B0u;
    // 0x4461b0: 0x8ce201e8  lw          $v0, 0x1E8($a3)
    ctx->pc = 0x4461b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_4461b4:
    // 0x4461b4: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x4461b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x4461b8: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4461B8u;
    {
        const bool branch_taken_0x4461b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4461BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4461B8u;
        // 0x4461bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4461b8) {
            ctx->pc = 0x4461C8u;
            goto label_4461c8;
        }
    }
    ctx->pc = 0x4461C0u;
label_4461c0:
    // 0x4461c0: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x4461c0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4461c4:
    // 0x4461c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4461c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4461c8:
    // 0x4461c8: 0x1122000c  beq         $t1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4461C8u;
    {
        const bool branch_taken_0x4461c8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x4461CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4461C8u;
        // 0x4461cc: 0x29220003  slti        $v0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4461c8) {
            ctx->pc = 0x4461FCu;
            goto label_4461fc;
        }
    }
    ctx->pc = 0x4461D0u;
    // 0x4461d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4461D0u;
    {
        const bool branch_taken_0x4461d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4461D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4461D0u;
        // 0x4461d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4461d0) {
            ctx->pc = 0x4461E8u;
            goto label_4461e8;
        }
    }
    ctx->pc = 0x4461D8u;
    // 0x4461d8: 0x51220009  beql        $t1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4461D8u;
    {
        const bool branch_taken_0x4461d8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x4461d8) {
            ctx->pc = 0x4461DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4461D8u;
            // 0x4461dc: 0x8ce801e0  lw          $t0, 0x1E0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x446200u;
            goto label_446200;
        }
    }
    ctx->pc = 0x4461E0u;
    // 0x4461e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4461E0u;
    {
        const bool branch_taken_0x4461e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4461E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4461E0u;
        // 0x4461e4: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4461e0) {
            ctx->pc = 0x446204u;
            goto label_446204;
        }
    }
    ctx->pc = 0x4461E8u;
label_4461e8:
    // 0x4461e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4461e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4461ec: 0x51220004  beql        $t1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4461ECu;
    {
        const bool branch_taken_0x4461ec = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x4461ec) {
            ctx->pc = 0x4461F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4461ECu;
            // 0x4461f0: 0x8ce801d0  lw          $t0, 0x1D0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x446200u;
            goto label_446200;
        }
    }
    ctx->pc = 0x4461F4u;
    // 0x4461f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4461F4u;
    {
        const bool branch_taken_0x4461f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4461F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4461F4u;
        // 0x4461f8: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4461f4) {
            ctx->pc = 0x446204u;
            goto label_446204;
        }
    }
    ctx->pc = 0x4461FCu;
label_4461fc:
    // 0x4461fc: 0x8ce801f0  lw          $t0, 0x1F0($a3)
    ctx->pc = 0x4461fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 496)));
label_446200:
    // 0x446200: 0xad000028  sw          $zero, 0x28($t0)
    ctx->pc = 0x446200u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
label_446204:
    // 0x446204: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x446204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446208: 0xdce30838  ld          $v1, 0x838($a3)
    ctx->pc = 0x446208u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2104)));
    // 0x44620c: 0x8ce40160  lw          $a0, 0x160($a3)
    ctx->pc = 0x44620cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x446210: 0xfd030018  sd          $v1, 0x18($t0)
    ctx->pc = 0x446210u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 3));
    // 0x446214: 0xad04002c  sw          $a0, 0x2C($t0)
    ctx->pc = 0x446214u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 4));
    // 0x446218: 0xdce30840  ld          $v1, 0x840($a3)
    ctx->pc = 0x446218u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2112)));
    // 0x44621c: 0x8ce40184  lw          $a0, 0x184($a3)
    ctx->pc = 0x44621cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x446220: 0xfd030020  sd          $v1, 0x20($t0)
    ctx->pc = 0x446220u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 3));
    // 0x446224: 0xad040030  sw          $a0, 0x30($t0)
    ctx->pc = 0x446224u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 4));
    // 0x446228: 0x8ce3014c  lw          $v1, 0x14C($a3)
    ctx->pc = 0x446228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 332)));
    // 0x44622c: 0xad030034  sw          $v1, 0x34($t0)
    ctx->pc = 0x44622cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 3));
    // 0x446230: 0x8ce40198  lw          $a0, 0x198($a3)
    ctx->pc = 0x446230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 408)));
    // 0x446234: 0xad040038  sw          $a0, 0x38($t0)
    ctx->pc = 0x446234u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 4));
    // 0x446238: 0x8ce30188  lw          $v1, 0x188($a3)
    ctx->pc = 0x446238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 392)));
    // 0x44623c: 0xad03003c  sw          $v1, 0x3C($t0)
    ctx->pc = 0x44623cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 3));
    // 0x446240: 0x8ce40194  lw          $a0, 0x194($a3)
    ctx->pc = 0x446240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 404)));
    // 0x446244: 0xad040040  sw          $a0, 0x40($t0)
    ctx->pc = 0x446244u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 4));
    // 0x446248: 0x8ce3019c  lw          $v1, 0x19C($a3)
    ctx->pc = 0x446248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 412)));
    // 0x44624c: 0xad030044  sw          $v1, 0x44($t0)
    ctx->pc = 0x44624cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 68), GPR_U32(ctx, 3));
    // 0x446250: 0x8ce401a0  lw          $a0, 0x1A0($a3)
    ctx->pc = 0x446250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 416)));
    // 0x446254: 0xad040048  sw          $a0, 0x48($t0)
    ctx->pc = 0x446254u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 4));
    // 0x446258: 0x8ce301a4  lw          $v1, 0x1A4($a3)
    ctx->pc = 0x446258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
    // 0x44625c: 0xad03004c  sw          $v1, 0x4C($t0)
    ctx->pc = 0x44625cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 3));
    // 0x446260: 0x8ce401a8  lw          $a0, 0x1A8($a3)
    ctx->pc = 0x446260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 424)));
    // 0x446264: 0xad040050  sw          $a0, 0x50($t0)
    ctx->pc = 0x446264u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 4));
    // 0x446268: 0x8ce301ac  lw          $v1, 0x1AC($a3)
    ctx->pc = 0x446268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 428)));
    // 0x44626c: 0xad030054  sw          $v1, 0x54($t0)
    ctx->pc = 0x44626cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 84), GPR_U32(ctx, 3));
    // 0x446270: 0x8ce401b0  lw          $a0, 0x1B0($a3)
    ctx->pc = 0x446270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 432)));
    // 0x446274: 0xad040058  sw          $a0, 0x58($t0)
    ctx->pc = 0x446274u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 88), GPR_U32(ctx, 4));
    // 0x446278: 0x8ce30158  lw          $v1, 0x158($a3)
    ctx->pc = 0x446278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 344)));
    // 0x44627c: 0xad03005c  sw          $v1, 0x5C($t0)
    ctx->pc = 0x44627cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 92), GPR_U32(ctx, 3));
    // 0x446280: 0x8ce4015c  lw          $a0, 0x15C($a3)
    ctx->pc = 0x446280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 348)));
    // 0x446284: 0x3e00008  jr          $ra
    ctx->pc = 0x446284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x446288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446284u;
        // 0x446288: 0xad040060  sw          $a0, 0x60($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x446284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44628Cu;
    // 0x44628c: 0x0  nop
    ctx->pc = 0x44628cu;
    // NOP
    ctx->pc = 0x446290u;
}
