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

// Function: sub_004A4B68
// Address: 0x4a4b68 - 0x4a4e00
void sub_004A4B68_0x4a4b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4B68_0x4a4b68");
#endif

    switch (ctx->pc) {
        case 0x4a4c58u: goto label_4a4c58;
        case 0x4a4c64u: goto label_4a4c64;
        case 0x4a4de0u: goto label_4a4de0;
        case 0x4a4decu: goto label_4a4dec;
        default: break;
    }

    ctx->pc = 0x4a4b68u;

    // 0x4a4b68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a4b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a4b6c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4a4b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4b70: 0x10c0003f  beqz        $a2, . + 4 + (0x3F << 2)
    ctx->pc = 0x4A4B70u;
    {
        const bool branch_taken_0x4a4b70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4B70u;
        // 0x4a4b74: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4b70) {
            ctx->pc = 0x4A4C70u;
            goto label_4a4c70;
        }
    }
    ctx->pc = 0x4A4B78u;
    // 0x4a4b78: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x4a4b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4a4b7c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x4a4b7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x4a4b80: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x4A4B80u;
    {
        const bool branch_taken_0x4a4b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4B80u;
        // 0x4a4b84: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4b80) {
            ctx->pc = 0x4A4C48u;
            goto label_4a4c48;
        }
    }
    ctx->pc = 0x4A4B88u;
    // 0x4a4b88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4a4b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4a4b8c: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x4a4b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x4a4b90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a4b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a4b94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4a4b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a4b98: 0x800008  jr          $a0
    ctx->pc = 0x4A4B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4A4BA0u: goto label_4a4ba0;
            case 0x4A4BBCu: goto label_4a4bbc;
            case 0x4A4BD8u: goto label_4a4bd8;
            case 0x4A4BF4u: goto label_4a4bf4;
            case 0x4A4C10u: goto label_4a4c10;
            case 0x4A4C2Cu: goto label_4a4c2c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4B98u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4A4BA0u;
label_4a4ba0:
    // 0x4a4ba0: 0x8f848a80  lw          $a0, -0x7580($gp)
    ctx->pc = 0x4a4ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4ba4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4a4ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4a4ba8: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x4a4ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x4a4bac: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x4a4bacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4bb0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4a4bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a4bb4: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x4A4BB4u;
    {
        const bool branch_taken_0x4a4bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4BB4u;
        // 0x4a4bb8: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4bb4) {
            ctx->pc = 0x4A4DF0u;
            goto label_4a4df0;
        }
    }
    ctx->pc = 0x4A4BBCu;
label_4a4bbc:
    // 0x4a4bbc: 0x8f848a80  lw          $a0, -0x7580($gp)
    ctx->pc = 0x4a4bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4bc0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4a4bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4a4bc4: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x4a4bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x4a4bc8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x4a4bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4bcc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4a4bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a4bd0: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x4A4BD0u;
    {
        const bool branch_taken_0x4a4bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4BD0u;
        // 0x4a4bd4: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4bd0) {
            ctx->pc = 0x4A4DF0u;
            goto label_4a4df0;
        }
    }
    ctx->pc = 0x4A4BD8u;
label_4a4bd8:
    // 0x4a4bd8: 0x8f848a80  lw          $a0, -0x7580($gp)
    ctx->pc = 0x4a4bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4bdc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4a4bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4a4be0: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x4a4be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x4a4be4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x4a4be4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4be8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4a4be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a4bec: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x4A4BECu;
    {
        const bool branch_taken_0x4a4bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4BECu;
        // 0x4a4bf0: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4bec) {
            ctx->pc = 0x4A4DF0u;
            goto label_4a4df0;
        }
    }
    ctx->pc = 0x4A4BF4u;
label_4a4bf4:
    // 0x4a4bf4: 0x8f848a80  lw          $a0, -0x7580($gp)
    ctx->pc = 0x4a4bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4bf8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4a4bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4a4bfc: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x4a4bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x4a4c00: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x4a4c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4c04: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4a4c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a4c08: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x4A4C08u;
    {
        const bool branch_taken_0x4a4c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4C08u;
        // 0x4a4c0c: 0xac860010  sw          $a2, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4c08) {
            ctx->pc = 0x4A4DF0u;
            goto label_4a4df0;
        }
    }
    ctx->pc = 0x4A4C10u;
label_4a4c10:
    // 0x4a4c10: 0x8f848a80  lw          $a0, -0x7580($gp)
    ctx->pc = 0x4a4c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4c14: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4a4c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4a4c18: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x4a4c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x4a4c1c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x4a4c1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4c20: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4a4c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a4c24: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x4A4C24u;
    {
        const bool branch_taken_0x4a4c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4C24u;
        // 0x4a4c28: 0xac860014  sw          $a2, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4c24) {
            ctx->pc = 0x4A4DF0u;
            goto label_4a4df0;
        }
    }
    ctx->pc = 0x4A4C2Cu;
label_4a4c2c:
    // 0x4a4c2c: 0x8f848a80  lw          $a0, -0x7580($gp)
    ctx->pc = 0x4a4c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4c30: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4a4c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4a4c34: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x4a4c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x4a4c38: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x4a4c38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4c3c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4a4c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a4c40: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x4A4C40u;
    {
        const bool branch_taken_0x4a4c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4C40u;
        // 0x4a4c44: 0xac860018  sw          $a2, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4c40) {
            ctx->pc = 0x4A4DF0u;
            goto label_4a4df0;
        }
    }
    ctx->pc = 0x4A4C48u;
label_4a4c48:
    // 0x4a4c48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a4c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a4c4c: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x4a4c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4a4c50: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4A4C50u;
    SET_GPR_U32(ctx, 31, 0x4A4C58u);
    ctx->pc = 0x4A4C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4C50u;
    // 0x4a4c54: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A4C50u, 0x4A4C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4C58u;
label_4a4c58:
    // 0x4a4c58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a4c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4c5c: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4A4C5Cu;
    SET_GPR_U32(ctx, 31, 0x4A4C64u);
    ctx->pc = 0x4A4C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4C5Cu;
    // 0x4a4c60: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A4C5Cu, 0x4A4C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4C64u;
label_4a4c64:
    // 0x4a4c64: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x4A4C64u;
    {
        const bool branch_taken_0x4a4c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4C64u;
        // 0x4a4c68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4c64) {
            ctx->pc = 0x4A4DF0u;
            goto label_4a4df0;
        }
    }
    ctx->pc = 0x4A4C6Cu;
    // 0x4a4c6c: 0x0  nop
    ctx->pc = 0x4a4c6cu;
    // NOP
label_4a4c70:
    // 0x4a4c70: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x4a4c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4a4c74: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x4a4c74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x4a4c78: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x4A4C78u;
    {
        const bool branch_taken_0x4a4c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4C78u;
        // 0x4a4c7c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4c78) {
            ctx->pc = 0x4A4DD0u;
            goto label_4a4dd0;
        }
    }
    ctx->pc = 0x4A4C80u;
    // 0x4a4c80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4a4c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4a4c84: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x4a4c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x4a4c88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a4c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a4c8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4a4c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a4c90: 0x800008  jr          $a0
    ctx->pc = 0x4A4C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4A4C98u: goto label_4a4c98;
            case 0x4A4CCCu: goto label_4a4ccc;
            case 0x4A4D00u: goto label_4a4d00;
            case 0x4A4D34u: goto label_4a4d34;
            case 0x4A4D68u: goto label_4a4d68;
            case 0x4A4D9Cu: goto label_4a4d9c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4C90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4A4C98u;
label_4a4c98:
    // 0x4a4c98: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a4c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4a4c9c: 0x8f848a80  lw          $a0, -0x7580($gp)
    ctx->pc = 0x4a4c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4ca0: 0x2443ad18  addiu       $v1, $v0, -0x52E8
    ctx->pc = 0x4a4ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a4ca4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4a4ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a4ca8: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x4a4ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x4a4cac: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A4CACu;
    {
        const bool branch_taken_0x4a4cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4cac) {
            ctx->pc = 0x4A4CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A4CACu;
            // 0x4a4cb0: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4CB8u;
            goto label_4a4cb8;
        }
    }
    ctx->pc = 0x4A4CB4u;
    // 0x4a4cb4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x4a4cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_4a4cb8:
    // 0x4a4cb8: 0x8f838a80  lw          $v1, -0x7580($gp)
    ctx->pc = 0x4a4cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4cbc: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4a4cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a4cc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a4cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a4cc4: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x4A4CC4u;
    {
        const bool branch_taken_0x4a4cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4CC4u;
        // 0x4a4cc8: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4cc4) {
            ctx->pc = 0x4A4DF0u;
            goto label_4a4df0;
        }
    }
    ctx->pc = 0x4A4CCCu;
label_4a4ccc:
    // 0x4a4ccc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a4cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4a4cd0: 0x8f848a80  lw          $a0, -0x7580($gp)
    ctx->pc = 0x4a4cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4cd4: 0x2443ad18  addiu       $v1, $v0, -0x52E8
    ctx->pc = 0x4a4cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a4cd8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4a4cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a4cdc: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x4a4cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x4a4ce0: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A4CE0u;
    {
        const bool branch_taken_0x4a4ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4ce0) {
            ctx->pc = 0x4A4CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A4CE0u;
            // 0x4a4ce4: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4CECu;
            goto label_4a4cec;
        }
    }
    ctx->pc = 0x4A4CE8u;
    // 0x4a4ce8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x4a4ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_4a4cec:
    // 0x4a4cec: 0x8f838a80  lw          $v1, -0x7580($gp)
    ctx->pc = 0x4a4cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4cf0: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4a4cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a4cf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a4cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a4cf8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x4A4CF8u;
    {
        const bool branch_taken_0x4a4cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4CF8u;
        // 0x4a4cfc: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4cf8) {
            ctx->pc = 0x4A4DF0u;
            goto label_4a4df0;
        }
    }
    ctx->pc = 0x4A4D00u;
label_4a4d00:
    // 0x4a4d00: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a4d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4a4d04: 0x8f848a80  lw          $a0, -0x7580($gp)
    ctx->pc = 0x4a4d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4d08: 0x2443ad18  addiu       $v1, $v0, -0x52E8
    ctx->pc = 0x4a4d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a4d0c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4a4d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a4d10: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x4a4d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x4a4d14: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A4D14u;
    {
        const bool branch_taken_0x4a4d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4d14) {
            ctx->pc = 0x4A4D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A4D14u;
            // 0x4a4d18: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4D20u;
            goto label_4a4d20;
        }
    }
    ctx->pc = 0x4A4D1Cu;
    // 0x4a4d1c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x4a4d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_4a4d20:
    // 0x4a4d20: 0x8f838a80  lw          $v1, -0x7580($gp)
    ctx->pc = 0x4a4d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4d24: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4a4d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a4d28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a4d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a4d2c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x4A4D2Cu;
    {
        const bool branch_taken_0x4a4d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4D2Cu;
        // 0x4a4d30: 0x8c620028  lw          $v0, 0x28($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4d2c) {
            ctx->pc = 0x4A4DF0u;
            goto label_4a4df0;
        }
    }
    ctx->pc = 0x4A4D34u;
label_4a4d34:
    // 0x4a4d34: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a4d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4a4d38: 0x8f848a80  lw          $a0, -0x7580($gp)
    ctx->pc = 0x4a4d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4d3c: 0x2443ad18  addiu       $v1, $v0, -0x52E8
    ctx->pc = 0x4a4d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a4d40: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4a4d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a4d44: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x4a4d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x4a4d48: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A4D48u;
    {
        const bool branch_taken_0x4a4d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4d48) {
            ctx->pc = 0x4A4D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A4D48u;
            // 0x4a4d4c: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4D54u;
            goto label_4a4d54;
        }
    }
    ctx->pc = 0x4A4D50u;
    // 0x4a4d50: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x4a4d50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_4a4d54:
    // 0x4a4d54: 0x8f838a80  lw          $v1, -0x7580($gp)
    ctx->pc = 0x4a4d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4d58: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4a4d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a4d5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a4d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a4d60: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x4A4D60u;
    {
        const bool branch_taken_0x4a4d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4D60u;
        // 0x4a4d64: 0x8c62002c  lw          $v0, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4d60) {
            ctx->pc = 0x4A4DF0u;
            goto label_4a4df0;
        }
    }
    ctx->pc = 0x4A4D68u;
label_4a4d68:
    // 0x4a4d68: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a4d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4a4d6c: 0x8f848a80  lw          $a0, -0x7580($gp)
    ctx->pc = 0x4a4d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4d70: 0x2443ad18  addiu       $v1, $v0, -0x52E8
    ctx->pc = 0x4a4d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a4d74: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4a4d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a4d78: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x4a4d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x4a4d7c: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A4D7Cu;
    {
        const bool branch_taken_0x4a4d7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4d7c) {
            ctx->pc = 0x4A4D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A4D7Cu;
            // 0x4a4d80: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4D88u;
            goto label_4a4d88;
        }
    }
    ctx->pc = 0x4A4D84u;
    // 0x4a4d84: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x4a4d84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_4a4d88:
    // 0x4a4d88: 0x8f838a80  lw          $v1, -0x7580($gp)
    ctx->pc = 0x4a4d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4d8c: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4a4d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a4d90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a4d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a4d94: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x4A4D94u;
    {
        const bool branch_taken_0x4a4d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4D94u;
        // 0x4a4d98: 0x8c620030  lw          $v0, 0x30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4d94) {
            ctx->pc = 0x4A4DF0u;
            goto label_4a4df0;
        }
    }
    ctx->pc = 0x4A4D9Cu;
label_4a4d9c:
    // 0x4a4d9c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a4d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4a4da0: 0x8f848a80  lw          $a0, -0x7580($gp)
    ctx->pc = 0x4a4da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4da4: 0x2443ad18  addiu       $v1, $v0, -0x52E8
    ctx->pc = 0x4a4da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a4da8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4a4da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a4dac: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x4a4dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x4a4db0: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A4DB0u;
    {
        const bool branch_taken_0x4a4db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4db0) {
            ctx->pc = 0x4A4DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A4DB0u;
            // 0x4a4db4: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4DBCu;
            goto label_4a4dbc;
        }
    }
    ctx->pc = 0x4A4DB8u;
    // 0x4a4db8: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x4a4db8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_4a4dbc:
    // 0x4a4dbc: 0x8f838a80  lw          $v1, -0x7580($gp)
    ctx->pc = 0x4a4dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4dc0: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4a4dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4a4dc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a4dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a4dc8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4A4DC8u;
    {
        const bool branch_taken_0x4a4dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4DC8u;
        // 0x4a4dcc: 0x8c620034  lw          $v0, 0x34($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4dc8) {
            ctx->pc = 0x4A4DF0u;
            goto label_4a4df0;
        }
    }
    ctx->pc = 0x4A4DD0u;
label_4a4dd0:
    // 0x4a4dd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a4dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a4dd4: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x4a4dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4a4dd8: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4A4DD8u;
    SET_GPR_U32(ctx, 31, 0x4A4DE0u);
    ctx->pc = 0x4A4DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4DD8u;
    // 0x4a4ddc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A4DD8u, 0x4A4DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4DE0u;
label_4a4de0:
    // 0x4a4de0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a4de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4de4: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4A4DE4u;
    SET_GPR_U32(ctx, 31, 0x4A4DECu);
    ctx->pc = 0x4A4DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4DE4u;
    // 0x4a4de8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A4DE4u, 0x4A4DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4DECu;
label_4a4dec:
    // 0x4a4dec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a4decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a4df0:
    // 0x4a4df0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a4df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a4df4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A4DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A4DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4DF4u;
        // 0x4a4df8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A4DFCu;
    // 0x4a4dfc: 0x0  nop
    ctx->pc = 0x4a4dfcu;
    // NOP
    ctx->pc = 0x4a4e00u;
}
