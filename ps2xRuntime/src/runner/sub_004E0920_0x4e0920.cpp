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

// Function: sub_004E0920
// Address: 0x4e0920 - 0x4e0a78
void sub_004E0920_0x4e0920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E0920_0x4e0920");
#endif

    switch (ctx->pc) {
        case 0x4e0950u: goto label_4e0950;
        case 0x4e098cu: goto label_4e098c;
        case 0x4e09e0u: goto label_4e09e0;
        case 0x4e0a10u: goto label_4e0a10;
        case 0x4e0a48u: goto label_4e0a48;
        default: break;
    }

    ctx->pc = 0x4e0920u;

    // 0x4e0920: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e0920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4e0924: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e0924u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0928: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e0928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4e092c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e092cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e0930: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4e0930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4e0934: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x4e0934u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e0938: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x4e0938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4e093c: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x4E093Cu;
    {
        const bool branch_taken_0x4e093c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E093Cu;
        // 0x4e0940: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e093c) {
            ctx->pc = 0x4E096Cu;
            goto label_4e096c;
        }
    }
    ctx->pc = 0x4E0944u;
    // 0x4e0944: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e0944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e0948: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4e0948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e094c: 0x0  nop
    ctx->pc = 0x4e094cu;
    // NOP
label_4e0950:
    // 0x4e0950: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e0950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e0954: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4e0954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4e0958: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4E0958u;
    {
        const bool branch_taken_0x4e0958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0958) {
            ctx->pc = 0x4E095Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0958u;
            // 0x4e095c: 0x8ce6000c  lw          $a2, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0964u;
            goto label_4e0964;
        }
    }
    ctx->pc = 0x4E0960u;
    // 0x4e0960: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x4e0960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4e0964:
    // 0x4e0964: 0x54c0fffa  bnel        $a2, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4E0964u;
    {
        const bool branch_taken_0x4e0964 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e0964) {
            ctx->pc = 0x4E0968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0964u;
            // 0x4e0968: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e0950;
        }
    }
    ctx->pc = 0x4E096Cu;
label_4e096c:
    // 0x4e096c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x4E096Cu;
    {
        const bool branch_taken_0x4e096c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E096Cu;
        // 0x4e0970: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e096c) {
            ctx->pc = 0x4E0A28u;
            goto label_4e0a28;
        }
    }
    ctx->pc = 0x4E0974u;
    // 0x4e0974: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4e0974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e0978: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4e0978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4e097c: 0x14e30005  bne         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E097Cu;
    {
        const bool branch_taken_0x4e097c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x4E0980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E097Cu;
        // 0x4e0980: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e097c) {
            ctx->pc = 0x4E0994u;
            goto label_4e0994;
        }
    }
    ctx->pc = 0x4E0984u;
    // 0x4e0984: 0xc138154  jal         func_4E0550
    ctx->pc = 0x4E0984u;
    SET_GPR_U32(ctx, 31, 0x4E098Cu);
    ctx->pc = 0x4E0988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0984u;
    // 0x4e0988: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E0550u, 0x4E0984u, 0x4E098Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E098Cu;
label_4e098c:
    // 0x4e098c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x4E098Cu;
    {
        const bool branch_taken_0x4e098c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E098Cu;
        // 0x4e0990: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e098c) {
            ctx->pc = 0x4E0A4Cu;
            goto label_4e0a4c;
        }
    }
    ctx->pc = 0x4E0994u;
label_4e0994:
    // 0x4e0994: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4e0994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e0998: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E0998u;
    {
        const bool branch_taken_0x4e0998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0998u;
        // 0x4e099c: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0998) {
            ctx->pc = 0x4E09BCu;
            goto label_4e09bc;
        }
    }
    ctx->pc = 0x4E09A0u;
    // 0x4e09a0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4e09a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4e09a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4e09a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4e09a8: 0x54670005  bnel        $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E09A8u;
    {
        const bool branch_taken_0x4e09a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x4e09a8) {
            ctx->pc = 0x4E09ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E09A8u;
            // 0x4e09ac: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E09C0u;
            goto label_4e09c0;
        }
    }
    ctx->pc = 0x4E09B0u;
    // 0x4e09b0: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4e09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4e09b4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4E09B4u;
    {
        const bool branch_taken_0x4e09b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E09B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E09B4u;
        // 0x4e09b8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e09b4) {
            ctx->pc = 0x4E0A28u;
            goto label_4e0a28;
        }
    }
    ctx->pc = 0x4E09BCu;
label_4e09bc:
    // 0x4e09bc: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4e09bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4e09c0:
    // 0x4e09c0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e09c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e09c4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4E09C4u;
    {
        const bool branch_taken_0x4e09c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e09c4) {
            ctx->pc = 0x4E09C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E09C4u;
            // 0x4e09c8: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0A00u;
            goto label_4e0a00;
        }
    }
    ctx->pc = 0x4E09CCu;
    // 0x4e09cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e09ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e09d0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e09d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e09d4: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x4E09D4u;
    {
        const bool branch_taken_0x4e09d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e09d4) {
            ctx->pc = 0x4E09D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E09D4u;
            // 0x4e09d8: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0A28u;
            goto label_4e0a28;
        }
    }
    ctx->pc = 0x4E09DCu;
    // 0x4e09dc: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4e09dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e09e0:
    // 0x4e09e0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e09e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e09e4: 0x0  nop
    ctx->pc = 0x4e09e4u;
    // NOP
    // 0x4e09e8: 0x0  nop
    ctx->pc = 0x4e09e8u;
    // NOP
    // 0x4e09ec: 0x0  nop
    ctx->pc = 0x4e09ecu;
    // NOP
    // 0x4e09f0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E09F0u;
    {
        const bool branch_taken_0x4e09f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e09f0) {
            ctx->pc = 0x4E09F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E09F0u;
            // 0x4e09f4: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E09E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e09e0;
        }
    }
    ctx->pc = 0x4E09F8u;
    // 0x4e09f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E09F8u;
    {
        const bool branch_taken_0x4e09f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E09FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E09F8u;
        // 0x4e09fc: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e09f8) {
            ctx->pc = 0x4E0A28u;
            goto label_4e0a28;
        }
    }
    ctx->pc = 0x4E0A00u;
label_4e0a00:
    // 0x4e0a00: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e0a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e0a04: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E0A04u;
    {
        const bool branch_taken_0x4e0a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E0A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0A04u;
        // 0x4e0a08: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0a04) {
            ctx->pc = 0x4E0A28u;
            goto label_4e0a28;
        }
    }
    ctx->pc = 0x4E0A0Cu;
    // 0x4e0a0c: 0x0  nop
    ctx->pc = 0x4e0a0cu;
    // NOP
label_4e0a10:
    // 0x4e0a10: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4e0a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4e0a14: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4e0a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e0a18: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e0a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e0a1c: 0x0  nop
    ctx->pc = 0x4e0a1cu;
    // NOP
    // 0x4e0a20: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E0A20u;
    {
        const bool branch_taken_0x4e0a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E0A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0A20u;
        // 0x4e0a24: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0a20) {
            ctx->pc = 0x4E0A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e0a10;
        }
    }
    ctx->pc = 0x4E0A28u;
label_4e0a28:
    // 0x4e0a28: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4e0a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e0a2c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e0a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e0a30: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4e0a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4e0a34: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e0a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e0a38: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E0A38u;
    {
        const bool branch_taken_0x4e0a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0a38) {
            ctx->pc = 0x4E0A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0A38u;
            // 0x4e0a3c: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0A5Cu;
            goto label_4e0a5c;
        }
    }
    ctx->pc = 0x4E0A40u;
    // 0x4e0a40: 0xc138154  jal         func_4E0550
    ctx->pc = 0x4E0A40u;
    SET_GPR_U32(ctx, 31, 0x4E0A48u);
    ctx->pc = 0x4E0A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0A40u;
    // 0x4e0a44: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E0550u, 0x4E0A40u, 0x4E0A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E0A48u;
label_4e0a48:
    // 0x4e0a48: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4e0a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4e0a4c:
    // 0x4e0a4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e0a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e0a50: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4e0a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4e0a54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4E0A54u;
    {
        const bool branch_taken_0x4e0a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0A54u;
        // 0x4e0a58: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0a54) {
            ctx->pc = 0x4E0A60u;
            goto label_4e0a60;
        }
    }
    ctx->pc = 0x4E0A5Cu;
label_4e0a5c:
    // 0x4e0a5c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4e0a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4e0a60:
    // 0x4e0a60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e0a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0a64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4e0a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e0a68: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e0a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e0a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E0A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E0A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0A6Cu;
        // 0x4e0a70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E0A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E0A74u;
    // 0x4e0a74: 0x0  nop
    ctx->pc = 0x4e0a74u;
    // NOP
    ctx->pc = 0x4e0a78u;
}
