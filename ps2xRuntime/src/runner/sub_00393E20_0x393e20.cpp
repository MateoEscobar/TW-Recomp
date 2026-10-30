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

// Function: sub_00393E20
// Address: 0x393e20 - 0x394050
void sub_00393E20_0x393e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00393E20_0x393e20");
#endif

    switch (ctx->pc) {
        case 0x393e20u: goto label_393e20;
        case 0x393e24u: goto label_393e24;
        case 0x393e28u: goto label_393e28;
        case 0x393e2cu: goto label_393e2c;
        case 0x393e30u: goto label_393e30;
        case 0x393e34u: goto label_393e34;
        case 0x393e38u: goto label_393e38;
        case 0x393e3cu: goto label_393e3c;
        case 0x393e40u: goto label_393e40;
        case 0x393e44u: goto label_393e44;
        case 0x393e48u: goto label_393e48;
        case 0x393e4cu: goto label_393e4c;
        case 0x393e50u: goto label_393e50;
        case 0x393e54u: goto label_393e54;
        case 0x393e58u: goto label_393e58;
        case 0x393e5cu: goto label_393e5c;
        case 0x393e60u: goto label_393e60;
        case 0x393e64u: goto label_393e64;
        case 0x393e68u: goto label_393e68;
        case 0x393e6cu: goto label_393e6c;
        case 0x393e70u: goto label_393e70;
        case 0x393e74u: goto label_393e74;
        case 0x393e78u: goto label_393e78;
        case 0x393e7cu: goto label_393e7c;
        case 0x393e80u: goto label_393e80;
        case 0x393e84u: goto label_393e84;
        case 0x393e88u: goto label_393e88;
        case 0x393e8cu: goto label_393e8c;
        case 0x393e90u: goto label_393e90;
        case 0x393e94u: goto label_393e94;
        case 0x393e98u: goto label_393e98;
        case 0x393e9cu: goto label_393e9c;
        case 0x393ea0u: goto label_393ea0;
        case 0x393ea4u: goto label_393ea4;
        case 0x393ea8u: goto label_393ea8;
        case 0x393eacu: goto label_393eac;
        case 0x393eb0u: goto label_393eb0;
        case 0x393eb4u: goto label_393eb4;
        case 0x393eb8u: goto label_393eb8;
        case 0x393ebcu: goto label_393ebc;
        case 0x393ec0u: goto label_393ec0;
        case 0x393ec4u: goto label_393ec4;
        case 0x393ec8u: goto label_393ec8;
        case 0x393eccu: goto label_393ecc;
        case 0x393ed0u: goto label_393ed0;
        case 0x393ed4u: goto label_393ed4;
        case 0x393ed8u: goto label_393ed8;
        case 0x393edcu: goto label_393edc;
        case 0x393ee0u: goto label_393ee0;
        case 0x393ee4u: goto label_393ee4;
        case 0x393ee8u: goto label_393ee8;
        case 0x393eecu: goto label_393eec;
        case 0x393ef0u: goto label_393ef0;
        case 0x393ef4u: goto label_393ef4;
        case 0x393ef8u: goto label_393ef8;
        case 0x393efcu: goto label_393efc;
        case 0x393f00u: goto label_393f00;
        case 0x393f04u: goto label_393f04;
        case 0x393f08u: goto label_393f08;
        case 0x393f0cu: goto label_393f0c;
        case 0x393f10u: goto label_393f10;
        case 0x393f14u: goto label_393f14;
        case 0x393f18u: goto label_393f18;
        case 0x393f1cu: goto label_393f1c;
        case 0x393f20u: goto label_393f20;
        case 0x393f24u: goto label_393f24;
        case 0x393f28u: goto label_393f28;
        case 0x393f2cu: goto label_393f2c;
        case 0x393f30u: goto label_393f30;
        case 0x393f34u: goto label_393f34;
        case 0x393f38u: goto label_393f38;
        case 0x393f3cu: goto label_393f3c;
        case 0x393f40u: goto label_393f40;
        case 0x393f44u: goto label_393f44;
        case 0x393f48u: goto label_393f48;
        case 0x393f4cu: goto label_393f4c;
        case 0x393f50u: goto label_393f50;
        case 0x393f54u: goto label_393f54;
        case 0x393f58u: goto label_393f58;
        case 0x393f5cu: goto label_393f5c;
        case 0x393f60u: goto label_393f60;
        case 0x393f64u: goto label_393f64;
        case 0x393f68u: goto label_393f68;
        case 0x393f6cu: goto label_393f6c;
        case 0x393f70u: goto label_393f70;
        case 0x393f74u: goto label_393f74;
        case 0x393f78u: goto label_393f78;
        case 0x393f7cu: goto label_393f7c;
        case 0x393f80u: goto label_393f80;
        case 0x393f84u: goto label_393f84;
        case 0x393f88u: goto label_393f88;
        case 0x393f8cu: goto label_393f8c;
        case 0x393f90u: goto label_393f90;
        case 0x393f94u: goto label_393f94;
        case 0x393f98u: goto label_393f98;
        case 0x393f9cu: goto label_393f9c;
        case 0x393fa0u: goto label_393fa0;
        case 0x393fa4u: goto label_393fa4;
        case 0x393fa8u: goto label_393fa8;
        case 0x393facu: goto label_393fac;
        case 0x393fb0u: goto label_393fb0;
        case 0x393fb4u: goto label_393fb4;
        case 0x393fb8u: goto label_393fb8;
        case 0x393fbcu: goto label_393fbc;
        case 0x393fc0u: goto label_393fc0;
        case 0x393fc4u: goto label_393fc4;
        case 0x393fc8u: goto label_393fc8;
        case 0x393fccu: goto label_393fcc;
        case 0x393fd0u: goto label_393fd0;
        case 0x393fd4u: goto label_393fd4;
        case 0x393fd8u: goto label_393fd8;
        case 0x393fdcu: goto label_393fdc;
        case 0x393fe0u: goto label_393fe0;
        case 0x393fe4u: goto label_393fe4;
        case 0x393fe8u: goto label_393fe8;
        case 0x393fecu: goto label_393fec;
        case 0x393ff0u: goto label_393ff0;
        case 0x393ff4u: goto label_393ff4;
        case 0x393ff8u: goto label_393ff8;
        case 0x393ffcu: goto label_393ffc;
        case 0x394000u: goto label_394000;
        case 0x394004u: goto label_394004;
        case 0x394008u: goto label_394008;
        case 0x39400cu: goto label_39400c;
        case 0x394010u: goto label_394010;
        case 0x394014u: goto label_394014;
        case 0x394018u: goto label_394018;
        case 0x39401cu: goto label_39401c;
        case 0x394020u: goto label_394020;
        case 0x394024u: goto label_394024;
        case 0x394028u: goto label_394028;
        case 0x39402cu: goto label_39402c;
        case 0x394030u: goto label_394030;
        case 0x394034u: goto label_394034;
        case 0x394038u: goto label_394038;
        case 0x39403cu: goto label_39403c;
        case 0x394040u: goto label_394040;
        case 0x394044u: goto label_394044;
        case 0x394048u: goto label_394048;
        case 0x39404cu: goto label_39404c;
        default: break;
    }

    ctx->pc = 0x393e20u;

label_393e20:
    // 0x393e20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x393e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_393e24:
    // 0x393e24: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x393e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_393e28:
    // 0x393e28: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x393e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_393e2c:
    // 0x393e2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x393e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_393e30:
    // 0x393e30: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x393e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_393e34:
    // 0x393e34: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x393e34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_393e38:
    // 0x393e38: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x393e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_393e3c:
    // 0x393e3c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x393e3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_393e40:
    // 0x393e40: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x393e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_393e44:
    // 0x393e44: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x393e44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_393e48:
    // 0x393e48: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x393e48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_393e4c:
    // 0x393e4c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x393e4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_393e50:
    // 0x393e50: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x393e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_393e54:
    // 0x393e54: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x393e54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_393e58:
    // 0x393e58: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_393e5c:
    if (ctx->pc == 0x393E5Cu) {
        ctx->pc = 0x393E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393E58u;
        // 0x393e5c: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393E60u;
        goto label_393e60;
    }
    ctx->pc = 0x393E58u;
    {
        const bool branch_taken_0x393e58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x393E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393E58u;
        // 0x393e5c: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393e58) {
            ctx->pc = 0x393E68u;
            goto label_393e68;
        }
    }
    ctx->pc = 0x393E60u;
label_393e60:
    // 0x393e60: 0xc095fce  jal         func_257F38
label_393e64:
    if (ctx->pc == 0x393E64u) {
        ctx->pc = 0x393E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393E60u;
        // 0x393e64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393E68u;
        goto label_393e68;
    }
    ctx->pc = 0x393E60u;
    SET_GPR_U32(ctx, 31, 0x393E68u);
    ctx->pc = 0x393E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393E60u;
    // 0x393e64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x393E60u, 0x393E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393E68u;
label_393e68:
    // 0x393e68: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x393e68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_393e6c:
    // 0x393e6c: 0xc0e8b48  jal         func_3A2D20
label_393e70:
    if (ctx->pc == 0x393E70u) {
        ctx->pc = 0x393E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393E6Cu;
        // 0x393e70: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393E74u;
        goto label_393e74;
    }
    ctx->pc = 0x393E6Cu;
    SET_GPR_U32(ctx, 31, 0x393E74u);
    ctx->pc = 0x393E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393E6Cu;
    // 0x393e70: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x393E6Cu, 0x393E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393E74u;
label_393e74:
    // 0x393e74: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x393e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_393e78:
    // 0x393e78: 0xc0e8b70  jal         func_3A2DC0
label_393e7c:
    if (ctx->pc == 0x393E7Cu) {
        ctx->pc = 0x393E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393E78u;
        // 0x393e7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393E80u;
        goto label_393e80;
    }
    ctx->pc = 0x393E78u;
    SET_GPR_U32(ctx, 31, 0x393E80u);
    ctx->pc = 0x393E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393E78u;
    // 0x393e7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x393E78u, 0x393E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393E80u;
label_393e80:
    // 0x393e80: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x393e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_393e84:
    // 0x393e84: 0xc0e8b70  jal         func_3A2DC0
label_393e88:
    if (ctx->pc == 0x393E88u) {
        ctx->pc = 0x393E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393E84u;
        // 0x393e88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393E8Cu;
        goto label_393e8c;
    }
    ctx->pc = 0x393E84u;
    SET_GPR_U32(ctx, 31, 0x393E8Cu);
    ctx->pc = 0x393E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393E84u;
    // 0x393e88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x393E84u, 0x393E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393E8Cu;
label_393e8c:
    // 0x393e8c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x393e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_393e90:
    // 0x393e90: 0xc0e8b68  jal         func_3A2DA0
label_393e94:
    if (ctx->pc == 0x393E94u) {
        ctx->pc = 0x393E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393E90u;
        // 0x393e94: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393E98u;
        goto label_393e98;
    }
    ctx->pc = 0x393E90u;
    SET_GPR_U32(ctx, 31, 0x393E98u);
    ctx->pc = 0x393E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393E90u;
    // 0x393e94: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x393E90u, 0x393E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393E98u;
label_393e98:
    // 0x393e98: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x393e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_393e9c:
    // 0x393e9c: 0xc0e8b68  jal         func_3A2DA0
label_393ea0:
    if (ctx->pc == 0x393EA0u) {
        ctx->pc = 0x393EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393E9Cu;
        // 0x393ea0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393EA4u;
        goto label_393ea4;
    }
    ctx->pc = 0x393E9Cu;
    SET_GPR_U32(ctx, 31, 0x393EA4u);
    ctx->pc = 0x393EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393E9Cu;
    // 0x393ea0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x393E9Cu, 0x393EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393EA4u;
label_393ea4:
    // 0x393ea4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x393ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_393ea8:
    // 0x393ea8: 0xc0e8b58  jal         func_3A2D60
label_393eac:
    if (ctx->pc == 0x393EACu) {
        ctx->pc = 0x393EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393EA8u;
        // 0x393eac: 0x26650090  addiu       $a1, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393EB0u;
        goto label_393eb0;
    }
    ctx->pc = 0x393EA8u;
    SET_GPR_U32(ctx, 31, 0x393EB0u);
    ctx->pc = 0x393EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393EA8u;
    // 0x393eac: 0x26650090  addiu       $a1, $s3, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x393EA8u, 0x393EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393EB0u;
label_393eb0:
    // 0x393eb0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x393eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_393eb4:
    // 0x393eb4: 0xc0e8b58  jal         func_3A2D60
label_393eb8:
    if (ctx->pc == 0x393EB8u) {
        ctx->pc = 0x393EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393EB4u;
        // 0x393eb8: 0x26650050  addiu       $a1, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393EBCu;
        goto label_393ebc;
    }
    ctx->pc = 0x393EB4u;
    SET_GPR_U32(ctx, 31, 0x393EBCu);
    ctx->pc = 0x393EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393EB4u;
    // 0x393eb8: 0x26650050  addiu       $a1, $s3, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x393EB4u, 0x393EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393EBCu;
label_393ebc:
    // 0x393ebc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x393ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_393ec0:
    // 0x393ec0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x393ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_393ec4:
    // 0x393ec4: 0xc0e8b80  jal         func_3A2E00
label_393ec8:
    if (ctx->pc == 0x393EC8u) {
        ctx->pc = 0x393EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393EC4u;
        // 0x393ec8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393ECCu;
        goto label_393ecc;
    }
    ctx->pc = 0x393EC4u;
    SET_GPR_U32(ctx, 31, 0x393ECCu);
    ctx->pc = 0x393EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393EC4u;
    // 0x393ec8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x393EC4u, 0x393ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393ECCu;
label_393ecc:
    // 0x393ecc: 0xc0e8b50  jal         func_3A2D40
label_393ed0:
    if (ctx->pc == 0x393ED0u) {
        ctx->pc = 0x393ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393ECCu;
        // 0x393ed0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393ED4u;
        goto label_393ed4;
    }
    ctx->pc = 0x393ECCu;
    SET_GPR_U32(ctx, 31, 0x393ED4u);
    ctx->pc = 0x393ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393ECCu;
    // 0x393ed0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x393ECCu, 0x393ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393ED4u;
label_393ed4:
    // 0x393ed4: 0xc0e4936  jal         func_3924D8
label_393ed8:
    if (ctx->pc == 0x393ED8u) {
        ctx->pc = 0x393ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393ED4u;
        // 0x393ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393EDCu;
        goto label_393edc;
    }
    ctx->pc = 0x393ED4u;
    SET_GPR_U32(ctx, 31, 0x393EDCu);
    ctx->pc = 0x393ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393ED4u;
    // 0x393ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3924D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3924D8u, 0x393ED4u, 0x393EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393EDCu;
label_393edc:
    // 0x393edc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_393ee0:
    if (ctx->pc == 0x393EE0u) {
        ctx->pc = 0x393EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393EDCu;
        // 0x393ee0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393EE4u;
        goto label_393ee4;
    }
    ctx->pc = 0x393EDCu;
    {
        const bool branch_taken_0x393edc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x393EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393EDCu;
        // 0x393ee0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393edc) {
            ctx->pc = 0x393EF0u;
            goto label_393ef0;
        }
    }
    ctx->pc = 0x393EE4u;
label_393ee4:
    // 0x393ee4: 0xc087020  jal         func_21C080
label_393ee8:
    if (ctx->pc == 0x393EE8u) {
        ctx->pc = 0x393EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393EE4u;
        // 0x393ee8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393EECu;
        goto label_393eec;
    }
    ctx->pc = 0x393EE4u;
    SET_GPR_U32(ctx, 31, 0x393EECu);
    ctx->pc = 0x393EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393EE4u;
    // 0x393ee8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C080u, 0x393EE4u, 0x393EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393EECu;
label_393eec:
    // 0x393eec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x393eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_393ef0:
    // 0x393ef0: 0x96250112  lhu         $a1, 0x112($s1)
    ctx->pc = 0x393ef0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
label_393ef4:
    // 0x393ef4: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x393ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
label_393ef8:
    // 0x393ef8: 0xc0e44cc  jal         func_391330
label_393efc:
    if (ctx->pc == 0x393EFCu) {
        ctx->pc = 0x393EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393EF8u;
        // 0x393efc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393F00u;
        goto label_393f00;
    }
    ctx->pc = 0x393EF8u;
    SET_GPR_U32(ctx, 31, 0x393F00u);
    ctx->pc = 0x393EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393EF8u;
    // 0x393efc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x393EF8u, 0x393F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393F00u;
label_393f00:
    // 0x393f00: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x393f00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_393f04:
    // 0x393f04: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x393f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_393f08:
    // 0x393f08: 0x5462003b  bnel        $v1, $v0, . + 4 + (0x3B << 2)
label_393f0c:
    if (ctx->pc == 0x393F0Cu) {
        ctx->pc = 0x393F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393F08u;
        // 0x393f0c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393F10u;
        goto label_393f10;
    }
    ctx->pc = 0x393F08u;
    {
        const bool branch_taken_0x393f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x393f08) {
            ctx->pc = 0x393F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393F08u;
            // 0x393f0c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393FF8u;
            goto label_393ff8;
        }
    }
    ctx->pc = 0x393F10u;
label_393f10:
    // 0x393f10: 0x260216c0  addiu       $v0, $s0, 0x16C0
    ctx->pc = 0x393f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_393f14:
    // 0x393f14: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x393f14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_393f18:
    // 0x393f18: 0x12800028  beqz        $s4, . + 4 + (0x28 << 2)
label_393f1c:
    if (ctx->pc == 0x393F1Cu) {
        ctx->pc = 0x393F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393F18u;
        // 0x393f1c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393F20u;
        goto label_393f20;
    }
    ctx->pc = 0x393F18u;
    {
        const bool branch_taken_0x393f18 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x393F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393F18u;
        // 0x393f1c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393f18) {
            ctx->pc = 0x393FBCu;
            goto label_393fbc;
        }
    }
    ctx->pc = 0x393F20u;
label_393f20:
    // 0x393f20: 0xc0e87c0  jal         func_3A1F00
label_393f24:
    if (ctx->pc == 0x393F24u) {
        ctx->pc = 0x393F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393F20u;
        // 0x393f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393F28u;
        goto label_393f28;
    }
    ctx->pc = 0x393F20u;
    SET_GPR_U32(ctx, 31, 0x393F28u);
    ctx->pc = 0x393F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393F20u;
    // 0x393f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x393F20u, 0x393F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393F28u;
label_393f28:
    // 0x393f28: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x393f28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_393f2c:
    // 0x393f2c: 0x86850092  lh          $a1, 0x92($s4)
    ctx->pc = 0x393f2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_393f30:
    // 0x393f30: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x393f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_393f34:
    // 0x393f34: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x393f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_393f38:
    // 0x393f38: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x393f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_393f3c:
    // 0x393f3c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x393f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_393f40:
    // 0x393f40: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x393f40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_393f44:
    // 0x393f44: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x393f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_393f48:
    // 0x393f48: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x393f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_393f4c:
    // 0x393f4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x393f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_393f50:
    // 0x393f50: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x393f50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_393f54:
    // 0x393f54: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x393f54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_393f58:
    // 0x393f58: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x393f58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_393f5c:
    // 0x393f5c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x393f5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_393f60:
    // 0x393f60: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x393f60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_393f64:
    // 0x393f64: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x393f64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_393f68:
    // 0x393f68: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x393f68u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_393f6c:
    // 0x393f6c: 0x4a0003bf  vwaitq
    ctx->pc = 0x393f6cu;
    // VWAITQ (Q already resolved in this runtime)
label_393f70:
    // 0x393f70: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x393f70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_393f74:
    // 0x393f74: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x393f74u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_393f78:
    // 0x393f78: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x393f78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_393f7c:
    // 0x393f7c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x393f7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_393f80:
    // 0x393f80: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x393f80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_393f84:
    // 0x393f84: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x393f84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_393f88:
    // 0x393f88: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x393f88u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_393f8c:
    // 0x393f8c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x393f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_393f90:
    // 0x393f90: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x393f90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_393f94:
    // 0x393f94: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x393f94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_393f98:
    // 0x393f98: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x393f98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_393f9c:
    // 0x393f9c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x393f9cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_393fa0:
    // 0x393fa0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x393fa0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_393fa4:
    // 0x393fa4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x393fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_393fa8:
    // 0x393fa8: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x393fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_393fac:
    // 0x393fac: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x393facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_393fb0:
    // 0x393fb0: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x393fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_393fb4:
    // 0x393fb4: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x393fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_393fb8:
    // 0x393fb8: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x393fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_393fbc:
    // 0x393fbc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x393fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_393fc0:
    // 0x393fc0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x393fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_393fc4:
    // 0x393fc4: 0xc10b1c6  jal         func_42C718
label_393fc8:
    if (ctx->pc == 0x393FC8u) {
        ctx->pc = 0x393FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393FC4u;
        // 0x393fc8: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x393FCCu;
        goto label_393fcc;
    }
    ctx->pc = 0x393FC4u;
    SET_GPR_U32(ctx, 31, 0x393FCCu);
    ctx->pc = 0x393FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393FC4u;
    // 0x393fc8: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x393FC4u, 0x393FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393FCCu;
label_393fcc:
    // 0x393fcc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x393fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_393fd0:
    // 0x393fd0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x393fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_393fd4:
    // 0x393fd4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x393fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_393fd8:
    // 0x393fd8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x393fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_393fdc:
    // 0x393fdc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x393fdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_393fe0:
    // 0x393fe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x393fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_393fe4:
    // 0x393fe4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x393fe4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_393fe8:
    // 0x393fe8: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x393fe8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_393fec:
    // 0x393fec: 0xc0e498e  jal         func_392638
label_393ff0:
    if (ctx->pc == 0x393FF0u) {
        ctx->pc = 0x393FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393FECu;
        // 0x393ff0: 0x3a0502d  daddu       $t2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393FF4u;
        goto label_393ff4;
    }
    ctx->pc = 0x393FECu;
    SET_GPR_U32(ctx, 31, 0x393FF4u);
    ctx->pc = 0x393FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393FECu;
    // 0x393ff0: 0x3a0502d  daddu       $t2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392638u, 0x393FECu, 0x393FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393FF4u;
label_393ff4:
    // 0x393ff4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x393ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_393ff8:
    // 0x393ff8: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x393ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_393ffc:
    // 0x393ffc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x393ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_394000:
    // 0x394000: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x394000u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_394004:
    // 0x394004: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x394004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_394008:
    // 0x394008: 0x40f809  jalr        $v0
label_39400c:
    if (ctx->pc == 0x39400Cu) {
        ctx->pc = 0x39400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394008u;
        // 0x39400c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394010u;
        goto label_394010;
    }
    ctx->pc = 0x394008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x394010u);
        ctx->pc = 0x39400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394008u;
        // 0x39400c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394008u, 0x394010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x394010u;
label_394010:
    // 0x394010: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x394010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_394014:
    // 0x394014: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x394014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_394018:
    // 0x394018: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x394018u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_39401c:
    // 0x39401c: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x39401cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_394020:
    // 0x394020: 0x40f809  jalr        $v0
label_394024:
    if (ctx->pc == 0x394024u) {
        ctx->pc = 0x394024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394020u;
        // 0x394024: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394028u;
        goto label_394028;
    }
    ctx->pc = 0x394020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x394028u);
        ctx->pc = 0x394024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394020u;
        // 0x394024: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394020u, 0x394028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x394028u;
label_394028:
    // 0x394028: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x394028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_39402c:
    // 0x39402c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x39402cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_394030:
    // 0x394030: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x394030u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_394034:
    // 0x394034: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x394034u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_394038:
    // 0x394038: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x394038u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39403c:
    // 0x39403c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x39403cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_394040:
    // 0x394040: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x394040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_394044:
    // 0x394044: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x394044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_394048:
    // 0x394048: 0x3e00008  jr          $ra
label_39404c:
    if (ctx->pc == 0x39404Cu) {
        ctx->pc = 0x39404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394048u;
        // 0x39404c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394050u;
        goto label_fallthrough_0x394048;
    }
    ctx->pc = 0x394048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394048u;
        // 0x39404c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x394048:
    ctx->pc = 0x394050u;
}
