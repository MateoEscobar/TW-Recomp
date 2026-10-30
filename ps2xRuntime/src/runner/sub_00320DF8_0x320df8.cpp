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

// Function: sub_00320DF8
// Address: 0x320df8 - 0x321028
void sub_00320DF8_0x320df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320DF8_0x320df8");
#endif

    switch (ctx->pc) {
        case 0x320df8u: goto label_320df8;
        case 0x320dfcu: goto label_320dfc;
        case 0x320e00u: goto label_320e00;
        case 0x320e04u: goto label_320e04;
        case 0x320e08u: goto label_320e08;
        case 0x320e0cu: goto label_320e0c;
        case 0x320e10u: goto label_320e10;
        case 0x320e14u: goto label_320e14;
        case 0x320e18u: goto label_320e18;
        case 0x320e1cu: goto label_320e1c;
        case 0x320e20u: goto label_320e20;
        case 0x320e24u: goto label_320e24;
        case 0x320e28u: goto label_320e28;
        case 0x320e2cu: goto label_320e2c;
        case 0x320e30u: goto label_320e30;
        case 0x320e34u: goto label_320e34;
        case 0x320e38u: goto label_320e38;
        case 0x320e3cu: goto label_320e3c;
        case 0x320e40u: goto label_320e40;
        case 0x320e44u: goto label_320e44;
        case 0x320e48u: goto label_320e48;
        case 0x320e4cu: goto label_320e4c;
        case 0x320e50u: goto label_320e50;
        case 0x320e54u: goto label_320e54;
        case 0x320e58u: goto label_320e58;
        case 0x320e5cu: goto label_320e5c;
        case 0x320e60u: goto label_320e60;
        case 0x320e64u: goto label_320e64;
        case 0x320e68u: goto label_320e68;
        case 0x320e6cu: goto label_320e6c;
        case 0x320e70u: goto label_320e70;
        case 0x320e74u: goto label_320e74;
        case 0x320e78u: goto label_320e78;
        case 0x320e7cu: goto label_320e7c;
        case 0x320e80u: goto label_320e80;
        case 0x320e84u: goto label_320e84;
        case 0x320e88u: goto label_320e88;
        case 0x320e8cu: goto label_320e8c;
        case 0x320e90u: goto label_320e90;
        case 0x320e94u: goto label_320e94;
        case 0x320e98u: goto label_320e98;
        case 0x320e9cu: goto label_320e9c;
        case 0x320ea0u: goto label_320ea0;
        case 0x320ea4u: goto label_320ea4;
        case 0x320ea8u: goto label_320ea8;
        case 0x320eacu: goto label_320eac;
        case 0x320eb0u: goto label_320eb0;
        case 0x320eb4u: goto label_320eb4;
        case 0x320eb8u: goto label_320eb8;
        case 0x320ebcu: goto label_320ebc;
        case 0x320ec0u: goto label_320ec0;
        case 0x320ec4u: goto label_320ec4;
        case 0x320ec8u: goto label_320ec8;
        case 0x320eccu: goto label_320ecc;
        case 0x320ed0u: goto label_320ed0;
        case 0x320ed4u: goto label_320ed4;
        case 0x320ed8u: goto label_320ed8;
        case 0x320edcu: goto label_320edc;
        case 0x320ee0u: goto label_320ee0;
        case 0x320ee4u: goto label_320ee4;
        case 0x320ee8u: goto label_320ee8;
        case 0x320eecu: goto label_320eec;
        case 0x320ef0u: goto label_320ef0;
        case 0x320ef4u: goto label_320ef4;
        case 0x320ef8u: goto label_320ef8;
        case 0x320efcu: goto label_320efc;
        case 0x320f00u: goto label_320f00;
        case 0x320f04u: goto label_320f04;
        case 0x320f08u: goto label_320f08;
        case 0x320f0cu: goto label_320f0c;
        case 0x320f10u: goto label_320f10;
        case 0x320f14u: goto label_320f14;
        case 0x320f18u: goto label_320f18;
        case 0x320f1cu: goto label_320f1c;
        case 0x320f20u: goto label_320f20;
        case 0x320f24u: goto label_320f24;
        case 0x320f28u: goto label_320f28;
        case 0x320f2cu: goto label_320f2c;
        case 0x320f30u: goto label_320f30;
        case 0x320f34u: goto label_320f34;
        case 0x320f38u: goto label_320f38;
        case 0x320f3cu: goto label_320f3c;
        case 0x320f40u: goto label_320f40;
        case 0x320f44u: goto label_320f44;
        case 0x320f48u: goto label_320f48;
        case 0x320f4cu: goto label_320f4c;
        case 0x320f50u: goto label_320f50;
        case 0x320f54u: goto label_320f54;
        case 0x320f58u: goto label_320f58;
        case 0x320f5cu: goto label_320f5c;
        case 0x320f60u: goto label_320f60;
        case 0x320f64u: goto label_320f64;
        case 0x320f68u: goto label_320f68;
        case 0x320f6cu: goto label_320f6c;
        case 0x320f70u: goto label_320f70;
        case 0x320f74u: goto label_320f74;
        case 0x320f78u: goto label_320f78;
        case 0x320f7cu: goto label_320f7c;
        case 0x320f80u: goto label_320f80;
        case 0x320f84u: goto label_320f84;
        case 0x320f88u: goto label_320f88;
        case 0x320f8cu: goto label_320f8c;
        case 0x320f90u: goto label_320f90;
        case 0x320f94u: goto label_320f94;
        case 0x320f98u: goto label_320f98;
        case 0x320f9cu: goto label_320f9c;
        case 0x320fa0u: goto label_320fa0;
        case 0x320fa4u: goto label_320fa4;
        case 0x320fa8u: goto label_320fa8;
        case 0x320facu: goto label_320fac;
        case 0x320fb0u: goto label_320fb0;
        case 0x320fb4u: goto label_320fb4;
        case 0x320fb8u: goto label_320fb8;
        case 0x320fbcu: goto label_320fbc;
        case 0x320fc0u: goto label_320fc0;
        case 0x320fc4u: goto label_320fc4;
        case 0x320fc8u: goto label_320fc8;
        case 0x320fccu: goto label_320fcc;
        case 0x320fd0u: goto label_320fd0;
        case 0x320fd4u: goto label_320fd4;
        case 0x320fd8u: goto label_320fd8;
        case 0x320fdcu: goto label_320fdc;
        case 0x320fe0u: goto label_320fe0;
        case 0x320fe4u: goto label_320fe4;
        case 0x320fe8u: goto label_320fe8;
        case 0x320fecu: goto label_320fec;
        case 0x320ff0u: goto label_320ff0;
        case 0x320ff4u: goto label_320ff4;
        case 0x320ff8u: goto label_320ff8;
        case 0x320ffcu: goto label_320ffc;
        case 0x321000u: goto label_321000;
        case 0x321004u: goto label_321004;
        case 0x321008u: goto label_321008;
        case 0x32100cu: goto label_32100c;
        case 0x321010u: goto label_321010;
        case 0x321014u: goto label_321014;
        case 0x321018u: goto label_321018;
        case 0x32101cu: goto label_32101c;
        case 0x321020u: goto label_321020;
        case 0x321024u: goto label_321024;
        default: break;
    }

    ctx->pc = 0x320df8u;

label_320df8:
    // 0x320df8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x320df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_320dfc:
    // 0x320dfc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x320dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_320e00:
    // 0x320e00: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x320e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_320e04:
    // 0x320e04: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x320e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320e08:
    // 0x320e08: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x320e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_320e0c:
    // 0x320e0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x320e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_320e10:
    // 0x320e10: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x320e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_320e14:
    // 0x320e14: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x320e14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_320e18:
    // 0x320e18: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x320e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_320e1c:
    // 0x320e1c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x320e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_320e20:
    // 0x320e20: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x320e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_320e24:
    // 0x320e24: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x320e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_320e28:
    // 0x320e28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x320e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_320e2c:
    // 0x320e2c: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x320e2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_320e30:
    // 0x320e30: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x320e30u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_320e34:
    // 0x320e34: 0x14400070  bnez        $v0, . + 4 + (0x70 << 2)
label_320e38:
    if (ctx->pc == 0x320E38u) {
        ctx->pc = 0x320E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E34u;
        // 0x320e38: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320E3Cu;
        goto label_320e3c;
    }
    ctx->pc = 0x320E34u;
    {
        const bool branch_taken_0x320e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E34u;
        // 0x320e38: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320e34) {
            ctx->pc = 0x320FF8u;
            goto label_320ff8;
        }
    }
    ctx->pc = 0x320E3Cu;
label_320e3c:
    // 0x320e3c: 0xc087502  jal         func_21D408
label_320e40:
    if (ctx->pc == 0x320E40u) {
        ctx->pc = 0x320E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E3Cu;
        // 0x320e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320E44u;
        goto label_320e44;
    }
    ctx->pc = 0x320E3Cu;
    SET_GPR_U32(ctx, 31, 0x320E44u);
    ctx->pc = 0x320E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320E3Cu;
    // 0x320e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x320E3Cu, 0x320E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320E44u;
label_320e44:
    // 0x320e44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x320e44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320e48:
    // 0x320e48: 0xc0a3630  jal         func_28D8C0
label_320e4c:
    if (ctx->pc == 0x320E4Cu) {
        ctx->pc = 0x320E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E48u;
        // 0x320e4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320E50u;
        goto label_320e50;
    }
    ctx->pc = 0x320E48u;
    SET_GPR_U32(ctx, 31, 0x320E50u);
    ctx->pc = 0x320E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320E48u;
    // 0x320e4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x320E48u, 0x320E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320E50u;
label_320e50:
    // 0x320e50: 0xc0a3628  jal         func_28D8A0
label_320e54:
    if (ctx->pc == 0x320E54u) {
        ctx->pc = 0x320E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E50u;
        // 0x320e54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320E58u;
        goto label_320e58;
    }
    ctx->pc = 0x320E50u;
    SET_GPR_U32(ctx, 31, 0x320E58u);
    ctx->pc = 0x320E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320E50u;
    // 0x320e54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x320E50u, 0x320E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320E58u;
label_320e58:
    // 0x320e58: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x320e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_320e5c:
    // 0x320e5c: 0x240200dd  addiu       $v0, $zero, 0xDD
    ctx->pc = 0x320e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
label_320e60:
    // 0x320e60: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_320e64:
    if (ctx->pc == 0x320E64u) {
        ctx->pc = 0x320E68u;
        goto label_320e68;
    }
    ctx->pc = 0x320E60u;
    {
        const bool branch_taken_0x320e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x320e60) {
            ctx->pc = 0x320EC8u;
            goto label_320ec8;
        }
    }
    ctx->pc = 0x320E68u;
label_320e68:
    // 0x320e68: 0xc0a4e54  jal         func_293950
label_320e6c:
    if (ctx->pc == 0x320E6Cu) {
        ctx->pc = 0x320E70u;
        goto label_320e70;
    }
    ctx->pc = 0x320E68u;
    SET_GPR_U32(ctx, 31, 0x320E70u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x320E68u, 0x320E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320E70u;
label_320e70:
    // 0x320e70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x320e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320e74:
    // 0x320e74: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_320e78:
    if (ctx->pc == 0x320E78u) {
        ctx->pc = 0x320E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E74u;
        // 0x320e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320E7Cu;
        goto label_320e7c;
    }
    ctx->pc = 0x320E74u;
    {
        const bool branch_taken_0x320e74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x320E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E74u;
        // 0x320e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320e74) {
            ctx->pc = 0x320EB4u;
            goto label_320eb4;
        }
    }
    ctx->pc = 0x320E7Cu;
label_320e7c:
    // 0x320e7c: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x320e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_320e80:
    // 0x320e80: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x320e80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_320e84:
    // 0x320e84: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x320e84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_320e88:
    // 0x320e88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x320e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_320e8c:
    // 0x320e8c: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x320e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
label_320e90:
    // 0x320e90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x320e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_320e94:
    // 0x320e94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x320e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320e98:
    // 0x320e98: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x320e98u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_320e9c:
    // 0x320e9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x320e9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320ea0:
    // 0x320ea0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x320ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320ea4:
    // 0x320ea4: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x320ea4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
label_320ea8:
    // 0x320ea8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x320ea8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320eac:
    // 0x320eac: 0xc0b8c60  jal         func_2E3180
label_320eb0:
    if (ctx->pc == 0x320EB0u) {
        ctx->pc = 0x320EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320EACu;
        // 0x320eb0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320EB4u;
        goto label_320eb4;
    }
    ctx->pc = 0x320EACu;
    SET_GPR_U32(ctx, 31, 0x320EB4u);
    ctx->pc = 0x320EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320EACu;
    // 0x320eb0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3180u, 0x320EACu, 0x320EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320EB4u;
label_320eb4:
    // 0x320eb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x320eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_320eb8:
    // 0x320eb8: 0xc0a35d6  jal         func_28D758
label_320ebc:
    if (ctx->pc == 0x320EBCu) {
        ctx->pc = 0x320EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320EB8u;
        // 0x320ebc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320EC0u;
        goto label_320ec0;
    }
    ctx->pc = 0x320EB8u;
    SET_GPR_U32(ctx, 31, 0x320EC0u);
    ctx->pc = 0x320EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320EB8u;
    // 0x320ebc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x320EB8u, 0x320EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320EC0u;
label_320ec0:
    // 0x320ec0: 0x1000004e  b           . + 4 + (0x4E << 2)
label_320ec4:
    if (ctx->pc == 0x320EC4u) {
        ctx->pc = 0x320EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320EC0u;
        // 0x320ec4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320EC8u;
        goto label_320ec8;
    }
    ctx->pc = 0x320EC0u;
    {
        const bool branch_taken_0x320ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320EC0u;
        // 0x320ec4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320ec0) {
            ctx->pc = 0x320FFCu;
            goto label_320ffc;
        }
    }
    ctx->pc = 0x320EC8u;
label_320ec8:
    // 0x320ec8: 0x16d00041  bne         $s6, $s0, . + 4 + (0x41 << 2)
label_320ecc:
    if (ctx->pc == 0x320ECCu) {
        ctx->pc = 0x320ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320EC8u;
        // 0x320ecc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320ED0u;
        goto label_320ed0;
    }
    ctx->pc = 0x320EC8u;
    {
        const bool branch_taken_0x320ec8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 16));
        ctx->pc = 0x320ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320EC8u;
        // 0x320ecc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320ec8) {
            ctx->pc = 0x320FD0u;
            goto label_320fd0;
        }
    }
    ctx->pc = 0x320ED0u;
label_320ed0:
    // 0x320ed0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x320ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_320ed4:
    // 0x320ed4: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
label_320ed8:
    if (ctx->pc == 0x320ED8u) {
        ctx->pc = 0x320ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320ED4u;
        // 0x320ed8: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320EDCu;
        goto label_320edc;
    }
    ctx->pc = 0x320ED4u;
    {
        const bool branch_taken_0x320ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x320ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320ED4u;
        // 0x320ed8: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320ed4) {
            ctx->pc = 0x320FD0u;
            goto label_320fd0;
        }
    }
    ctx->pc = 0x320EDCu;
label_320edc:
    // 0x320edc: 0x8ea4489c  lw          $a0, 0x489C($s5)
    ctx->pc = 0x320edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_320ee0:
    // 0x320ee0: 0xc0e409a  jal         func_390268
label_320ee4:
    if (ctx->pc == 0x320EE4u) {
        ctx->pc = 0x320EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320EE0u;
        // 0x320ee4: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320EE8u;
        goto label_320ee8;
    }
    ctx->pc = 0x320EE0u;
    SET_GPR_U32(ctx, 31, 0x320EE8u);
    ctx->pc = 0x320EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320EE0u;
    // 0x320ee4: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x320EE0u, 0x320EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320EE8u;
label_320ee8:
    // 0x320ee8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x320ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320eec:
    // 0x320eec: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
label_320ef0:
    if (ctx->pc == 0x320EF0u) {
        ctx->pc = 0x320EF4u;
        goto label_320ef4;
    }
    ctx->pc = 0x320EECu;
    {
        const bool branch_taken_0x320eec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x320eec) {
            ctx->pc = 0x320FD0u;
            goto label_320fd0;
        }
    }
    ctx->pc = 0x320EF4u;
label_320ef4:
    // 0x320ef4: 0xc087502  jal         func_21D408
label_320ef8:
    if (ctx->pc == 0x320EF8u) {
        ctx->pc = 0x320EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320EF4u;
        // 0x320ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320EFCu;
        goto label_320efc;
    }
    ctx->pc = 0x320EF4u;
    SET_GPR_U32(ctx, 31, 0x320EFCu);
    ctx->pc = 0x320EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320EF4u;
    // 0x320ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x320EF4u, 0x320EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320EFCu;
label_320efc:
    // 0x320efc: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x320efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_320f00:
    // 0x320f00: 0x8e42020c  lw          $v0, 0x20C($s2)
    ctx->pc = 0x320f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
label_320f04:
    // 0x320f04: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
label_320f08:
    if (ctx->pc == 0x320F08u) {
        ctx->pc = 0x320F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320F04u;
        // 0x320f08: 0x26340090  addiu       $s4, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320F0Cu;
        goto label_320f0c;
    }
    ctx->pc = 0x320F04u;
    {
        const bool branch_taken_0x320f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x320F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320F04u;
        // 0x320f08: 0x26340090  addiu       $s4, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320f04) {
            ctx->pc = 0x320FD0u;
            goto label_320fd0;
        }
    }
    ctx->pc = 0x320F0Cu;
label_320f0c:
    // 0x320f0c: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x320f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_320f10:
    // 0x320f10: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x320f10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_320f14:
    // 0x320f14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x320f14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_320f18:
    // 0x320f18: 0x86850002  lh          $a1, 0x2($s4)
    ctx->pc = 0x320f18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_320f1c:
    // 0x320f1c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x320f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_320f20:
    // 0x320f20: 0x24534b00  addiu       $s3, $v0, 0x4B00
    ctx->pc = 0x320f20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_320f24:
    // 0x320f24: 0x8ea4489c  lw          $a0, 0x489C($s5)
    ctx->pc = 0x320f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_320f28:
    // 0x320f28: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x320f28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_320f2c:
    // 0x320f2c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x320f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_320f30:
    // 0x320f30: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x320f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_320f34:
    // 0x320f34: 0xc1067b8  jal         func_419EE0
label_320f38:
    if (ctx->pc == 0x320F38u) {
        ctx->pc = 0x320F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320F34u;
        // 0x320f38: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320F3Cu;
        goto label_320f3c;
    }
    ctx->pc = 0x320F34u;
    SET_GPR_U32(ctx, 31, 0x320F3Cu);
    ctx->pc = 0x320F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320F34u;
    // 0x320f38: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x320F34u, 0x320F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320F3Cu;
label_320f3c:
    // 0x320f3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x320f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320f40:
    // 0x320f40: 0x12300023  beq         $s1, $s0, . + 4 + (0x23 << 2)
label_320f44:
    if (ctx->pc == 0x320F44u) {
        ctx->pc = 0x320F48u;
        goto label_320f48;
    }
    ctx->pc = 0x320F40u;
    {
        const bool branch_taken_0x320f40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x320f40) {
            ctx->pc = 0x320FD0u;
            goto label_320fd0;
        }
    }
    ctx->pc = 0x320F48u;
label_320f48:
    // 0x320f48: 0x86840002  lh          $a0, 0x2($s4)
    ctx->pc = 0x320f48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_320f4c:
    // 0x320f4c: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x320f4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_320f50:
    // 0x320f50: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x320f50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_320f54:
    // 0x320f54: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x320f54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_320f58:
    // 0x320f58: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x320f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_320f5c:
    // 0x320f5c: 0xc0cdb38  jal         func_336CE0
label_320f60:
    if (ctx->pc == 0x320F60u) {
        ctx->pc = 0x320F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320F5Cu;
        // 0x320f60: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320F64u;
        goto label_320f64;
    }
    ctx->pc = 0x320F5Cu;
    SET_GPR_U32(ctx, 31, 0x320F64u);
    ctx->pc = 0x320F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320F5Cu;
    // 0x320f60: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x320F5Cu, 0x320F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320F64u;
label_320f64:
    // 0x320f64: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x320f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_320f68:
    // 0x320f68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x320f68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_320f6c:
    // 0x320f6c: 0x0  nop
    ctx->pc = 0x320f6cu;
    // NOP
label_320f70:
    // 0x320f70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x320f70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_320f74:
    // 0x320f74: 0x0  nop
    ctx->pc = 0x320f74u;
    // NOP
label_320f78:
    // 0x320f78: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_320f7c:
    if (ctx->pc == 0x320F7Cu) {
        ctx->pc = 0x320F80u;
        goto label_320f80;
    }
    ctx->pc = 0x320F78u;
    {
        const bool branch_taken_0x320f78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x320f78) {
            ctx->pc = 0x320FD0u;
            goto label_320fd0;
        }
    }
    ctx->pc = 0x320F80u;
label_320f80:
    // 0x320f80: 0xc0a4e54  jal         func_293950
label_320f84:
    if (ctx->pc == 0x320F84u) {
        ctx->pc = 0x320F88u;
        goto label_320f88;
    }
    ctx->pc = 0x320F80u;
    SET_GPR_U32(ctx, 31, 0x320F88u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x320F80u, 0x320F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320F88u;
label_320f88:
    // 0x320f88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x320f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320f8c:
    // 0x320f8c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_320f90:
    if (ctx->pc == 0x320F90u) {
        ctx->pc = 0x320F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320F8Cu;
        // 0x320f90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320F94u;
        goto label_320f94;
    }
    ctx->pc = 0x320F8Cu;
    {
        const bool branch_taken_0x320f8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x320F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320F8Cu;
        // 0x320f90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320f8c) {
            ctx->pc = 0x320FC0u;
            goto label_320fc0;
        }
    }
    ctx->pc = 0x320F94u;
label_320f94:
    // 0x320f94: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x320f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_320f98:
    // 0x320f98: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x320f98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_320f9c:
    // 0x320f9c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x320f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_320fa0:
    // 0x320fa0: 0x40f809  jalr        $v0
label_320fa4:
    if (ctx->pc == 0x320FA4u) {
        ctx->pc = 0x320FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320FA0u;
        // 0x320fa4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320FA8u;
        goto label_320fa8;
    }
    ctx->pc = 0x320FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320FA8u);
        ctx->pc = 0x320FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320FA0u;
        // 0x320fa4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320FA0u, 0x320FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320FA8u;
label_320fa8:
    // 0x320fa8: 0xc64c013c  lwc1        $f12, 0x13C($s2)
    ctx->pc = 0x320fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_320fac:
    // 0x320fac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x320facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320fb0:
    // 0x320fb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x320fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_320fb4:
    // 0x320fb4: 0xc0af288  jal         func_2BCA20
label_320fb8:
    if (ctx->pc == 0x320FB8u) {
        ctx->pc = 0x320FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320FB4u;
        // 0x320fb8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320FBCu;
        goto label_320fbc;
    }
    ctx->pc = 0x320FB4u;
    SET_GPR_U32(ctx, 31, 0x320FBCu);
    ctx->pc = 0x320FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320FB4u;
    // 0x320fb8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BCA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BCA20u, 0x320FB4u, 0x320FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320FBCu;
label_320fbc:
    // 0x320fbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x320fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_320fc0:
    // 0x320fc0: 0xc0a35d6  jal         func_28D758
label_320fc4:
    if (ctx->pc == 0x320FC4u) {
        ctx->pc = 0x320FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320FC0u;
        // 0x320fc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320FC8u;
        goto label_320fc8;
    }
    ctx->pc = 0x320FC0u;
    SET_GPR_U32(ctx, 31, 0x320FC8u);
    ctx->pc = 0x320FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320FC0u;
    // 0x320fc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x320FC0u, 0x320FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320FC8u;
label_320fc8:
    // 0x320fc8: 0x1000000b  b           . + 4 + (0xB << 2)
label_320fcc:
    if (ctx->pc == 0x320FCCu) {
        ctx->pc = 0x320FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320FC8u;
        // 0x320fcc: 0xa2f60018  sb          $s6, 0x18($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 24), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320FD0u;
        goto label_320fd0;
    }
    ctx->pc = 0x320FC8u;
    {
        const bool branch_taken_0x320fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320FC8u;
        // 0x320fcc: 0xa2f60018  sb          $s6, 0x18($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 24), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320fc8) {
            ctx->pc = 0x320FF8u;
            goto label_320ff8;
        }
    }
    ctx->pc = 0x320FD0u;
label_320fd0:
    // 0x320fd0: 0xc0a4e54  jal         func_293950
label_320fd4:
    if (ctx->pc == 0x320FD4u) {
        ctx->pc = 0x320FD8u;
        goto label_320fd8;
    }
    ctx->pc = 0x320FD0u;
    SET_GPR_U32(ctx, 31, 0x320FD8u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x320FD0u, 0x320FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320FD8u;
label_320fd8:
    // 0x320fd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x320fd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320fdc:
    // 0x320fdc: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_320fe0:
    if (ctx->pc == 0x320FE0u) {
        ctx->pc = 0x320FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320FDCu;
        // 0x320fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320FE4u;
        goto label_320fe4;
    }
    ctx->pc = 0x320FDCu;
    {
        const bool branch_taken_0x320fdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x320FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320FDCu;
        // 0x320fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320fdc) {
            ctx->pc = 0x320FECu;
            goto label_320fec;
        }
    }
    ctx->pc = 0x320FE4u;
label_320fe4:
    // 0x320fe4: 0xc0afb16  jal         func_2BEC58
label_320fe8:
    if (ctx->pc == 0x320FE8u) {
        ctx->pc = 0x320FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320FE4u;
        // 0x320fe8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320FECu;
        goto label_320fec;
    }
    ctx->pc = 0x320FE4u;
    SET_GPR_U32(ctx, 31, 0x320FECu);
    ctx->pc = 0x320FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320FE4u;
    // 0x320fe8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEC58u, 0x320FE4u, 0x320FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320FECu;
label_320fec:
    // 0x320fec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x320fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_320ff0:
    // 0x320ff0: 0xc0a35d6  jal         func_28D758
label_320ff4:
    if (ctx->pc == 0x320FF4u) {
        ctx->pc = 0x320FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320FF0u;
        // 0x320ff4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320FF8u;
        goto label_320ff8;
    }
    ctx->pc = 0x320FF0u;
    SET_GPR_U32(ctx, 31, 0x320FF8u);
    ctx->pc = 0x320FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320FF0u;
    // 0x320ff4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x320FF0u, 0x320FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320FF8u;
label_320ff8:
    // 0x320ff8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x320ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_320ffc:
    // 0x320ffc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x320ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_321000:
    // 0x321000: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x321000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_321004:
    // 0x321004: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x321004u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_321008:
    // 0x321008: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x321008u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_32100c:
    // 0x32100c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x32100cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_321010:
    // 0x321010: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x321010u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_321014:
    // 0x321014: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x321014u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_321018:
    // 0x321018: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x321018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32101c:
    // 0x32101c: 0x3e00008  jr          $ra
label_321020:
    if (ctx->pc == 0x321020u) {
        ctx->pc = 0x321020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32101Cu;
        // 0x321020: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321024u;
        goto label_321024;
    }
    ctx->pc = 0x32101Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32101Cu;
        // 0x321020: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32101Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321024u;
label_321024:
    // 0x321024: 0x0  nop
    ctx->pc = 0x321024u;
    // NOP
    ctx->pc = 0x321028u;
}
