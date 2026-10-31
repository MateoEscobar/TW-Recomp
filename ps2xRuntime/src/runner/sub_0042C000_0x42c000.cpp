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

// Function: sub_0042C000
// Address: 0x42c000 - 0x42c168
void sub_0042C000_0x42c000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042C000_0x42c000");
#endif

    switch (ctx->pc) {
        case 0x42c020u: goto label_42c020;
        case 0x42c030u: goto label_42c030;
        case 0x42c100u: goto label_42c100;
        case 0x42c158u: goto label_42c158;
        default: break;
    }

    ctx->pc = 0x42c000u;

    // 0x42c000: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x42c000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x42c004: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x42c004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x42c008: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x42c008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x42c00c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x42c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x42c010: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x42c010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x42c014: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x42c014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x42c018: 0xc10ae6e  jal         func_42B9B8
    ctx->pc = 0x42C018u;
    SET_GPR_U32(ctx, 31, 0x42C020u);
    ctx->pc = 0x42C01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C018u;
    // 0x42c01c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B9B8u, 0x42C018u, 0x42C020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C020u;
label_42c020:
    // 0x42c020: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x42c020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x42c024: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x42c024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x42c028: 0xc10ae6e  jal         func_42B9B8
    ctx->pc = 0x42C028u;
    SET_GPR_U32(ctx, 31, 0x42C030u);
    ctx->pc = 0x42C02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C028u;
    // 0x42c02c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B9B8u, 0x42C028u, 0x42C030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C030u;
label_42c030:
    // 0x42c030: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x42c030u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42c034: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x42c034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x42c038: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42C038u;
    {
        const bool branch_taken_0x42c038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C038u;
        // 0x42c03c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c038) {
            ctx->pc = 0x42C048u;
            goto label_42c048;
        }
    }
    ctx->pc = 0x42C040u;
    // 0x42c040: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x42C040u;
    {
        const bool branch_taken_0x42c040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C040u;
        // 0x42c044: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c040) {
            ctx->pc = 0x42C150u;
            goto label_42c150;
        }
    }
    ctx->pc = 0x42C048u;
label_42c048:
    // 0x42c048: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x42c048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42c04c: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x42c04cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x42c050: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x42C050u;
    {
        const bool branch_taken_0x42c050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C050u;
        // 0x42c054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c050) {
            ctx->pc = 0x42C150u;
            goto label_42c150;
        }
    }
    ctx->pc = 0x42C058u;
    // 0x42c058: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x42c058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x42c05c: 0x38e40004  xori        $a0, $a3, 0x4
    ctx->pc = 0x42c05cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x42c060: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x42c060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x42c064: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x42c064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x42c068: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42C068u;
    {
        const bool branch_taken_0x42c068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C068u;
        // 0x42c06c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c068) {
            ctx->pc = 0x42C07Cu;
            goto label_42c07c;
        }
    }
    ctx->pc = 0x42C070u;
    // 0x42c070: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x42c070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x42c074: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x42C074u;
    {
        const bool branch_taken_0x42c074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C074u;
        // 0x42c078: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c074) {
            ctx->pc = 0x42C090u;
            goto label_42c090;
        }
    }
    ctx->pc = 0x42C07Cu;
label_42c07c:
    // 0x42c07c: 0x14e60034  bne         $a3, $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x42C07Cu;
    {
        const bool branch_taken_0x42c07c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x42C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C07Cu;
        // 0x42c080: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c07c) {
            ctx->pc = 0x42C150u;
            goto label_42c150;
        }
    }
    ctx->pc = 0x42C084u;
    // 0x42c084: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x42c084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x42c088: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x42C088u;
    {
        const bool branch_taken_0x42c088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C088u;
        // 0x42c08c: 0x2444f288  addiu       $a0, $v0, -0xD78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c088) {
            ctx->pc = 0x42C150u;
            goto label_42c150;
        }
    }
    ctx->pc = 0x42C090u;
label_42c090:
    // 0x42c090: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42C090u;
    {
        const bool branch_taken_0x42c090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C090u;
        // 0x42c094: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c090) {
            ctx->pc = 0x42C0A8u;
            goto label_42c0a8;
        }
    }
    ctx->pc = 0x42C098u;
    // 0x42c098: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x42c098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x42c09c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x42c09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42c0a0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x42C0A0u;
    {
        const bool branch_taken_0x42c0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C0A0u;
        // 0x42c0a4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c0a0) {
            ctx->pc = 0x42C150u;
            goto label_42c150;
        }
    }
    ctx->pc = 0x42C0A8u;
label_42c0a8:
    // 0x42c0a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42C0A8u;
    {
        const bool branch_taken_0x42c0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C0A8u;
        // 0x42c0ac: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c0a8) {
            ctx->pc = 0x42C0C0u;
            goto label_42c0c0;
        }
    }
    ctx->pc = 0x42C0B0u;
    // 0x42c0b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x42c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x42c0b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x42c0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42c0b8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x42C0B8u;
    {
        const bool branch_taken_0x42c0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C0B8u;
        // 0x42c0bc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c0b8) {
            ctx->pc = 0x42C150u;
            goto label_42c150;
        }
    }
    ctx->pc = 0x42C0C0u;
label_42c0c0:
    // 0x42c0c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x42c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x42c0c4: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x42c0c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42c0c8: 0xdfa80030  ld          $t0, 0x30($sp)
    ctx->pc = 0x42c0c8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x42c0cc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x42c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x42c0d0: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x42c0d0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x42c0d4: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x42C0D4u;
    {
        const bool branch_taken_0x42c0d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C0D4u;
        // 0x42c0d8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c0d4) {
            ctx->pc = 0x42C0ECu;
            goto label_42c0ec;
        }
    }
    ctx->pc = 0x42C0DCu;
    // 0x42c0dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x42c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x42c0e0: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x42c0e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x42c0e4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x42c0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x42c0e8: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x42c0e8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_42c0ec:
    // 0x42c0ec: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x42c0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x42c0f0: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x42c0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x42c0f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x42C0F4u;
    {
        const bool branch_taken_0x42c0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C0F4u;
        // 0x42c0f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c0f4) {
            ctx->pc = 0x42C104u;
            goto label_42c104;
        }
    }
    ctx->pc = 0x42C0FCu;
    // 0x42c0fc: 0x0  nop
    ctx->pc = 0x42c0fcu;
    // NOP
label_42c100:
    // 0x42c100: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x42c100u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_42c104:
    // 0x42c104: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x42C104u;
    {
        const bool branch_taken_0x42c104 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x42c104) {
            ctx->pc = 0x42C108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42C104u;
            // 0x42c108: 0x2107a  dsrl        $v0, $v0, 1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x42C118u;
            goto label_42c118;
        }
    }
    ctx->pc = 0x42C10Cu;
    // 0x42c10c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x42c10cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x42c110: 0x88202f  dsubu       $a0, $a0, $t0
    ctx->pc = 0x42c110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 8));
    // 0x42c114: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x42c114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_42c118:
    // 0x42c118: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x42C118u;
    {
        const bool branch_taken_0x42c118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C118u;
        // 0x42c11c: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c118) {
            ctx->pc = 0x42C100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42c100;
        }
    }
    ctx->pc = 0x42C120u;
    // 0x42c120: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x42c120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x42c124: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x42c124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x42c128: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42C128u;
    {
        const bool branch_taken_0x42c128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x42c128) {
            ctx->pc = 0x42C12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42C128u;
            // 0x42c12c: 0xfca70010  sd          $a3, 0x10($a1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42C14Cu;
            goto label_42c14c;
        }
    }
    ctx->pc = 0x42C130u;
    // 0x42c130: 0x30e20100  andi        $v0, $a3, 0x100
    ctx->pc = 0x42c130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
    // 0x42c134: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42C134u;
    {
        const bool branch_taken_0x42c134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C134u;
        // 0x42c138: 0x64e20080  daddiu      $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c134) {
            ctx->pc = 0x42C144u;
            goto label_42c144;
        }
    }
    ctx->pc = 0x42C13Cu;
    // 0x42c13c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x42C13Cu;
    {
        const bool branch_taken_0x42c13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C13Cu;
        // 0x42c140: 0x64e70080  daddiu      $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c13c) {
            ctx->pc = 0x42C148u;
            goto label_42c148;
        }
    }
    ctx->pc = 0x42C144u;
label_42c144:
    // 0x42c144: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x42c144u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_42c148:
    // 0x42c148: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x42c148u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
label_42c14c:
    // 0x42c14c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x42c14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_42c150:
    // 0x42c150: 0xc10ae22  jal         func_42B888
    ctx->pc = 0x42C150u;
    SET_GPR_U32(ctx, 31, 0x42C158u);
    ctx->pc = 0x42B888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B888u, 0x42C150u, 0x42C158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C158u;
label_42c158:
    // 0x42c158: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x42c158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x42c15c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x42c15cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x42c160: 0x3e00008  jr          $ra
    ctx->pc = 0x42C160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C160u;
        // 0x42c164: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C168u;
}
