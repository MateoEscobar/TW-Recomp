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

// Function: sub_00414BC0
// Address: 0x414bc0 - 0x414cc8
void sub_00414BC0_0x414bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414BC0_0x414bc0");
#endif

    switch (ctx->pc) {
        case 0x414bc0u: goto label_414bc0;
        case 0x414bc4u: goto label_414bc4;
        case 0x414bc8u: goto label_414bc8;
        case 0x414bccu: goto label_414bcc;
        case 0x414bd0u: goto label_414bd0;
        case 0x414bd4u: goto label_414bd4;
        case 0x414bd8u: goto label_414bd8;
        case 0x414bdcu: goto label_414bdc;
        case 0x414be0u: goto label_414be0;
        case 0x414be4u: goto label_414be4;
        case 0x414be8u: goto label_414be8;
        case 0x414becu: goto label_414bec;
        case 0x414bf0u: goto label_414bf0;
        case 0x414bf4u: goto label_414bf4;
        case 0x414bf8u: goto label_414bf8;
        case 0x414bfcu: goto label_414bfc;
        case 0x414c00u: goto label_414c00;
        case 0x414c04u: goto label_414c04;
        case 0x414c08u: goto label_414c08;
        case 0x414c0cu: goto label_414c0c;
        case 0x414c10u: goto label_414c10;
        case 0x414c14u: goto label_414c14;
        case 0x414c18u: goto label_414c18;
        case 0x414c1cu: goto label_414c1c;
        case 0x414c20u: goto label_414c20;
        case 0x414c24u: goto label_414c24;
        case 0x414c28u: goto label_414c28;
        case 0x414c2cu: goto label_414c2c;
        case 0x414c30u: goto label_414c30;
        case 0x414c34u: goto label_414c34;
        case 0x414c38u: goto label_414c38;
        case 0x414c3cu: goto label_414c3c;
        case 0x414c40u: goto label_414c40;
        case 0x414c44u: goto label_414c44;
        case 0x414c48u: goto label_414c48;
        case 0x414c4cu: goto label_414c4c;
        case 0x414c50u: goto label_414c50;
        case 0x414c54u: goto label_414c54;
        case 0x414c58u: goto label_414c58;
        case 0x414c5cu: goto label_414c5c;
        case 0x414c60u: goto label_414c60;
        case 0x414c64u: goto label_414c64;
        case 0x414c68u: goto label_414c68;
        case 0x414c6cu: goto label_414c6c;
        case 0x414c70u: goto label_414c70;
        case 0x414c74u: goto label_414c74;
        case 0x414c78u: goto label_414c78;
        case 0x414c7cu: goto label_414c7c;
        case 0x414c80u: goto label_414c80;
        case 0x414c84u: goto label_414c84;
        case 0x414c88u: goto label_414c88;
        case 0x414c8cu: goto label_414c8c;
        case 0x414c90u: goto label_414c90;
        case 0x414c94u: goto label_414c94;
        case 0x414c98u: goto label_414c98;
        case 0x414c9cu: goto label_414c9c;
        case 0x414ca0u: goto label_414ca0;
        case 0x414ca4u: goto label_414ca4;
        case 0x414ca8u: goto label_414ca8;
        case 0x414cacu: goto label_414cac;
        case 0x414cb0u: goto label_414cb0;
        case 0x414cb4u: goto label_414cb4;
        case 0x414cb8u: goto label_414cb8;
        case 0x414cbcu: goto label_414cbc;
        case 0x414cc0u: goto label_414cc0;
        case 0x414cc4u: goto label_414cc4;
        default: break;
    }

    ctx->pc = 0x414bc0u;

label_414bc0:
    // 0x414bc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x414bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_414bc4:
    // 0x414bc4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x414bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_414bc8:
    // 0x414bc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x414bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_414bcc:
    // 0x414bcc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x414bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_414bd0:
    // 0x414bd0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x414bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_414bd4:
    // 0x414bd4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x414bd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_414bd8:
    // 0x414bd8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x414bd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_414bdc:
    // 0x414bdc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x414bdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_414be0:
    // 0x414be0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x414be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_414be4:
    // 0x414be4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x414be4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_414be8:
    // 0x414be8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x414be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_414bec:
    // 0x414bec: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x414becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_414bf0:
    // 0x414bf0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x414bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_414bf4:
    // 0x414bf4: 0xc0e4060  jal         func_390180
label_414bf8:
    if (ctx->pc == 0x414BF8u) {
        ctx->pc = 0x414BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414BF4u;
        // 0x414bf8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414BFCu;
        goto label_414bfc;
    }
    ctx->pc = 0x414BF4u;
    SET_GPR_U32(ctx, 31, 0x414BFCu);
    ctx->pc = 0x414BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414BF4u;
    // 0x414bf8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x414BF4u, 0x414BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414BFCu;
label_414bfc:
    // 0x414bfc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x414bfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_414c00:
    // 0x414c00: 0x12400029  beqz        $s2, . + 4 + (0x29 << 2)
label_414c04:
    if (ctx->pc == 0x414C04u) {
        ctx->pc = 0x414C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C00u;
        // 0x414c04: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414C08u;
        goto label_414c08;
    }
    ctx->pc = 0x414C00u;
    {
        const bool branch_taken_0x414c00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x414C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C00u;
        // 0x414c04: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414c00) {
            ctx->pc = 0x414CA8u;
            goto label_414ca8;
        }
    }
    ctx->pc = 0x414C08u;
label_414c08:
    // 0x414c08: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x414c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_414c0c:
    // 0x414c0c: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x414c0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_414c10:
    // 0x414c10: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x414c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_414c14:
    // 0x414c14: 0x40f809  jalr        $v0
label_414c18:
    if (ctx->pc == 0x414C18u) {
        ctx->pc = 0x414C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C14u;
        // 0x414c18: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414C1Cu;
        goto label_414c1c;
    }
    ctx->pc = 0x414C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414C1Cu);
        ctx->pc = 0x414C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C14u;
        // 0x414c18: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414C14u, 0x414C1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414C1Cu;
label_414c1c:
    // 0x414c1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x414c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_414c20:
    // 0x414c20: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
label_414c24:
    if (ctx->pc == 0x414C24u) {
        ctx->pc = 0x414C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C20u;
        // 0x414c24: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414C28u;
        goto label_414c28;
    }
    ctx->pc = 0x414C20u;
    {
        const bool branch_taken_0x414c20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x414c20) {
            ctx->pc = 0x414C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x414C20u;
            // 0x414c24: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x414C40u;
            goto label_414c40;
        }
    }
    ctx->pc = 0x414C28u;
label_414c28:
    // 0x414c28: 0xc0e1232  jal         func_3848C8
label_414c2c:
    if (ctx->pc == 0x414C2Cu) {
        ctx->pc = 0x414C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C28u;
        // 0x414c2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414C30u;
        goto label_414c30;
    }
    ctx->pc = 0x414C28u;
    SET_GPR_U32(ctx, 31, 0x414C30u);
    ctx->pc = 0x414C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414C28u;
    // 0x414c2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3848C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3848C8u, 0x414C28u, 0x414C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414C30u;
label_414c30:
    // 0x414c30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x414c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_414c34:
    // 0x414c34: 0x5200001c  beql        $s0, $zero, . + 4 + (0x1C << 2)
label_414c38:
    if (ctx->pc == 0x414C38u) {
        ctx->pc = 0x414C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C34u;
        // 0x414c38: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414C3Cu;
        goto label_414c3c;
    }
    ctx->pc = 0x414C34u;
    {
        const bool branch_taken_0x414c34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x414c34) {
            ctx->pc = 0x414C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x414C34u;
            // 0x414c38: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x414CA8u;
            goto label_414ca8;
        }
    }
    ctx->pc = 0x414C3Cu;
label_414c3c:
    // 0x414c3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x414c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_414c40:
    // 0x414c40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x414c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_414c44:
    // 0x414c44: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x414c44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_414c48:
    // 0x414c48: 0x8c460044  lw          $a2, 0x44($v0)
    ctx->pc = 0x414c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_414c4c:
    // 0x414c4c: 0xc0f809  jalr        $a2
label_414c50:
    if (ctx->pc == 0x414C50u) {
        ctx->pc = 0x414C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C4Cu;
        // 0x414c50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414C54u;
        goto label_414c54;
    }
    ctx->pc = 0x414C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x414C54u);
        ctx->pc = 0x414C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C4Cu;
        // 0x414c50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414C4Cu, 0x414C54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414C54u;
label_414c54:
    // 0x414c54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x414c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_414c58:
    // 0x414c58: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x414c58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_414c5c:
    // 0x414c5c: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x414c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_414c60:
    // 0x414c60: 0x40f809  jalr        $v0
label_414c64:
    if (ctx->pc == 0x414C64u) {
        ctx->pc = 0x414C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C60u;
        // 0x414c64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414C68u;
        goto label_414c68;
    }
    ctx->pc = 0x414C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414C68u);
        ctx->pc = 0x414C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C60u;
        // 0x414c64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414C60u, 0x414C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414C68u;
label_414c68:
    // 0x414c68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x414c68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_414c6c:
    // 0x414c6c: 0x5620000b  bnel        $s1, $zero, . + 4 + (0xB << 2)
label_414c70:
    if (ctx->pc == 0x414C70u) {
        ctx->pc = 0x414C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C6Cu;
        // 0x414c70: 0xae33017c  sw          $s3, 0x17C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414C74u;
        goto label_414c74;
    }
    ctx->pc = 0x414C6Cu;
    {
        const bool branch_taken_0x414c6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x414c6c) {
            ctx->pc = 0x414C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x414C6Cu;
            // 0x414c70: 0xae33017c  sw          $s3, 0x17C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x414C9Cu;
            goto label_414c9c;
        }
    }
    ctx->pc = 0x414C74u;
label_414c74:
    // 0x414c74: 0xc1050b4  jal         func_4142D0
label_414c78:
    if (ctx->pc == 0x414C78u) {
        ctx->pc = 0x414C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C74u;
        // 0x414c78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414C7Cu;
        goto label_414c7c;
    }
    ctx->pc = 0x414C74u;
    SET_GPR_U32(ctx, 31, 0x414C7Cu);
    ctx->pc = 0x414C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414C74u;
    // 0x414c78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4142D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4142D0u, 0x414C74u, 0x414C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414C7Cu;
label_414c7c:
    // 0x414c7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x414c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_414c80:
    // 0x414c80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x414c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_414c84:
    // 0x414c84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x414c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_414c88:
    // 0x414c88: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x414c88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_414c8c:
    // 0x414c8c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x414c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_414c90:
    // 0x414c90: 0x40f809  jalr        $v0
label_414c94:
    if (ctx->pc == 0x414C94u) {
        ctx->pc = 0x414C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C90u;
        // 0x414c94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414C98u;
        goto label_414c98;
    }
    ctx->pc = 0x414C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414C98u);
        ctx->pc = 0x414C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C90u;
        // 0x414c94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414C90u, 0x414C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414C98u;
label_414c98:
    // 0x414c98: 0xae33017c  sw          $s3, 0x17C($s1)
    ctx->pc = 0x414c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 19));
label_414c9c:
    // 0x414c9c: 0xae340180  sw          $s4, 0x180($s1)
    ctx->pc = 0x414c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 384), GPR_U32(ctx, 20));
label_414ca0:
    // 0x414ca0: 0xe6340174  swc1        $f20, 0x174($s1)
    ctx->pc = 0x414ca0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 372), bits); }
label_414ca4:
    // 0x414ca4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x414ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_414ca8:
    // 0x414ca8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x414ca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_414cac:
    // 0x414cac: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x414cacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_414cb0:
    // 0x414cb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x414cb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_414cb4:
    // 0x414cb4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x414cb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_414cb8:
    // 0x414cb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x414cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_414cbc:
    // 0x414cbc: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x414cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_414cc0:
    // 0x414cc0: 0x3e00008  jr          $ra
label_414cc4:
    if (ctx->pc == 0x414CC4u) {
        ctx->pc = 0x414CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414CC0u;
        // 0x414cc4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414CC8u;
        goto label_fallthrough_0x414cc0;
    }
    ctx->pc = 0x414CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414CC0u;
        // 0x414cc4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x414cc0:
    ctx->pc = 0x414CC8u;
}
