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

// Function: sub_003C1E58
// Address: 0x3c1e58 - 0x3c1fe8
void sub_003C1E58_0x3c1e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C1E58_0x3c1e58");
#endif

    switch (ctx->pc) {
        case 0x3c1e58u: goto label_3c1e58;
        case 0x3c1e5cu: goto label_3c1e5c;
        case 0x3c1e60u: goto label_3c1e60;
        case 0x3c1e64u: goto label_3c1e64;
        case 0x3c1e68u: goto label_3c1e68;
        case 0x3c1e6cu: goto label_3c1e6c;
        case 0x3c1e70u: goto label_3c1e70;
        case 0x3c1e74u: goto label_3c1e74;
        case 0x3c1e78u: goto label_3c1e78;
        case 0x3c1e7cu: goto label_3c1e7c;
        case 0x3c1e80u: goto label_3c1e80;
        case 0x3c1e84u: goto label_3c1e84;
        case 0x3c1e88u: goto label_3c1e88;
        case 0x3c1e8cu: goto label_3c1e8c;
        case 0x3c1e90u: goto label_3c1e90;
        case 0x3c1e94u: goto label_3c1e94;
        case 0x3c1e98u: goto label_3c1e98;
        case 0x3c1e9cu: goto label_3c1e9c;
        case 0x3c1ea0u: goto label_3c1ea0;
        case 0x3c1ea4u: goto label_3c1ea4;
        case 0x3c1ea8u: goto label_3c1ea8;
        case 0x3c1eacu: goto label_3c1eac;
        case 0x3c1eb0u: goto label_3c1eb0;
        case 0x3c1eb4u: goto label_3c1eb4;
        case 0x3c1eb8u: goto label_3c1eb8;
        case 0x3c1ebcu: goto label_3c1ebc;
        case 0x3c1ec0u: goto label_3c1ec0;
        case 0x3c1ec4u: goto label_3c1ec4;
        case 0x3c1ec8u: goto label_3c1ec8;
        case 0x3c1eccu: goto label_3c1ecc;
        case 0x3c1ed0u: goto label_3c1ed0;
        case 0x3c1ed4u: goto label_3c1ed4;
        case 0x3c1ed8u: goto label_3c1ed8;
        case 0x3c1edcu: goto label_3c1edc;
        case 0x3c1ee0u: goto label_3c1ee0;
        case 0x3c1ee4u: goto label_3c1ee4;
        case 0x3c1ee8u: goto label_3c1ee8;
        case 0x3c1eecu: goto label_3c1eec;
        case 0x3c1ef0u: goto label_3c1ef0;
        case 0x3c1ef4u: goto label_3c1ef4;
        case 0x3c1ef8u: goto label_3c1ef8;
        case 0x3c1efcu: goto label_3c1efc;
        case 0x3c1f00u: goto label_3c1f00;
        case 0x3c1f04u: goto label_3c1f04;
        case 0x3c1f08u: goto label_3c1f08;
        case 0x3c1f0cu: goto label_3c1f0c;
        case 0x3c1f10u: goto label_3c1f10;
        case 0x3c1f14u: goto label_3c1f14;
        case 0x3c1f18u: goto label_3c1f18;
        case 0x3c1f1cu: goto label_3c1f1c;
        case 0x3c1f20u: goto label_3c1f20;
        case 0x3c1f24u: goto label_3c1f24;
        case 0x3c1f28u: goto label_3c1f28;
        case 0x3c1f2cu: goto label_3c1f2c;
        case 0x3c1f30u: goto label_3c1f30;
        case 0x3c1f34u: goto label_3c1f34;
        case 0x3c1f38u: goto label_3c1f38;
        case 0x3c1f3cu: goto label_3c1f3c;
        case 0x3c1f40u: goto label_3c1f40;
        case 0x3c1f44u: goto label_3c1f44;
        case 0x3c1f48u: goto label_3c1f48;
        case 0x3c1f4cu: goto label_3c1f4c;
        case 0x3c1f50u: goto label_3c1f50;
        case 0x3c1f54u: goto label_3c1f54;
        case 0x3c1f58u: goto label_3c1f58;
        case 0x3c1f5cu: goto label_3c1f5c;
        case 0x3c1f60u: goto label_3c1f60;
        case 0x3c1f64u: goto label_3c1f64;
        case 0x3c1f68u: goto label_3c1f68;
        case 0x3c1f6cu: goto label_3c1f6c;
        case 0x3c1f70u: goto label_3c1f70;
        case 0x3c1f74u: goto label_3c1f74;
        case 0x3c1f78u: goto label_3c1f78;
        case 0x3c1f7cu: goto label_3c1f7c;
        case 0x3c1f80u: goto label_3c1f80;
        case 0x3c1f84u: goto label_3c1f84;
        case 0x3c1f88u: goto label_3c1f88;
        case 0x3c1f8cu: goto label_3c1f8c;
        case 0x3c1f90u: goto label_3c1f90;
        case 0x3c1f94u: goto label_3c1f94;
        case 0x3c1f98u: goto label_3c1f98;
        case 0x3c1f9cu: goto label_3c1f9c;
        case 0x3c1fa0u: goto label_3c1fa0;
        case 0x3c1fa4u: goto label_3c1fa4;
        case 0x3c1fa8u: goto label_3c1fa8;
        case 0x3c1facu: goto label_3c1fac;
        case 0x3c1fb0u: goto label_3c1fb0;
        case 0x3c1fb4u: goto label_3c1fb4;
        case 0x3c1fb8u: goto label_3c1fb8;
        case 0x3c1fbcu: goto label_3c1fbc;
        case 0x3c1fc0u: goto label_3c1fc0;
        case 0x3c1fc4u: goto label_3c1fc4;
        case 0x3c1fc8u: goto label_3c1fc8;
        case 0x3c1fccu: goto label_3c1fcc;
        case 0x3c1fd0u: goto label_3c1fd0;
        case 0x3c1fd4u: goto label_3c1fd4;
        case 0x3c1fd8u: goto label_3c1fd8;
        case 0x3c1fdcu: goto label_3c1fdc;
        case 0x3c1fe0u: goto label_3c1fe0;
        case 0x3c1fe4u: goto label_3c1fe4;
        default: break;
    }

    ctx->pc = 0x3c1e58u;

label_3c1e58:
    // 0x3c1e58: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3c1e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3c1e5c:
    // 0x3c1e5c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3c1e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3c1e60:
    // 0x3c1e60: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3c1e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3c1e64:
    // 0x3c1e64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c1e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c1e68:
    // 0x3c1e68: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3c1e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3c1e6c:
    // 0x3c1e6c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3c1e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3c1e70:
    // 0x3c1e70: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3c1e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3c1e74:
    // 0x3c1e74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c1e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3c1e78:
    // 0x3c1e78: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3c1e78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c1e7c:
    // 0x3c1e7c: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x3c1e7cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_3c1e80:
    // 0x3c1e80: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x3c1e80u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3c1e84:
    // 0x3c1e84: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x3c1e84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_3c1e88:
    // 0x3c1e88: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x3c1e88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3c1e8c:
    // 0x3c1e8c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3c1e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3c1e90:
    // 0x3c1e90: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c1e90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c1e94:
    // 0x3c1e94: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c1e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c1e98:
    // 0x3c1e98: 0x40f809  jalr        $v0
label_3c1e9c:
    if (ctx->pc == 0x3C1E9Cu) {
        ctx->pc = 0x3C1E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E98u;
        // 0x3c1e9c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1EA0u;
        goto label_3c1ea0;
    }
    ctx->pc = 0x3C1E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C1EA0u);
        ctx->pc = 0x3C1E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1E98u;
        // 0x3c1e9c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1E98u, 0x3C1EA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1EA0u;
label_3c1ea0:
    // 0x3c1ea0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c1ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1ea4:
    // 0x3c1ea4: 0xc0ea146  jal         func_3A8518
label_3c1ea8:
    if (ctx->pc == 0x3C1EA8u) {
        ctx->pc = 0x3C1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1EA4u;
        // 0x3c1ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1EACu;
        goto label_3c1eac;
    }
    ctx->pc = 0x3C1EA4u;
    SET_GPR_U32(ctx, 31, 0x3C1EACu);
    ctx->pc = 0x3C1EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1EA4u;
    // 0x3c1ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C1EA4u, 0x3C1EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1EACu;
label_3c1eac:
    // 0x3c1eac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c1eacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1eb0:
    // 0x3c1eb0: 0xc0ea146  jal         func_3A8518
label_3c1eb4:
    if (ctx->pc == 0x3C1EB4u) {
        ctx->pc = 0x3C1EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1EB0u;
        // 0x3c1eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1EB8u;
        goto label_3c1eb8;
    }
    ctx->pc = 0x3C1EB0u;
    SET_GPR_U32(ctx, 31, 0x3C1EB8u);
    ctx->pc = 0x3C1EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1EB0u;
    // 0x3c1eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C1EB0u, 0x3C1EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1EB8u;
label_3c1eb8:
    // 0x3c1eb8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c1eb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1ebc:
    // 0x3c1ebc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c1ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c1ec0:
    // 0x3c1ec0: 0xc0ea12a  jal         func_3A84A8
label_3c1ec4:
    if (ctx->pc == 0x3C1EC4u) {
        ctx->pc = 0x3C1EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1EC0u;
        // 0x3c1ec4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1EC8u;
        goto label_3c1ec8;
    }
    ctx->pc = 0x3C1EC0u;
    SET_GPR_U32(ctx, 31, 0x3C1EC8u);
    ctx->pc = 0x3C1EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1EC0u;
    // 0x3c1ec4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C1EC0u, 0x3C1EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1EC8u;
label_3c1ec8:
    // 0x3c1ec8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c1ec8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c1ecc:
    // 0x3c1ecc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c1eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c1ed0:
    // 0x3c1ed0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c1ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1ed4:
    // 0x3c1ed4: 0xc0ea12a  jal         func_3A84A8
label_3c1ed8:
    if (ctx->pc == 0x3C1ED8u) {
        ctx->pc = 0x3C1ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1ED4u;
        // 0x3c1ed8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1EDCu;
        goto label_3c1edc;
    }
    ctx->pc = 0x3C1ED4u;
    SET_GPR_U32(ctx, 31, 0x3C1EDCu);
    ctx->pc = 0x3C1ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1ED4u;
    // 0x3c1ed8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C1ED4u, 0x3C1EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1EDCu;
label_3c1edc:
    // 0x3c1edc: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3c1edcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c1ee0:
    // 0x3c1ee0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3c1ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c1ee4:
    // 0x3c1ee4: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x3c1ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_3c1ee8:
    // 0x3c1ee8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c1ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c1eec:
    // 0x3c1eec: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3c1eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3c1ef0:
    // 0x3c1ef0: 0xc0e858c  jal         func_3A1630
label_3c1ef4:
    if (ctx->pc == 0x3C1EF4u) {
        ctx->pc = 0x3C1EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1EF0u;
        // 0x3c1ef4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1EF8u;
        goto label_3c1ef8;
    }
    ctx->pc = 0x3C1EF0u;
    SET_GPR_U32(ctx, 31, 0x3C1EF8u);
    ctx->pc = 0x3C1EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1EF0u;
    // 0x3c1ef4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C1EF0u, 0x3C1EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1EF8u;
label_3c1ef8:
    // 0x3c1ef8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3c1ef8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c1efc:
    // 0x3c1efc: 0x2a440002  slti        $a0, $s2, 0x2
    ctx->pc = 0x3c1efcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_3c1f00:
    // 0x3c1f00: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3c1f00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c1f04:
    // 0x3c1f04: 0x7e830010  sq          $v1, 0x10($s4)
    ctx->pc = 0x3c1f04u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 3));
label_3c1f08:
    // 0x3c1f08: 0x7e820020  sq          $v0, 0x20($s4)
    ctx->pc = 0x3c1f08u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 2));
label_3c1f0c:
    // 0x3c1f0c: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x3c1f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
label_3c1f10:
    // 0x3c1f10: 0xae320008  sw          $s2, 0x8($s1)
    ctx->pc = 0x3c1f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
label_3c1f14:
    // 0x3c1f14: 0x14800027  bnez        $a0, . + 4 + (0x27 << 2)
label_3c1f18:
    if (ctx->pc == 0x3C1F18u) {
        ctx->pc = 0x3C1F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F14u;
        // 0x3c1f18: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1F1Cu;
        goto label_3c1f1c;
    }
    ctx->pc = 0x3C1F14u;
    {
        const bool branch_taken_0x3c1f14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F14u;
        // 0x3c1f18: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1f14) {
            ctx->pc = 0x3C1FB4u;
            goto label_3c1fb4;
        }
    }
    ctx->pc = 0x3C1F1Cu;
label_3c1f1c:
    // 0x3c1f1c: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x3c1f1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3c1f20:
    // 0x3c1f20: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3c1f20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3c1f24:
    // 0x3c1f24: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x3c1f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_3c1f28:
    // 0x3c1f28: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3c1f28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3c1f2c:
    // 0x3c1f2c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3c1f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3c1f30:
    // 0x3c1f30: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3c1f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3c1f34:
    // 0x3c1f34: 0x86510078  lh          $s1, 0x78($s2)
    ctx->pc = 0x3c1f34u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 120)));
label_3c1f38:
    // 0x3c1f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1f3c:
    // 0x3c1f3c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3c1f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3c1f40:
    // 0x3c1f40: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3c1f40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3c1f44:
    // 0x3c1f44: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3c1f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3c1f48:
    // 0x3c1f48: 0x26520078  addiu       $s2, $s2, 0x78
    ctx->pc = 0x3c1f48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
label_3c1f4c:
    // 0x3c1f4c: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x3c1f4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_3c1f50:
    // 0x3c1f50: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3c1f50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3c1f54:
    // 0x3c1f54: 0xc0cd518  jal         func_335460
label_3c1f58:
    if (ctx->pc == 0x3C1F58u) {
        ctx->pc = 0x3C1F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F54u;
        // 0x3c1f58: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1F5Cu;
        goto label_3c1f5c;
    }
    ctx->pc = 0x3C1F54u;
    SET_GPR_U32(ctx, 31, 0x3C1F5Cu);
    ctx->pc = 0x3C1F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1F54u;
    // 0x3c1f58: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C1F54u, 0x3C1F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1F5Cu;
label_3c1f5c:
    // 0x3c1f5c: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x3c1f5cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_3c1f60:
    // 0x3c1f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1f64:
    // 0x3c1f64: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3c1f64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3c1f68:
    // 0x3c1f68: 0xc0cd518  jal         func_335460
label_3c1f6c:
    if (ctx->pc == 0x3C1F6Cu) {
        ctx->pc = 0x3C1F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F68u;
        // 0x3c1f6c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1F70u;
        goto label_3c1f70;
    }
    ctx->pc = 0x3C1F68u;
    SET_GPR_U32(ctx, 31, 0x3C1F70u);
    ctx->pc = 0x3C1F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1F68u;
    // 0x3c1f6c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C1F68u, 0x3C1F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1F70u;
label_3c1f70:
    // 0x3c1f70: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3c1f70u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_3c1f74:
    // 0x3c1f74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1f78:
    // 0x3c1f78: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3c1f78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3c1f7c:
    // 0x3c1f7c: 0xc0cd518  jal         func_335460
label_3c1f80:
    if (ctx->pc == 0x3C1F80u) {
        ctx->pc = 0x3C1F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F7Cu;
        // 0x3c1f80: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1F84u;
        goto label_3c1f84;
    }
    ctx->pc = 0x3C1F7Cu;
    SET_GPR_U32(ctx, 31, 0x3C1F84u);
    ctx->pc = 0x3C1F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1F7Cu;
    // 0x3c1f80: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C1F7Cu, 0x3C1F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1F84u;
label_3c1f84:
    // 0x3c1f84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c1f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c1f88:
    // 0x3c1f88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c1f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c1f8c:
    // 0x3c1f8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c1f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1f90:
    // 0x3c1f90: 0xe7b70030  swc1        $f23, 0x30($sp)
    ctx->pc = 0x3c1f90u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3c1f94:
    // 0x3c1f94: 0xe7b60034  swc1        $f22, 0x34($sp)
    ctx->pc = 0x3c1f94u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3c1f98:
    // 0x3c1f98: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3c1f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3c1f9c:
    // 0x3c1f9c: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x3c1f9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_3c1fa0:
    // 0x3c1fa0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3c1fa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c1fa4:
    // 0x3c1fa4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3c1fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3c1fa8:
    // 0x3c1fa8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3c1fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c1fac:
    // 0x3c1fac: 0x60f809  jalr        $v1
label_3c1fb0:
    if (ctx->pc == 0x3C1FB0u) {
        ctx->pc = 0x3C1FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1FACu;
        // 0x3c1fb0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1FB4u;
        goto label_3c1fb4;
    }
    ctx->pc = 0x3C1FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C1FB4u);
        ctx->pc = 0x3C1FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1FACu;
        // 0x3c1fb0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1FACu, 0x3C1FB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1FB4u;
label_3c1fb4:
    // 0x3c1fb4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3c1fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c1fb8:
    // 0x3c1fb8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3c1fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c1fbc:
    // 0x3c1fbc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3c1fbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c1fc0:
    // 0x3c1fc0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3c1fc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c1fc4:
    // 0x3c1fc4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3c1fc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c1fc8:
    // 0x3c1fc8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c1fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3c1fcc:
    // 0x3c1fcc: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x3c1fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3c1fd0:
    // 0x3c1fd0: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x3c1fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3c1fd4:
    // 0x3c1fd4: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x3c1fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c1fd8:
    // 0x3c1fd8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x3c1fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c1fdc:
    // 0x3c1fdc: 0x3e00008  jr          $ra
label_3c1fe0:
    if (ctx->pc == 0x3C1FE0u) {
        ctx->pc = 0x3C1FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1FDCu;
        // 0x3c1fe0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1FE4u;
        goto label_3c1fe4;
    }
    ctx->pc = 0x3C1FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1FDCu;
        // 0x3c1fe0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C1FE4u;
label_3c1fe4:
    // 0x3c1fe4: 0x0  nop
    ctx->pc = 0x3c1fe4u;
    // NOP
    ctx->pc = 0x3c1fe8u;
}
