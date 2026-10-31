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

// Function: sub_001E9BF0
// Address: 0x1e9bf0 - 0x1e9da0
void sub_001E9BF0_0x1e9bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9BF0_0x1e9bf0");
#endif

    switch (ctx->pc) {
        case 0x1e9bf0u: goto label_1e9bf0;
        case 0x1e9bf4u: goto label_1e9bf4;
        case 0x1e9bf8u: goto label_1e9bf8;
        case 0x1e9bfcu: goto label_1e9bfc;
        case 0x1e9c00u: goto label_1e9c00;
        case 0x1e9c04u: goto label_1e9c04;
        case 0x1e9c08u: goto label_1e9c08;
        case 0x1e9c0cu: goto label_1e9c0c;
        case 0x1e9c10u: goto label_1e9c10;
        case 0x1e9c14u: goto label_1e9c14;
        case 0x1e9c18u: goto label_1e9c18;
        case 0x1e9c1cu: goto label_1e9c1c;
        case 0x1e9c20u: goto label_1e9c20;
        case 0x1e9c24u: goto label_1e9c24;
        case 0x1e9c28u: goto label_1e9c28;
        case 0x1e9c2cu: goto label_1e9c2c;
        case 0x1e9c30u: goto label_1e9c30;
        case 0x1e9c34u: goto label_1e9c34;
        case 0x1e9c38u: goto label_1e9c38;
        case 0x1e9c3cu: goto label_1e9c3c;
        case 0x1e9c40u: goto label_1e9c40;
        case 0x1e9c44u: goto label_1e9c44;
        case 0x1e9c48u: goto label_1e9c48;
        case 0x1e9c4cu: goto label_1e9c4c;
        case 0x1e9c50u: goto label_1e9c50;
        case 0x1e9c54u: goto label_1e9c54;
        case 0x1e9c58u: goto label_1e9c58;
        case 0x1e9c5cu: goto label_1e9c5c;
        case 0x1e9c60u: goto label_1e9c60;
        case 0x1e9c64u: goto label_1e9c64;
        case 0x1e9c68u: goto label_1e9c68;
        case 0x1e9c6cu: goto label_1e9c6c;
        case 0x1e9c70u: goto label_1e9c70;
        case 0x1e9c74u: goto label_1e9c74;
        case 0x1e9c78u: goto label_1e9c78;
        case 0x1e9c7cu: goto label_1e9c7c;
        case 0x1e9c80u: goto label_1e9c80;
        case 0x1e9c84u: goto label_1e9c84;
        case 0x1e9c88u: goto label_1e9c88;
        case 0x1e9c8cu: goto label_1e9c8c;
        case 0x1e9c90u: goto label_1e9c90;
        case 0x1e9c94u: goto label_1e9c94;
        case 0x1e9c98u: goto label_1e9c98;
        case 0x1e9c9cu: goto label_1e9c9c;
        case 0x1e9ca0u: goto label_1e9ca0;
        case 0x1e9ca4u: goto label_1e9ca4;
        case 0x1e9ca8u: goto label_1e9ca8;
        case 0x1e9cacu: goto label_1e9cac;
        case 0x1e9cb0u: goto label_1e9cb0;
        case 0x1e9cb4u: goto label_1e9cb4;
        case 0x1e9cb8u: goto label_1e9cb8;
        case 0x1e9cbcu: goto label_1e9cbc;
        case 0x1e9cc0u: goto label_1e9cc0;
        case 0x1e9cc4u: goto label_1e9cc4;
        case 0x1e9cc8u: goto label_1e9cc8;
        case 0x1e9cccu: goto label_1e9ccc;
        case 0x1e9cd0u: goto label_1e9cd0;
        case 0x1e9cd4u: goto label_1e9cd4;
        case 0x1e9cd8u: goto label_1e9cd8;
        case 0x1e9cdcu: goto label_1e9cdc;
        case 0x1e9ce0u: goto label_1e9ce0;
        case 0x1e9ce4u: goto label_1e9ce4;
        case 0x1e9ce8u: goto label_1e9ce8;
        case 0x1e9cecu: goto label_1e9cec;
        case 0x1e9cf0u: goto label_1e9cf0;
        case 0x1e9cf4u: goto label_1e9cf4;
        case 0x1e9cf8u: goto label_1e9cf8;
        case 0x1e9cfcu: goto label_1e9cfc;
        case 0x1e9d00u: goto label_1e9d00;
        case 0x1e9d04u: goto label_1e9d04;
        case 0x1e9d08u: goto label_1e9d08;
        case 0x1e9d0cu: goto label_1e9d0c;
        case 0x1e9d10u: goto label_1e9d10;
        case 0x1e9d14u: goto label_1e9d14;
        case 0x1e9d18u: goto label_1e9d18;
        case 0x1e9d1cu: goto label_1e9d1c;
        case 0x1e9d20u: goto label_1e9d20;
        case 0x1e9d24u: goto label_1e9d24;
        case 0x1e9d28u: goto label_1e9d28;
        case 0x1e9d2cu: goto label_1e9d2c;
        case 0x1e9d30u: goto label_1e9d30;
        case 0x1e9d34u: goto label_1e9d34;
        case 0x1e9d38u: goto label_1e9d38;
        case 0x1e9d3cu: goto label_1e9d3c;
        case 0x1e9d40u: goto label_1e9d40;
        case 0x1e9d44u: goto label_1e9d44;
        case 0x1e9d48u: goto label_1e9d48;
        case 0x1e9d4cu: goto label_1e9d4c;
        case 0x1e9d50u: goto label_1e9d50;
        case 0x1e9d54u: goto label_1e9d54;
        case 0x1e9d58u: goto label_1e9d58;
        case 0x1e9d5cu: goto label_1e9d5c;
        case 0x1e9d60u: goto label_1e9d60;
        case 0x1e9d64u: goto label_1e9d64;
        case 0x1e9d68u: goto label_1e9d68;
        case 0x1e9d6cu: goto label_1e9d6c;
        case 0x1e9d70u: goto label_1e9d70;
        case 0x1e9d74u: goto label_1e9d74;
        case 0x1e9d78u: goto label_1e9d78;
        case 0x1e9d7cu: goto label_1e9d7c;
        case 0x1e9d80u: goto label_1e9d80;
        case 0x1e9d84u: goto label_1e9d84;
        case 0x1e9d88u: goto label_1e9d88;
        case 0x1e9d8cu: goto label_1e9d8c;
        case 0x1e9d90u: goto label_1e9d90;
        case 0x1e9d94u: goto label_1e9d94;
        case 0x1e9d98u: goto label_1e9d98;
        case 0x1e9d9cu: goto label_1e9d9c;
        default: break;
    }

    ctx->pc = 0x1e9bf0u;

label_1e9bf0:
    // 0x1e9bf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e9bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e9bf4:
    // 0x1e9bf4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e9bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e9bf8:
    // 0x1e9bf8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e9bf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e9bfc:
    // 0x1e9bfc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e9bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1e9c00:
    // 0x1e9c00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e9c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e9c04:
    // 0x1e9c04: 0x26300094  addiu       $s0, $s1, 0x94
    ctx->pc = 0x1e9c04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
label_1e9c08:
    // 0x1e9c08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e9c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e9c0c:
    // 0x1e9c0c: 0x30b2ffff  andi        $s2, $a1, 0xFFFF
    ctx->pc = 0x1e9c0cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_1e9c10:
    // 0x1e9c10: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1e9c10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1e9c14:
    // 0x1e9c14: 0xc0e4060  jal         func_390180
label_1e9c18:
    if (ctx->pc == 0x1E9C18u) {
        ctx->pc = 0x1E9C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C14u;
        // 0x1e9c18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C1Cu;
        goto label_1e9c1c;
    }
    ctx->pc = 0x1E9C14u;
    SET_GPR_U32(ctx, 31, 0x1E9C1Cu);
    ctx->pc = 0x1E9C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C14u;
    // 0x1e9c18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1E9C14u, 0x1E9C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C1Cu;
label_1e9c1c:
    // 0x1e9c1c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_1e9c20:
    if (ctx->pc == 0x1E9C20u) {
        ctx->pc = 0x1E9C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C1Cu;
        // 0x1e9c20: 0x862400ac  lh          $a0, 0xAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C24u;
        goto label_1e9c24;
    }
    ctx->pc = 0x1E9C1Cu;
    {
        const bool branch_taken_0x1e9c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9c1c) {
            ctx->pc = 0x1E9C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9C1Cu;
            // 0x1e9c20: 0x862400ac  lh          $a0, 0xAC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9C60u;
            goto label_1e9c60;
        }
    }
    ctx->pc = 0x1E9C24u;
label_1e9c24:
    // 0x1e9c24: 0xc0e409a  jal         func_390268
label_1e9c28:
    if (ctx->pc == 0x1E9C28u) {
        ctx->pc = 0x1E9C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C24u;
        // 0x1e9c28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C2Cu;
        goto label_1e9c2c;
    }
    ctx->pc = 0x1E9C24u;
    SET_GPR_U32(ctx, 31, 0x1E9C2Cu);
    ctx->pc = 0x1E9C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C24u;
    // 0x1e9c28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1E9C24u, 0x1E9C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C2Cu;
label_1e9c2c:
    // 0x1e9c2c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x1e9c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_1e9c30:
    // 0x1e9c30: 0x5072004f  beql        $v1, $s2, . + 4 + (0x4F << 2)
label_1e9c34:
    if (ctx->pc == 0x1E9C34u) {
        ctx->pc = 0x1E9C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C30u;
        // 0x1e9c34: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C38u;
        goto label_1e9c38;
    }
    ctx->pc = 0x1E9C30u;
    {
        const bool branch_taken_0x1e9c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x1e9c30) {
            ctx->pc = 0x1E9C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9C30u;
            // 0x1e9c34: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9D70u;
            goto label_1e9d70;
        }
    }
    ctx->pc = 0x1E9C38u;
label_1e9c38:
    // 0x1e9c38: 0xc0e409a  jal         func_390268
label_1e9c3c:
    if (ctx->pc == 0x1E9C3Cu) {
        ctx->pc = 0x1E9C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C38u;
        // 0x1e9c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C40u;
        goto label_1e9c40;
    }
    ctx->pc = 0x1E9C38u;
    SET_GPR_U32(ctx, 31, 0x1E9C40u);
    ctx->pc = 0x1E9C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C38u;
    // 0x1e9c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1E9C38u, 0x1E9C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C40u;
label_1e9c40:
    // 0x1e9c40: 0xc089c70  jal         func_2271C0
label_1e9c44:
    if (ctx->pc == 0x1E9C44u) {
        ctx->pc = 0x1E9C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C40u;
        // 0x1e9c44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C48u;
        goto label_1e9c48;
    }
    ctx->pc = 0x1E9C40u;
    SET_GPR_U32(ctx, 31, 0x1E9C48u);
    ctx->pc = 0x1E9C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C40u;
    // 0x1e9c44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2271C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2271C0u, 0x1E9C40u, 0x1E9C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C48u;
label_1e9c48:
    // 0x1e9c48: 0xc0e409a  jal         func_390268
label_1e9c4c:
    if (ctx->pc == 0x1E9C4Cu) {
        ctx->pc = 0x1E9C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C48u;
        // 0x1e9c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C50u;
        goto label_1e9c50;
    }
    ctx->pc = 0x1E9C48u;
    SET_GPR_U32(ctx, 31, 0x1E9C50u);
    ctx->pc = 0x1E9C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C48u;
    // 0x1e9c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1E9C48u, 0x1E9C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C50u;
label_1e9c50:
    // 0x1e9c50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e9c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9c54:
    // 0x1e9c54: 0xc0871f2  jal         func_21C7C8
label_1e9c58:
    if (ctx->pc == 0x1E9C58u) {
        ctx->pc = 0x1E9C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C54u;
        // 0x1e9c58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C5Cu;
        goto label_1e9c5c;
    }
    ctx->pc = 0x1E9C54u;
    SET_GPR_U32(ctx, 31, 0x1E9C5Cu);
    ctx->pc = 0x1E9C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C54u;
    // 0x1e9c58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C7C8u, 0x1E9C54u, 0x1E9C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C5Cu;
label_1e9c5c:
    // 0x1e9c5c: 0x862400ac  lh          $a0, 0xAC($s1)
    ctx->pc = 0x1e9c5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 172)));
label_1e9c60:
    // 0x1e9c60: 0xc05a916  jal         func_16A458
label_1e9c64:
    if (ctx->pc == 0x1E9C64u) {
        ctx->pc = 0x1E9C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C60u;
        // 0x1e9c64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C68u;
        goto label_1e9c68;
    }
    ctx->pc = 0x1E9C60u;
    SET_GPR_U32(ctx, 31, 0x1E9C68u);
    ctx->pc = 0x1E9C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C60u;
    // 0x1e9c64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A458u, 0x1E9C60u, 0x1E9C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C68u;
label_1e9c68:
    // 0x1e9c68: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1e9c68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e9c6c:
    // 0x1e9c6c: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_1e9c70:
    if (ctx->pc == 0x1E9C70u) {
        ctx->pc = 0x1E9C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C6Cu;
        // 0x1e9c70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C74u;
        goto label_1e9c74;
    }
    ctx->pc = 0x1E9C6Cu;
    {
        const bool branch_taken_0x1e9c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C6Cu;
        // 0x1e9c70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c6c) {
            ctx->pc = 0x1E9D6Cu;
            goto label_1e9d6c;
        }
    }
    ctx->pc = 0x1E9C74u;
label_1e9c74:
    // 0x1e9c74: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1e9c74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_1e9c78:
    // 0x1e9c78: 0xc62c00b0  lwc1        $f12, 0xB0($s1)
    ctx->pc = 0x1e9c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e9c7c:
    // 0x1e9c7c: 0x862900ac  lh          $t1, 0xAC($s1)
    ctx->pc = 0x1e9c7cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 172)));
label_1e9c80:
    // 0x1e9c80: 0x24846bc0  addiu       $a0, $a0, 0x6BC0
    ctx->pc = 0x1e9c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27584));
label_1e9c84:
    // 0x1e9c84: 0x262600a0  addiu       $a2, $s1, 0xA0
    ctx->pc = 0x1e9c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_1e9c88:
    // 0x1e9c88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e9c88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9c8c:
    // 0x1e9c8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e9c8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9c90:
    // 0x1e9c90: 0xc08cf58  jal         func_233D60
label_1e9c94:
    if (ctx->pc == 0x1E9C94u) {
        ctx->pc = 0x1E9C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C90u;
        // 0x1e9c94: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C98u;
        goto label_1e9c98;
    }
    ctx->pc = 0x1E9C90u;
    SET_GPR_U32(ctx, 31, 0x1E9C98u);
    ctx->pc = 0x1E9C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C90u;
    // 0x1e9c94: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233D60u, 0x1E9C90u, 0x1E9C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C98u;
label_1e9c98:
    // 0x1e9c98: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x1e9c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
label_1e9c9c:
    // 0x1e9c9c: 0xc0e4060  jal         func_390180
label_1e9ca0:
    if (ctx->pc == 0x1E9CA0u) {
        ctx->pc = 0x1E9CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C9Cu;
        // 0x1e9ca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9CA4u;
        goto label_1e9ca4;
    }
    ctx->pc = 0x1E9C9Cu;
    SET_GPR_U32(ctx, 31, 0x1E9CA4u);
    ctx->pc = 0x1E9CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C9Cu;
    // 0x1e9ca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1E9C9Cu, 0x1E9CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9CA4u;
label_1e9ca4:
    // 0x1e9ca4: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_1e9ca8:
    if (ctx->pc == 0x1E9CA8u) {
        ctx->pc = 0x1E9CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CA4u;
        // 0x1e9ca8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9CACu;
        goto label_1e9cac;
    }
    ctx->pc = 0x1E9CA4u;
    {
        const bool branch_taken_0x1e9ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CA4u;
        // 0x1e9ca8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9ca4) {
            ctx->pc = 0x1E9D64u;
            goto label_1e9d64;
        }
    }
    ctx->pc = 0x1E9CACu;
label_1e9cac:
    // 0x1e9cac: 0xc0e409a  jal         func_390268
label_1e9cb0:
    if (ctx->pc == 0x1E9CB0u) {
        ctx->pc = 0x1E9CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CACu;
        // 0x1e9cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9CB4u;
        goto label_1e9cb4;
    }
    ctx->pc = 0x1E9CACu;
    SET_GPR_U32(ctx, 31, 0x1E9CB4u);
    ctx->pc = 0x1E9CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9CACu;
    // 0x1e9cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1E9CACu, 0x1E9CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9CB4u;
label_1e9cb4:
    // 0x1e9cb4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_1e9cb8:
    if (ctx->pc == 0x1E9CB8u) {
        ctx->pc = 0x1E9CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CB4u;
        // 0x1e9cb8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9CBCu;
        goto label_1e9cbc;
    }
    ctx->pc = 0x1E9CB4u;
    {
        const bool branch_taken_0x1e9cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CB4u;
        // 0x1e9cb8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9cb4) {
            ctx->pc = 0x1E9D64u;
            goto label_1e9d64;
        }
    }
    ctx->pc = 0x1E9CBCu;
label_1e9cbc:
    // 0x1e9cbc: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x1e9cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1e9cc0:
    // 0x1e9cc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e9cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e9cc4:
    // 0x1e9cc4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1e9cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1e9cc8:
    // 0x1e9cc8: 0xc0a48cc  jal         func_292330
label_1e9ccc:
    if (ctx->pc == 0x1E9CCCu) {
        ctx->pc = 0x1E9CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CC8u;
        // 0x1e9ccc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9CD0u;
        goto label_1e9cd0;
    }
    ctx->pc = 0x1E9CC8u;
    SET_GPR_U32(ctx, 31, 0x1E9CD0u);
    ctx->pc = 0x1E9CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9CC8u;
    // 0x1e9ccc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292330u, 0x1E9CC8u, 0x1E9CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9CD0u;
label_1e9cd0:
    // 0x1e9cd0: 0xc0e409a  jal         func_390268
label_1e9cd4:
    if (ctx->pc == 0x1E9CD4u) {
        ctx->pc = 0x1E9CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CD0u;
        // 0x1e9cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9CD8u;
        goto label_1e9cd8;
    }
    ctx->pc = 0x1E9CD0u;
    SET_GPR_U32(ctx, 31, 0x1E9CD8u);
    ctx->pc = 0x1E9CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9CD0u;
    // 0x1e9cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1E9CD0u, 0x1E9CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9CD8u;
label_1e9cd8:
    // 0x1e9cd8: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x1e9cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1e9cdc:
    // 0x1e9cdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e9cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9ce0:
    // 0x1e9ce0: 0xc08d3be  jal         func_234EF8
label_1e9ce4:
    if (ctx->pc == 0x1E9CE4u) {
        ctx->pc = 0x1E9CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CE0u;
        // 0x1e9ce4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9CE8u;
        goto label_1e9ce8;
    }
    ctx->pc = 0x1E9CE0u;
    SET_GPR_U32(ctx, 31, 0x1E9CE8u);
    ctx->pc = 0x1E9CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9CE0u;
    // 0x1e9ce4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234EF8u, 0x1E9CE0u, 0x1E9CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9CE8u;
label_1e9ce8:
    // 0x1e9ce8: 0xa2000284  sb          $zero, 0x284($s0)
    ctx->pc = 0x1e9ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 644), (uint8_t)GPR_U32(ctx, 0));
label_1e9cec:
    // 0x1e9cec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e9cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e9cf0:
    // 0x1e9cf0: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1e9cf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1e9cf4:
    // 0x1e9cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9cf8:
    // 0x1e9cf8: 0xc62000a0  lwc1        $f0, 0xA0($s1)
    ctx->pc = 0x1e9cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9cfc:
    // 0x1e9cfc: 0xc62100a4  lwc1        $f1, 0xA4($s1)
    ctx->pc = 0x1e9cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9d00:
    // 0x1e9d00: 0xc62200a8  lwc1        $f2, 0xA8($s1)
    ctx->pc = 0x1e9d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e9d04:
    // 0x1e9d04: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e9d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e9d08:
    // 0x1e9d08: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1e9d08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1e9d0c:
    // 0x1e9d0c: 0xc086c2e  jal         func_21B0B8
label_1e9d10:
    if (ctx->pc == 0x1E9D10u) {
        ctx->pc = 0x1E9D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D0Cu;
        // 0x1e9d10: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9D14u;
        goto label_1e9d14;
    }
    ctx->pc = 0x1E9D0Cu;
    SET_GPR_U32(ctx, 31, 0x1E9D14u);
    ctx->pc = 0x1E9D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9D0Cu;
    // 0x1e9d10: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B0B8u, 0x1E9D0Cu, 0x1E9D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D14u;
label_1e9d14:
    // 0x1e9d14: 0xc047e6c  jal         func_11F9B0
label_1e9d18:
    if (ctx->pc == 0x1E9D18u) {
        ctx->pc = 0x1E9D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D14u;
        // 0x1e9d18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9D1Cu;
        goto label_1e9d1c;
    }
    ctx->pc = 0x1E9D14u;
    SET_GPR_U32(ctx, 31, 0x1E9D1Cu);
    ctx->pc = 0x1E9D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9D14u;
    // 0x1e9d18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1E9D14u, 0x1E9D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D1Cu;
label_1e9d1c:
    // 0x1e9d1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e9d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e9d20:
    // 0x1e9d20: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x1e9d20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_1e9d24:
    // 0x1e9d24: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x1e9d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_1e9d28:
    // 0x1e9d28: 0xa0f809  jalr        $a1
label_1e9d2c:
    if (ctx->pc == 0x1E9D2Cu) {
        ctx->pc = 0x1E9D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D28u;
        // 0x1e9d2c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9D30u;
        goto label_1e9d30;
    }
    ctx->pc = 0x1E9D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1E9D30u);
        ctx->pc = 0x1E9D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D28u;
        // 0x1e9d2c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9D28u, 0x1E9D30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9D30u;
label_1e9d30:
    // 0x1e9d30: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1e9d30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1e9d34:
    // 0x1e9d34: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e9d34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1e9d38:
    // 0x1e9d38: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x1e9d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1e9d3c:
    // 0x1e9d3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e9d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e9d40:
    // 0x1e9d40: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1e9d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1e9d44:
    // 0x1e9d44: 0xc0bf7dc  jal         func_2FDF70
label_1e9d48:
    if (ctx->pc == 0x1E9D48u) {
        ctx->pc = 0x1E9D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D44u;
        // 0x1e9d48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9D4Cu;
        goto label_1e9d4c;
    }
    ctx->pc = 0x1E9D44u;
    SET_GPR_U32(ctx, 31, 0x1E9D4Cu);
    ctx->pc = 0x1E9D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9D44u;
    // 0x1e9d48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDF70u, 0x1E9D44u, 0x1E9D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D4Cu;
label_1e9d4c:
    // 0x1e9d4c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e9d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e9d50:
    // 0x1e9d50: 0x84640138  lh          $a0, 0x138($v1)
    ctx->pc = 0x1e9d50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 312)));
label_1e9d54:
    // 0x1e9d54: 0x8c62013c  lw          $v0, 0x13C($v1)
    ctx->pc = 0x1e9d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_1e9d58:
    // 0x1e9d58: 0x40f809  jalr        $v0
label_1e9d5c:
    if (ctx->pc == 0x1E9D5Cu) {
        ctx->pc = 0x1E9D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D58u;
        // 0x1e9d5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9D60u;
        goto label_1e9d60;
    }
    ctx->pc = 0x1E9D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E9D60u);
        ctx->pc = 0x1E9D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D58u;
        // 0x1e9d5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9D58u, 0x1E9D60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9D60u;
label_1e9d60:
    // 0x1e9d60: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e9d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e9d64:
    // 0x1e9d64: 0xc06254a  jal         func_189528
label_1e9d68:
    if (ctx->pc == 0x1E9D68u) {
        ctx->pc = 0x1E9D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D64u;
        // 0x1e9d68: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9D6Cu;
        goto label_1e9d6c;
    }
    ctx->pc = 0x1E9D64u;
    SET_GPR_U32(ctx, 31, 0x1E9D6Cu);
    ctx->pc = 0x1E9D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9D64u;
    // 0x1e9d68: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189528u, 0x1E9D64u, 0x1E9D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D6Cu;
label_1e9d6c:
    // 0x1e9d6c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e9d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e9d70:
    // 0x1e9d70: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e9d70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e9d74:
    // 0x1e9d74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e9d74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e9d78:
    // 0x1e9d78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9d7c:
    // 0x1e9d7c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1e9d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e9d80:
    // 0x1e9d80: 0x3e00008  jr          $ra
label_1e9d84:
    if (ctx->pc == 0x1E9D84u) {
        ctx->pc = 0x1E9D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D80u;
        // 0x1e9d84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9D88u;
        goto label_1e9d88;
    }
    ctx->pc = 0x1E9D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D80u;
        // 0x1e9d84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9D88u;
label_1e9d88:
    // 0x1e9d88: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e9d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e9d8c:
    // 0x1e9d8c: 0x0  nop
    ctx->pc = 0x1e9d8cu;
    // NOP
label_1e9d90:
    // 0x1e9d90: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e9d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1e9d94:
    // 0x1e9d94: 0x0  nop
    ctx->pc = 0x1e9d94u;
    // NOP
label_1e9d98:
    // 0x1e9d98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e9d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e9d9c:
    // 0x1e9d9c: 0x0  nop
    ctx->pc = 0x1e9d9cu;
    // NOP
    ctx->pc = 0x1e9da0u;
}
