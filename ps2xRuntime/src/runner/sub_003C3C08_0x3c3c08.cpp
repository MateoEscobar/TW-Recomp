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

// Function: sub_003C3C08
// Address: 0x3c3c08 - 0x3c3da0
void sub_003C3C08_0x3c3c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3C08_0x3c3c08");
#endif

    switch (ctx->pc) {
        case 0x3c3c08u: goto label_3c3c08;
        case 0x3c3c0cu: goto label_3c3c0c;
        case 0x3c3c10u: goto label_3c3c10;
        case 0x3c3c14u: goto label_3c3c14;
        case 0x3c3c18u: goto label_3c3c18;
        case 0x3c3c1cu: goto label_3c3c1c;
        case 0x3c3c20u: goto label_3c3c20;
        case 0x3c3c24u: goto label_3c3c24;
        case 0x3c3c28u: goto label_3c3c28;
        case 0x3c3c2cu: goto label_3c3c2c;
        case 0x3c3c30u: goto label_3c3c30;
        case 0x3c3c34u: goto label_3c3c34;
        case 0x3c3c38u: goto label_3c3c38;
        case 0x3c3c3cu: goto label_3c3c3c;
        case 0x3c3c40u: goto label_3c3c40;
        case 0x3c3c44u: goto label_3c3c44;
        case 0x3c3c48u: goto label_3c3c48;
        case 0x3c3c4cu: goto label_3c3c4c;
        case 0x3c3c50u: goto label_3c3c50;
        case 0x3c3c54u: goto label_3c3c54;
        case 0x3c3c58u: goto label_3c3c58;
        case 0x3c3c5cu: goto label_3c3c5c;
        case 0x3c3c60u: goto label_3c3c60;
        case 0x3c3c64u: goto label_3c3c64;
        case 0x3c3c68u: goto label_3c3c68;
        case 0x3c3c6cu: goto label_3c3c6c;
        case 0x3c3c70u: goto label_3c3c70;
        case 0x3c3c74u: goto label_3c3c74;
        case 0x3c3c78u: goto label_3c3c78;
        case 0x3c3c7cu: goto label_3c3c7c;
        case 0x3c3c80u: goto label_3c3c80;
        case 0x3c3c84u: goto label_3c3c84;
        case 0x3c3c88u: goto label_3c3c88;
        case 0x3c3c8cu: goto label_3c3c8c;
        case 0x3c3c90u: goto label_3c3c90;
        case 0x3c3c94u: goto label_3c3c94;
        case 0x3c3c98u: goto label_3c3c98;
        case 0x3c3c9cu: goto label_3c3c9c;
        case 0x3c3ca0u: goto label_3c3ca0;
        case 0x3c3ca4u: goto label_3c3ca4;
        case 0x3c3ca8u: goto label_3c3ca8;
        case 0x3c3cacu: goto label_3c3cac;
        case 0x3c3cb0u: goto label_3c3cb0;
        case 0x3c3cb4u: goto label_3c3cb4;
        case 0x3c3cb8u: goto label_3c3cb8;
        case 0x3c3cbcu: goto label_3c3cbc;
        case 0x3c3cc0u: goto label_3c3cc0;
        case 0x3c3cc4u: goto label_3c3cc4;
        case 0x3c3cc8u: goto label_3c3cc8;
        case 0x3c3cccu: goto label_3c3ccc;
        case 0x3c3cd0u: goto label_3c3cd0;
        case 0x3c3cd4u: goto label_3c3cd4;
        case 0x3c3cd8u: goto label_3c3cd8;
        case 0x3c3cdcu: goto label_3c3cdc;
        case 0x3c3ce0u: goto label_3c3ce0;
        case 0x3c3ce4u: goto label_3c3ce4;
        case 0x3c3ce8u: goto label_3c3ce8;
        case 0x3c3cecu: goto label_3c3cec;
        case 0x3c3cf0u: goto label_3c3cf0;
        case 0x3c3cf4u: goto label_3c3cf4;
        case 0x3c3cf8u: goto label_3c3cf8;
        case 0x3c3cfcu: goto label_3c3cfc;
        case 0x3c3d00u: goto label_3c3d00;
        case 0x3c3d04u: goto label_3c3d04;
        case 0x3c3d08u: goto label_3c3d08;
        case 0x3c3d0cu: goto label_3c3d0c;
        case 0x3c3d10u: goto label_3c3d10;
        case 0x3c3d14u: goto label_3c3d14;
        case 0x3c3d18u: goto label_3c3d18;
        case 0x3c3d1cu: goto label_3c3d1c;
        case 0x3c3d20u: goto label_3c3d20;
        case 0x3c3d24u: goto label_3c3d24;
        case 0x3c3d28u: goto label_3c3d28;
        case 0x3c3d2cu: goto label_3c3d2c;
        case 0x3c3d30u: goto label_3c3d30;
        case 0x3c3d34u: goto label_3c3d34;
        case 0x3c3d38u: goto label_3c3d38;
        case 0x3c3d3cu: goto label_3c3d3c;
        case 0x3c3d40u: goto label_3c3d40;
        case 0x3c3d44u: goto label_3c3d44;
        case 0x3c3d48u: goto label_3c3d48;
        case 0x3c3d4cu: goto label_3c3d4c;
        case 0x3c3d50u: goto label_3c3d50;
        case 0x3c3d54u: goto label_3c3d54;
        case 0x3c3d58u: goto label_3c3d58;
        case 0x3c3d5cu: goto label_3c3d5c;
        case 0x3c3d60u: goto label_3c3d60;
        case 0x3c3d64u: goto label_3c3d64;
        case 0x3c3d68u: goto label_3c3d68;
        case 0x3c3d6cu: goto label_3c3d6c;
        case 0x3c3d70u: goto label_3c3d70;
        case 0x3c3d74u: goto label_3c3d74;
        case 0x3c3d78u: goto label_3c3d78;
        case 0x3c3d7cu: goto label_3c3d7c;
        case 0x3c3d80u: goto label_3c3d80;
        case 0x3c3d84u: goto label_3c3d84;
        case 0x3c3d88u: goto label_3c3d88;
        case 0x3c3d8cu: goto label_3c3d8c;
        case 0x3c3d90u: goto label_3c3d90;
        case 0x3c3d94u: goto label_3c3d94;
        case 0x3c3d98u: goto label_3c3d98;
        case 0x3c3d9cu: goto label_3c3d9c;
        default: break;
    }

    ctx->pc = 0x3c3c08u;

label_3c3c08:
    // 0x3c3c08: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3c3c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3c3c0c:
    // 0x3c3c0c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3c3c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_3c3c10:
    // 0x3c3c10: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3c3c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_3c3c14:
    // 0x3c3c14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c3c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c3c18:
    // 0x3c3c18: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3c3c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_3c3c1c:
    // 0x3c3c1c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3c3c1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c3c20:
    // 0x3c3c20: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3c3c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_3c3c24:
    // 0x3c3c24: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3c3c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3c3c28:
    // 0x3c3c28: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x3c3c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_3c3c2c:
    // 0x3c3c2c: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x3c3c2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3c3c30:
    // 0x3c3c30: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3c3c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_3c3c34:
    // 0x3c3c34: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3c3c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_3c3c38:
    // 0x3c3c38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c3c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3c3c3c:
    // 0x3c3c3c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c3c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c3c40:
    // 0x3c3c40: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c3c40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c3c44:
    // 0x3c3c44: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c3c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c3c48:
    // 0x3c3c48: 0x40f809  jalr        $v0
label_3c3c4c:
    if (ctx->pc == 0x3C3C4Cu) {
        ctx->pc = 0x3C3C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C48u;
        // 0x3c3c4c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3C50u;
        goto label_3c3c50;
    }
    ctx->pc = 0x3C3C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C3C50u);
        ctx->pc = 0x3C3C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C48u;
        // 0x3c3c4c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3C48u, 0x3C3C50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C3C50u;
label_3c3c50:
    // 0x3c3c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c3c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c3c54:
    // 0x3c3c54: 0xc0ea146  jal         func_3A8518
label_3c3c58:
    if (ctx->pc == 0x3C3C58u) {
        ctx->pc = 0x3C3C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C54u;
        // 0x3c3c58: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3C5Cu;
        goto label_3c3c5c;
    }
    ctx->pc = 0x3C3C54u;
    SET_GPR_U32(ctx, 31, 0x3C3C5Cu);
    ctx->pc = 0x3C3C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3C54u;
    // 0x3c3c58: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C3C54u, 0x3C3C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3C5Cu;
label_3c3c5c:
    // 0x3c3c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c3c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c3c60:
    // 0x3c3c60: 0xc0ea146  jal         func_3A8518
label_3c3c64:
    if (ctx->pc == 0x3C3C64u) {
        ctx->pc = 0x3C3C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C60u;
        // 0x3c3c64: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3C68u;
        goto label_3c3c68;
    }
    ctx->pc = 0x3C3C60u;
    SET_GPR_U32(ctx, 31, 0x3C3C68u);
    ctx->pc = 0x3C3C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3C60u;
    // 0x3c3c64: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C3C60u, 0x3C3C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3C68u;
label_3c3c68:
    // 0x3c3c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c3c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c3c6c:
    // 0x3c3c6c: 0xc0ea146  jal         func_3A8518
label_3c3c70:
    if (ctx->pc == 0x3C3C70u) {
        ctx->pc = 0x3C3C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C6Cu;
        // 0x3c3c70: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3C74u;
        goto label_3c3c74;
    }
    ctx->pc = 0x3C3C6Cu;
    SET_GPR_U32(ctx, 31, 0x3C3C74u);
    ctx->pc = 0x3C3C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3C6Cu;
    // 0x3c3c70: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C3C6Cu, 0x3C3C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3C74u;
label_3c3c74:
    // 0x3c3c74: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3c3c74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c3c78:
    // 0x3c3c78: 0xc0ea13a  jal         func_3A84E8
label_3c3c7c:
    if (ctx->pc == 0x3C3C7Cu) {
        ctx->pc = 0x3C3C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C78u;
        // 0x3c3c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3C80u;
        goto label_3c3c80;
    }
    ctx->pc = 0x3C3C78u;
    SET_GPR_U32(ctx, 31, 0x3C3C80u);
    ctx->pc = 0x3C3C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3C78u;
    // 0x3c3c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3C3C78u, 0x3C3C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3C80u;
label_3c3c80:
    // 0x3c3c80: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c3c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c3c84:
    // 0x3c3c84: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c3c84u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c3c88:
    // 0x3c3c88: 0xc0ea12a  jal         func_3A84A8
label_3c3c8c:
    if (ctx->pc == 0x3C3C8Cu) {
        ctx->pc = 0x3C3C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C88u;
        // 0x3c3c8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3C90u;
        goto label_3c3c90;
    }
    ctx->pc = 0x3C3C88u;
    SET_GPR_U32(ctx, 31, 0x3C3C90u);
    ctx->pc = 0x3C3C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3C88u;
    // 0x3c3c8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C3C88u, 0x3C3C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3C90u;
label_3c3c90:
    // 0x3c3c90: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c3c90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c3c94:
    // 0x3c3c94: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c3c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c3c98:
    // 0x3c3c98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c3c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c3c9c:
    // 0x3c3c9c: 0xc0ea12a  jal         func_3A84A8
label_3c3ca0:
    if (ctx->pc == 0x3C3CA0u) {
        ctx->pc = 0x3C3CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C9Cu;
        // 0x3c3ca0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3CA4u;
        goto label_3c3ca4;
    }
    ctx->pc = 0x3C3C9Cu;
    SET_GPR_U32(ctx, 31, 0x3C3CA4u);
    ctx->pc = 0x3C3CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3C9Cu;
    // 0x3c3ca0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C3C9Cu, 0x3C3CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3CA4u;
label_3c3ca4:
    // 0x3c3ca4: 0x7ba60020  lq          $a2, 0x20($sp)
    ctx->pc = 0x3c3ca4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c3ca8:
    // 0x3c3ca8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3c3ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3c3cac:
    // 0x3c3cac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3c3cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3c3cb0:
    // 0x3c3cb0: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x3c3cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_3c3cb4:
    // 0x3c3cb4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3c3cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3c3cb8:
    // 0x3c3cb8: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x3c3cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
label_3c3cbc:
    // 0x3c3cbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c3cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c3cc0:
    // 0x3c3cc0: 0xc1073cc  jal         func_41CF30
label_3c3cc4:
    if (ctx->pc == 0x3C3CC4u) {
        ctx->pc = 0x3C3CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3CC0u;
        // 0x3c3cc4: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3CC8u;
        goto label_3c3cc8;
    }
    ctx->pc = 0x3C3CC0u;
    SET_GPR_U32(ctx, 31, 0x3C3CC8u);
    ctx->pc = 0x3C3CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3CC0u;
    // 0x3c3cc4: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3C3CC0u, 0x3C3CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3CC8u;
label_3c3cc8:
    // 0x3c3cc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c3cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3c3ccc:
    // 0x3c3ccc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3c3cd0:
    if (ctx->pc == 0x3C3CD0u) {
        ctx->pc = 0x3C3CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3CCCu;
        // 0x3c3cd0: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3CD4u;
        goto label_3c3cd4;
    }
    ctx->pc = 0x3C3CCCu;
    {
        const bool branch_taken_0x3c3ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3CCCu;
        // 0x3c3cd0: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3ccc) {
            ctx->pc = 0x3C3CECu;
            goto label_3c3cec;
        }
    }
    ctx->pc = 0x3C3CD4u;
label_3c3cd4:
    // 0x3c3cd4: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x3c3cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3c3cd8:
    // 0x3c3cd8: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x3c3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
label_3c3cdc:
    // 0x3c3cdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c3cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3c3ce0:
    // 0x3c3ce0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3c3ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3c3ce4:
    // 0x3c3ce4: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x3c3ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_3c3ce8:
    // 0x3c3ce8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3c3ce8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c3cec:
    // 0x3c3cec: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x3c3cecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_3c3cf0:
    // 0x3c3cf0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c3cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c3cf4:
    // 0x3c3cf4: 0x2631b8b8  addiu       $s1, $s1, -0x4748
    ctx->pc = 0x3c3cf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949048));
label_3c3cf8:
    // 0x3c3cf8: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x3c3cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
label_3c3cfc:
    // 0x3c3cfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c3cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c3d00:
    // 0x3c3d00: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x3c3d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_3c3d04:
    // 0x3c3d04: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c3d04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c3d08:
    // 0x3c3d08: 0x24720070  addiu       $s2, $v1, 0x70
    ctx->pc = 0x3c3d08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_3c3d0c:
    // 0x3c3d0c: 0x84700070  lh          $s0, 0x70($v1)
    ctx->pc = 0x3c3d0cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3c3d10:
    // 0x3c3d10: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x3c3d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_3c3d14:
    // 0x3c3d14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c3d14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c3d18:
    // 0x3c3d18: 0xc0cd518  jal         func_335460
label_3c3d1c:
    if (ctx->pc == 0x3C3D1Cu) {
        ctx->pc = 0x3C3D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3D18u;
        // 0x3c3d1c: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3D20u;
        goto label_3c3d20;
    }
    ctx->pc = 0x3C3D18u;
    SET_GPR_U32(ctx, 31, 0x3C3D20u);
    ctx->pc = 0x3C3D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3D18u;
    // 0x3c3d1c: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C3D18u, 0x3C3D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3D20u;
label_3c3d20:
    // 0x3c3d20: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3c3d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c3d24:
    // 0x3c3d24: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c3d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c3d28:
    // 0x3c3d28: 0xc136b24  jal         func_4DAC90
label_3c3d2c:
    if (ctx->pc == 0x3C3D2Cu) {
        ctx->pc = 0x3C3D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3D28u;
        // 0x3c3d2c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3D30u;
        goto label_3c3d30;
    }
    ctx->pc = 0x3C3D28u;
    SET_GPR_U32(ctx, 31, 0x3C3D30u);
    ctx->pc = 0x3C3D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3D28u;
    // 0x3c3d2c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C3D28u, 0x3C3D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3D30u;
label_3c3d30:
    // 0x3c3d30: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3c3d30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c3d34:
    // 0x3c3d34: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3c3d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c3d38:
    // 0x3c3d38: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3c3d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3c3d3c:
    // 0x3c3d3c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3c3d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c3d40:
    // 0x3c3d40: 0x40f809  jalr        $v0
label_3c3d44:
    if (ctx->pc == 0x3C3D44u) {
        ctx->pc = 0x3C3D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3D40u;
        // 0x3c3d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3D48u;
        goto label_3c3d48;
    }
    ctx->pc = 0x3C3D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C3D48u);
        ctx->pc = 0x3C3D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3D40u;
        // 0x3c3d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3D40u, 0x3C3D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C3D48u;
label_3c3d48:
    // 0x3c3d48: 0xe6940000  swc1        $f20, 0x0($s4)
    ctx->pc = 0x3c3d48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_3c3d4c:
    // 0x3c3d4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c3d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c3d50:
    // 0x3c3d50: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x3c3d50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_3c3d54:
    // 0x3c3d54: 0xc0cd4ee  jal         func_3353B8
label_3c3d58:
    if (ctx->pc == 0x3C3D58u) {
        ctx->pc = 0x3C3D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3D54u;
        // 0x3c3d58: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3D5Cu;
        goto label_3c3d5c;
    }
    ctx->pc = 0x3C3D54u;
    SET_GPR_U32(ctx, 31, 0x3C3D5Cu);
    ctx->pc = 0x3C3D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3D54u;
    // 0x3c3d58: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C3D54u, 0x3C3D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3D5Cu;
label_3c3d5c:
    // 0x3c3d5c: 0x24420019  addiu       $v0, $v0, 0x19
    ctx->pc = 0x3c3d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
label_3c3d60:
    // 0x3c3d60: 0xae960014  sw          $s6, 0x14($s4)
    ctx->pc = 0x3c3d60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 22));
label_3c3d64:
    // 0x3c3d64: 0xae95000c  sw          $s5, 0xC($s4)
    ctx->pc = 0x3c3d64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 21));
label_3c3d68:
    // 0x3c3d68: 0xae970010  sw          $s7, 0x10($s4)
    ctx->pc = 0x3c3d68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 23));
label_3c3d6c:
    // 0x3c3d6c: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x3c3d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_3c3d70:
    // 0x3c3d70: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3c3d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3c3d74:
    // 0x3c3d74: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3c3d74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3c3d78:
    // 0x3c3d78: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3c3d78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3c3d7c:
    // 0x3c3d7c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3c3d7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c3d80:
    // 0x3c3d80: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3c3d80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c3d84:
    // 0x3c3d84: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3c3d84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c3d88:
    // 0x3c3d88: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3c3d88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c3d8c:
    // 0x3c3d8c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x3c3d8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c3d90:
    // 0x3c3d90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c3d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3c3d94:
    // 0x3c3d94: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x3c3d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c3d98:
    // 0x3c3d98: 0x3e00008  jr          $ra
label_3c3d9c:
    if (ctx->pc == 0x3C3D9Cu) {
        ctx->pc = 0x3C3D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3D98u;
        // 0x3c3d9c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3DA0u;
        goto label_fallthrough_0x3c3d98;
    }
    ctx->pc = 0x3C3D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3D98u;
        // 0x3c3d9c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c3d98:
    ctx->pc = 0x3C3DA0u;
}
