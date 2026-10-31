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

// Function: sub_003C0EF0
// Address: 0x3c0ef0 - 0x3c1148
void sub_003C0EF0_0x3c0ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0EF0_0x3c0ef0");
#endif

    switch (ctx->pc) {
        case 0x3c0ef0u: goto label_3c0ef0;
        case 0x3c0ef4u: goto label_3c0ef4;
        case 0x3c0ef8u: goto label_3c0ef8;
        case 0x3c0efcu: goto label_3c0efc;
        case 0x3c0f00u: goto label_3c0f00;
        case 0x3c0f04u: goto label_3c0f04;
        case 0x3c0f08u: goto label_3c0f08;
        case 0x3c0f0cu: goto label_3c0f0c;
        case 0x3c0f10u: goto label_3c0f10;
        case 0x3c0f14u: goto label_3c0f14;
        case 0x3c0f18u: goto label_3c0f18;
        case 0x3c0f1cu: goto label_3c0f1c;
        case 0x3c0f20u: goto label_3c0f20;
        case 0x3c0f24u: goto label_3c0f24;
        case 0x3c0f28u: goto label_3c0f28;
        case 0x3c0f2cu: goto label_3c0f2c;
        case 0x3c0f30u: goto label_3c0f30;
        case 0x3c0f34u: goto label_3c0f34;
        case 0x3c0f38u: goto label_3c0f38;
        case 0x3c0f3cu: goto label_3c0f3c;
        case 0x3c0f40u: goto label_3c0f40;
        case 0x3c0f44u: goto label_3c0f44;
        case 0x3c0f48u: goto label_3c0f48;
        case 0x3c0f4cu: goto label_3c0f4c;
        case 0x3c0f50u: goto label_3c0f50;
        case 0x3c0f54u: goto label_3c0f54;
        case 0x3c0f58u: goto label_3c0f58;
        case 0x3c0f5cu: goto label_3c0f5c;
        case 0x3c0f60u: goto label_3c0f60;
        case 0x3c0f64u: goto label_3c0f64;
        case 0x3c0f68u: goto label_3c0f68;
        case 0x3c0f6cu: goto label_3c0f6c;
        case 0x3c0f70u: goto label_3c0f70;
        case 0x3c0f74u: goto label_3c0f74;
        case 0x3c0f78u: goto label_3c0f78;
        case 0x3c0f7cu: goto label_3c0f7c;
        case 0x3c0f80u: goto label_3c0f80;
        case 0x3c0f84u: goto label_3c0f84;
        case 0x3c0f88u: goto label_3c0f88;
        case 0x3c0f8cu: goto label_3c0f8c;
        case 0x3c0f90u: goto label_3c0f90;
        case 0x3c0f94u: goto label_3c0f94;
        case 0x3c0f98u: goto label_3c0f98;
        case 0x3c0f9cu: goto label_3c0f9c;
        case 0x3c0fa0u: goto label_3c0fa0;
        case 0x3c0fa4u: goto label_3c0fa4;
        case 0x3c0fa8u: goto label_3c0fa8;
        case 0x3c0facu: goto label_3c0fac;
        case 0x3c0fb0u: goto label_3c0fb0;
        case 0x3c0fb4u: goto label_3c0fb4;
        case 0x3c0fb8u: goto label_3c0fb8;
        case 0x3c0fbcu: goto label_3c0fbc;
        case 0x3c0fc0u: goto label_3c0fc0;
        case 0x3c0fc4u: goto label_3c0fc4;
        case 0x3c0fc8u: goto label_3c0fc8;
        case 0x3c0fccu: goto label_3c0fcc;
        case 0x3c0fd0u: goto label_3c0fd0;
        case 0x3c0fd4u: goto label_3c0fd4;
        case 0x3c0fd8u: goto label_3c0fd8;
        case 0x3c0fdcu: goto label_3c0fdc;
        case 0x3c0fe0u: goto label_3c0fe0;
        case 0x3c0fe4u: goto label_3c0fe4;
        case 0x3c0fe8u: goto label_3c0fe8;
        case 0x3c0fecu: goto label_3c0fec;
        case 0x3c0ff0u: goto label_3c0ff0;
        case 0x3c0ff4u: goto label_3c0ff4;
        case 0x3c0ff8u: goto label_3c0ff8;
        case 0x3c0ffcu: goto label_3c0ffc;
        case 0x3c1000u: goto label_3c1000;
        case 0x3c1004u: goto label_3c1004;
        case 0x3c1008u: goto label_3c1008;
        case 0x3c100cu: goto label_3c100c;
        case 0x3c1010u: goto label_3c1010;
        case 0x3c1014u: goto label_3c1014;
        case 0x3c1018u: goto label_3c1018;
        case 0x3c101cu: goto label_3c101c;
        case 0x3c1020u: goto label_3c1020;
        case 0x3c1024u: goto label_3c1024;
        case 0x3c1028u: goto label_3c1028;
        case 0x3c102cu: goto label_3c102c;
        case 0x3c1030u: goto label_3c1030;
        case 0x3c1034u: goto label_3c1034;
        case 0x3c1038u: goto label_3c1038;
        case 0x3c103cu: goto label_3c103c;
        case 0x3c1040u: goto label_3c1040;
        case 0x3c1044u: goto label_3c1044;
        case 0x3c1048u: goto label_3c1048;
        case 0x3c104cu: goto label_3c104c;
        case 0x3c1050u: goto label_3c1050;
        case 0x3c1054u: goto label_3c1054;
        case 0x3c1058u: goto label_3c1058;
        case 0x3c105cu: goto label_3c105c;
        case 0x3c1060u: goto label_3c1060;
        case 0x3c1064u: goto label_3c1064;
        case 0x3c1068u: goto label_3c1068;
        case 0x3c106cu: goto label_3c106c;
        case 0x3c1070u: goto label_3c1070;
        case 0x3c1074u: goto label_3c1074;
        case 0x3c1078u: goto label_3c1078;
        case 0x3c107cu: goto label_3c107c;
        case 0x3c1080u: goto label_3c1080;
        case 0x3c1084u: goto label_3c1084;
        case 0x3c1088u: goto label_3c1088;
        case 0x3c108cu: goto label_3c108c;
        case 0x3c1090u: goto label_3c1090;
        case 0x3c1094u: goto label_3c1094;
        case 0x3c1098u: goto label_3c1098;
        case 0x3c109cu: goto label_3c109c;
        case 0x3c10a0u: goto label_3c10a0;
        case 0x3c10a4u: goto label_3c10a4;
        case 0x3c10a8u: goto label_3c10a8;
        case 0x3c10acu: goto label_3c10ac;
        case 0x3c10b0u: goto label_3c10b0;
        case 0x3c10b4u: goto label_3c10b4;
        case 0x3c10b8u: goto label_3c10b8;
        case 0x3c10bcu: goto label_3c10bc;
        case 0x3c10c0u: goto label_3c10c0;
        case 0x3c10c4u: goto label_3c10c4;
        case 0x3c10c8u: goto label_3c10c8;
        case 0x3c10ccu: goto label_3c10cc;
        case 0x3c10d0u: goto label_3c10d0;
        case 0x3c10d4u: goto label_3c10d4;
        case 0x3c10d8u: goto label_3c10d8;
        case 0x3c10dcu: goto label_3c10dc;
        case 0x3c10e0u: goto label_3c10e0;
        case 0x3c10e4u: goto label_3c10e4;
        case 0x3c10e8u: goto label_3c10e8;
        case 0x3c10ecu: goto label_3c10ec;
        case 0x3c10f0u: goto label_3c10f0;
        case 0x3c10f4u: goto label_3c10f4;
        case 0x3c10f8u: goto label_3c10f8;
        case 0x3c10fcu: goto label_3c10fc;
        case 0x3c1100u: goto label_3c1100;
        case 0x3c1104u: goto label_3c1104;
        case 0x3c1108u: goto label_3c1108;
        case 0x3c110cu: goto label_3c110c;
        case 0x3c1110u: goto label_3c1110;
        case 0x3c1114u: goto label_3c1114;
        case 0x3c1118u: goto label_3c1118;
        case 0x3c111cu: goto label_3c111c;
        case 0x3c1120u: goto label_3c1120;
        case 0x3c1124u: goto label_3c1124;
        case 0x3c1128u: goto label_3c1128;
        case 0x3c112cu: goto label_3c112c;
        case 0x3c1130u: goto label_3c1130;
        case 0x3c1134u: goto label_3c1134;
        case 0x3c1138u: goto label_3c1138;
        case 0x3c113cu: goto label_3c113c;
        case 0x3c1140u: goto label_3c1140;
        case 0x3c1144u: goto label_3c1144;
        default: break;
    }

    ctx->pc = 0x3c0ef0u;

label_3c0ef0:
    // 0x3c0ef0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x3c0ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_3c0ef4:
    // 0x3c0ef4: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x3c0ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_3c0ef8:
    // 0x3c0ef8: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x3c0ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_3c0efc:
    // 0x3c0efc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c0efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c0f00:
    // 0x3c0f00: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x3c0f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_3c0f04:
    // 0x3c0f04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c0f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c0f08:
    // 0x3c0f08: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x3c0f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_3c0f0c:
    // 0x3c0f0c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x3c0f0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c0f10:
    // 0x3c0f10: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x3c0f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_3c0f14:
    // 0x3c0f14: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x3c0f14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3c0f18:
    // 0x3c0f18: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x3c0f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_3c0f1c:
    // 0x3c0f1c: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x3c0f1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c0f20:
    // 0x3c0f20: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x3c0f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_3c0f24:
    // 0x3c0f24: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3c0f24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c0f28:
    // 0x3c0f28: 0xe7b70128  swc1        $f23, 0x128($sp)
    ctx->pc = 0x3c0f28u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_3c0f2c:
    // 0x3c0f2c: 0x3c16006f  lui         $s6, 0x6F
    ctx->pc = 0x3c0f2cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
label_3c0f30:
    // 0x3c0f30: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x3c0f30u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_3c0f34:
    // 0x3c0f34: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x3c0f34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_3c0f38:
    // 0x3c0f38: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3c0f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3c0f3c:
    // 0x3c0f3c: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x3c0f3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_3c0f40:
    // 0x3c0f40: 0x3c014038  lui         $at, 0x4038
    ctx->pc = 0x3c0f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16440 << 16));
label_3c0f44:
    // 0x3c0f44: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3c0f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3c0f48:
    // 0x3c0f48: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3c0f48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3c0f4c:
    // 0x3c0f4c: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x3c0f4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3c0f50:
    // 0x3c0f50: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3c0f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3c0f54:
    // 0x3c0f54: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3c0f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3c0f58:
    // 0x3c0f58: 0x3c01c0b8  lui         $at, 0xC0B8
    ctx->pc = 0x3c0f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49336 << 16));
label_3c0f5c:
    // 0x3c0f5c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3c0f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3c0f60:
    // 0x3c0f60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c0f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c0f64:
    // 0x3c0f64: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3c0f64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3c0f68:
    // 0x3c0f68: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3c0f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3c0f6c:
    // 0x3c0f6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c0f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c0f70:
    // 0x3c0f70: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x3c0f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
label_3c0f74:
    // 0x3c0f74: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c0f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c0f78:
    // 0x3c0f78: 0xc0cd508  jal         func_335420
label_3c0f7c:
    if (ctx->pc == 0x3C0F7Cu) {
        ctx->pc = 0x3C0F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F78u;
        // 0x3c0f7c: 0x26c4b8b8  addiu       $a0, $s6, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0F80u;
        goto label_3c0f80;
    }
    ctx->pc = 0x3C0F78u;
    SET_GPR_U32(ctx, 31, 0x3C0F80u);
    ctx->pc = 0x3C0F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0F78u;
    // 0x3c0f7c: 0x26c4b8b8  addiu       $a0, $s6, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3C0F78u, 0x3C0F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0F80u;
label_3c0f80:
    // 0x3c0f80: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_3c0f84:
    if (ctx->pc == 0x3C0F84u) {
        ctx->pc = 0x3C0F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F80u;
        // 0x3c0f84: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0F88u;
        goto label_3c0f88;
    }
    ctx->pc = 0x3C0F80u;
    {
        const bool branch_taken_0x3c0f80 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3C0F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F80u;
        // 0x3c0f84: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0f80) {
            ctx->pc = 0x3C0F9Cu;
            goto label_3c0f9c;
        }
    }
    ctx->pc = 0x3C0F88u;
label_3c0f88:
    // 0x3c0f88: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3c0f88u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c0f8c:
    // 0x3c0f8c: 0x0  nop
    ctx->pc = 0x3c0f8cu;
    // NOP
label_3c0f90:
    // 0x3c0f90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c0f90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c0f94:
    // 0x3c0f94: 0x10000009  b           . + 4 + (0x9 << 2)
label_3c0f98:
    if (ctx->pc == 0x3C0F98u) {
        ctx->pc = 0x3C0F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F94u;
        // 0x3c0f98: 0x46170002  mul.s       $f0, $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0F9Cu;
        goto label_3c0f9c;
    }
    ctx->pc = 0x3C0F94u;
    {
        const bool branch_taken_0x3c0f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0F94u;
        // 0x3c0f98: 0x46170002  mul.s       $f0, $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0f94) {
            ctx->pc = 0x3C0FBCu;
            goto label_3c0fbc;
        }
    }
    ctx->pc = 0x3C0F9Cu;
label_3c0f9c:
    // 0x3c0f9c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3c0f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_3c0fa0:
    // 0x3c0fa0: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x3c0fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_3c0fa4:
    // 0x3c0fa4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3c0fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3c0fa8:
    // 0x3c0fa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c0fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c0fac:
    // 0x3c0fac: 0x0  nop
    ctx->pc = 0x3c0facu;
    // NOP
label_3c0fb0:
    // 0x3c0fb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c0fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c0fb4:
    // 0x3c0fb4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3c0fb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3c0fb8:
    // 0x3c0fb8: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x3c0fb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3c0fbc:
    // 0x3c0fbc: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3c0fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3c0fc0:
    // 0x3c0fc0: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x3c0fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_3c0fc4:
    // 0x3c0fc4: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x3c0fc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_3c0fc8:
    // 0x3c0fc8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3c0fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3c0fcc:
    // 0x3c0fcc: 0xe675000c  swc1        $f21, 0xC($s3)
    ctx->pc = 0x3c0fccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3c0fd0:
    // 0x3c0fd0: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x3c0fd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c0fd4:
    // 0x3c0fd4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c0fd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c0fd8:
    // 0x3c0fd8: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3c0fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3c0fdc:
    // 0x3c0fdc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3c0fdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3c0fe0:
    // 0x3c0fe0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3c0fe0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3c0fe4:
    // 0x3c0fe4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3c0fe4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c0fe8:
    // 0x3c0fe8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3c0fe8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c0fec:
    // 0x3c0fec: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3c0fecu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c0ff0:
    // 0x3c0ff0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3c0ff0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c0ff4:
    // 0x3c0ff4: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3c0ff4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c0ff8:
    // 0x3c0ff8: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3c0ff8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3c0ffc:
    // 0x3c0ffc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3c0ffcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c1000:
    // 0x3c1000: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3c1000u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3c1004:
    // 0x3c1004: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3c1004u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3c1008:
    // 0x3c1008: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3c1008u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c100c:
    // 0x3c100c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3c100cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3c1010:
    // 0x3c1010: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3c1010u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3c1014:
    // 0x3c1014: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3c1014u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c1018:
    // 0x3c1018: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3c1018u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3c101c:
    // 0x3c101c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3c101cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3c1020:
    // 0x3c1020: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3c1020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3c1024:
    // 0x3c1024: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3c1024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3c1028:
    // 0x3c1028: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3c1028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3c102c:
    // 0x3c102c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c102cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c1030:
    // 0x3c1030: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3c1030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3c1034:
    // 0x3c1034: 0xc136b18  jal         func_4DAC60
label_3c1038:
    if (ctx->pc == 0x3C1038u) {
        ctx->pc = 0x3C1038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1034u;
        // 0x3c1038: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C103Cu;
        goto label_3c103c;
    }
    ctx->pc = 0x3C1034u;
    SET_GPR_U32(ctx, 31, 0x3C103Cu);
    ctx->pc = 0x3C1038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1034u;
    // 0x3c1038: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C1034u, 0x3C103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C103Cu;
label_3c103c:
    // 0x3c103c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3c103cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3c1040:
    // 0x3c1040: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3c1040u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c1044:
    // 0x3c1044: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3c1044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3c1048:
    // 0x3c1048: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3c1048u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3c104c:
    // 0x3c104c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c104cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c1050:
    // 0x3c1050: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3c1050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3c1054:
    // 0x3c1054: 0x34a56964  ori         $a1, $a1, 0x6964
    ctx->pc = 0x3c1054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
label_3c1058:
    // 0x3c1058: 0xc0f15f6  jal         func_3C57D8
label_3c105c:
    if (ctx->pc == 0x3C105Cu) {
        ctx->pc = 0x3C105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1058u;
        // 0x3c105c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1060u;
        goto label_3c1060;
    }
    ctx->pc = 0x3C1058u;
    SET_GPR_U32(ctx, 31, 0x3C1060u);
    ctx->pc = 0x3C105Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1058u;
    // 0x3c105c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3C1058u, 0x3C1060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1060u;
label_3c1060:
    // 0x3c1060: 0x3c059595  lui         $a1, 0x9595
    ctx->pc = 0x3c1060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38293 << 16));
label_3c1064:
    // 0x3c1064: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c1064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c1068:
    // 0x3c1068: 0xc0e9ba2  jal         func_3A6E88
label_3c106c:
    if (ctx->pc == 0x3C106Cu) {
        ctx->pc = 0x3C106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1068u;
        // 0x3c106c: 0x34a5958d  ori         $a1, $a1, 0x958D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)38285);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1070u;
        goto label_3c1070;
    }
    ctx->pc = 0x3C1068u;
    SET_GPR_U32(ctx, 31, 0x3C1070u);
    ctx->pc = 0x3C106Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1068u;
    // 0x3c106c: 0x34a5958d  ori         $a1, $a1, 0x958D (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)38285);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6E88u, 0x3C1068u, 0x3C1070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1070u;
label_3c1070:
    // 0x3c1070: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x3c1070u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_3c1074:
    // 0x3c1074: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
label_3c1078:
    if (ctx->pc == 0x3C1078u) {
        ctx->pc = 0x3C1078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1074u;
        // 0x3c1078: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C107Cu;
        goto label_3c107c;
    }
    ctx->pc = 0x3C1074u;
    {
        const bool branch_taken_0x3c1074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1074u;
        // 0x3c1078: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1074) {
            ctx->pc = 0x3C0F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0f68;
        }
    }
    ctx->pc = 0x3C107Cu;
label_3c107c:
    // 0x3c107c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3c107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3c1080:
    // 0x3c1080: 0x3c05efcf  lui         $a1, 0xEFCF
    ctx->pc = 0x3c1080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61391 << 16));
label_3c1084:
    // 0x3c1084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c1084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c1088:
    // 0x3c1088: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3c1088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3c108c:
    // 0x3c108c: 0x34a5c554  ori         $a1, $a1, 0xC554
    ctx->pc = 0x3c108cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50516);
label_3c1090:
    // 0x3c1090: 0xc0e9132  jal         func_3A44C8
label_3c1094:
    if (ctx->pc == 0x3C1094u) {
        ctx->pc = 0x3C1094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1090u;
        // 0x3c1094: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1098u;
        goto label_3c1098;
    }
    ctx->pc = 0x3C1090u;
    SET_GPR_U32(ctx, 31, 0x3C1098u);
    ctx->pc = 0x3C1094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1090u;
    // 0x3c1094: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3C1090u, 0x3C1098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1098u;
label_3c1098:
    // 0x3c1098: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x3c1098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_3c109c:
    // 0x3c109c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c109cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c10a0:
    // 0x3c10a0: 0xc0e858c  jal         func_3A1630
label_3c10a4:
    if (ctx->pc == 0x3C10A4u) {
        ctx->pc = 0x3C10A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10A0u;
        // 0x3c10a4: 0x240500b4  addiu       $a1, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C10A8u;
        goto label_3c10a8;
    }
    ctx->pc = 0x3C10A0u;
    SET_GPR_U32(ctx, 31, 0x3C10A8u);
    ctx->pc = 0x3C10A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C10A0u;
    // 0x3c10a4: 0x240500b4  addiu       $a1, $zero, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C10A0u, 0x3C10A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C10A8u;
label_3c10a8:
    // 0x3c10a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3c10a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3c10ac:
    // 0x3c10ac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3c10acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c10b0:
    // 0x3c10b0: 0xc1073cc  jal         func_41CF30
label_3c10b4:
    if (ctx->pc == 0x3C10B4u) {
        ctx->pc = 0x3C10B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10B0u;
        // 0x3c10b4: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C10B8u;
        goto label_3c10b8;
    }
    ctx->pc = 0x3C10B0u;
    SET_GPR_U32(ctx, 31, 0x3C10B8u);
    ctx->pc = 0x3C10B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C10B0u;
    // 0x3c10b4: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3C10B0u, 0x3C10B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C10B8u;
label_3c10b8:
    // 0x3c10b8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3c10b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3c10bc:
    // 0x3c10bc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_3c10c0:
    if (ctx->pc == 0x3C10C0u) {
        ctx->pc = 0x3C10C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10BCu;
        // 0x3c10c0: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C10C4u;
        goto label_3c10c4;
    }
    ctx->pc = 0x3C10BCu;
    {
        const bool branch_taken_0x3c10bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c10bc) {
            ctx->pc = 0x3C10C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C10BCu;
            // 0x3c10c0: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C10ECu;
            goto label_3c10ec;
        }
    }
    ctx->pc = 0x3C10C4u;
label_3c10c4:
    // 0x3c10c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c10c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c10c8:
    // 0x3c10c8: 0xc0e8dee  jal         func_3A37B8
label_3c10cc:
    if (ctx->pc == 0x3C10CCu) {
        ctx->pc = 0x3C10CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10C8u;
        // 0x3c10cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C10D0u;
        goto label_3c10d0;
    }
    ctx->pc = 0x3C10C8u;
    SET_GPR_U32(ctx, 31, 0x3C10D0u);
    ctx->pc = 0x3C10CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C10C8u;
    // 0x3c10cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3C10C8u, 0x3C10D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C10D0u;
label_3c10d0:
    // 0x3c10d0: 0x7a230010  lq          $v1, 0x10($s1)
    ctx->pc = 0x3c10d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3c10d4:
    // 0x3c10d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c10d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c10d8:
    // 0x3c10d8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3c10d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c10dc:
    // 0x3c10dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3c10dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c10e0:
    // 0x3c10e0: 0xc045ca0  jal         func_117280
label_3c10e4:
    if (ctx->pc == 0x3C10E4u) {
        ctx->pc = 0x3C10E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10E0u;
        // 0x3c10e4: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C10E8u;
        goto label_3c10e8;
    }
    ctx->pc = 0x3C10E0u;
    SET_GPR_U32(ctx, 31, 0x3C10E8u);
    ctx->pc = 0x3C10E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C10E0u;
    // 0x3c10e4: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3C10E0u, 0x3C10E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C10E8u;
label_3c10e8:
    // 0x3c10e8: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x3c10e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3c10ec:
    // 0x3c10ec: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_3c10f0:
    if (ctx->pc == 0x3C10F0u) {
        ctx->pc = 0x3C10F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10ECu;
        // 0x3c10f0: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C10F4u;
        goto label_3c10f4;
    }
    ctx->pc = 0x3C10ECu;
    {
        const bool branch_taken_0x3c10ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C10F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C10ECu;
        // 0x3c10f0: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c10ec) {
            ctx->pc = 0x3C1110u;
            goto label_3c1110;
        }
    }
    ctx->pc = 0x3C10F4u;
label_3c10f4:
    // 0x3c10f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3c10f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3c10f8:
    // 0x3c10f8: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3c10f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3c10fc:
    // 0x3c10fc: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3c10fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3c1100:
    // 0x3c1100: 0x60f809  jalr        $v1
label_3c1104:
    if (ctx->pc == 0x3C1104u) {
        ctx->pc = 0x3C1104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1100u;
        // 0x3c1104: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1108u;
        goto label_3c1108;
    }
    ctx->pc = 0x3C1100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C1108u);
        ctx->pc = 0x3C1104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1100u;
        // 0x3c1104: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1100u, 0x3C1108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1108u;
label_3c1108:
    // 0x3c1108: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x3c1108u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_3c110c:
    // 0x3c110c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x3c110cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3c1110:
    // 0x3c1110: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x3c1110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3c1114:
    // 0x3c1114: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x3c1114u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3c1118:
    // 0x3c1118: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x3c1118u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3c111c:
    // 0x3c111c: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x3c111cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3c1120:
    // 0x3c1120: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x3c1120u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3c1124:
    // 0x3c1124: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x3c1124u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3c1128:
    // 0x3c1128: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3c1128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3c112c:
    // 0x3c112c: 0xc7b70128  lwc1        $f23, 0x128($sp)
    ctx->pc = 0x3c112cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3c1130:
    // 0x3c1130: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x3c1130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3c1134:
    // 0x3c1134: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x3c1134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c1138:
    // 0x3c1138: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x3c1138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c113c:
    // 0x3c113c: 0x3e00008  jr          $ra
label_3c1140:
    if (ctx->pc == 0x3C1140u) {
        ctx->pc = 0x3C1140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C113Cu;
        // 0x3c1140: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1144u;
        goto label_3c1144;
    }
    ctx->pc = 0x3C113Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C113Cu;
        // 0x3c1140: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C113Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C1144u;
label_3c1144:
    // 0x3c1144: 0x0  nop
    ctx->pc = 0x3c1144u;
    // NOP
    ctx->pc = 0x3c1148u;
}
