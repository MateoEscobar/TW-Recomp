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

// Function: sub_003E0F50
// Address: 0x3e0f50 - 0x3e1248
void sub_003E0F50_0x3e0f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0F50_0x3e0f50");
#endif

    switch (ctx->pc) {
        case 0x3e0f50u: goto label_3e0f50;
        case 0x3e0f54u: goto label_3e0f54;
        case 0x3e0f58u: goto label_3e0f58;
        case 0x3e0f5cu: goto label_3e0f5c;
        case 0x3e0f60u: goto label_3e0f60;
        case 0x3e0f64u: goto label_3e0f64;
        case 0x3e0f68u: goto label_3e0f68;
        case 0x3e0f6cu: goto label_3e0f6c;
        case 0x3e0f70u: goto label_3e0f70;
        case 0x3e0f74u: goto label_3e0f74;
        case 0x3e0f78u: goto label_3e0f78;
        case 0x3e0f7cu: goto label_3e0f7c;
        case 0x3e0f80u: goto label_3e0f80;
        case 0x3e0f84u: goto label_3e0f84;
        case 0x3e0f88u: goto label_3e0f88;
        case 0x3e0f8cu: goto label_3e0f8c;
        case 0x3e0f90u: goto label_3e0f90;
        case 0x3e0f94u: goto label_3e0f94;
        case 0x3e0f98u: goto label_3e0f98;
        case 0x3e0f9cu: goto label_3e0f9c;
        case 0x3e0fa0u: goto label_3e0fa0;
        case 0x3e0fa4u: goto label_3e0fa4;
        case 0x3e0fa8u: goto label_3e0fa8;
        case 0x3e0facu: goto label_3e0fac;
        case 0x3e0fb0u: goto label_3e0fb0;
        case 0x3e0fb4u: goto label_3e0fb4;
        case 0x3e0fb8u: goto label_3e0fb8;
        case 0x3e0fbcu: goto label_3e0fbc;
        case 0x3e0fc0u: goto label_3e0fc0;
        case 0x3e0fc4u: goto label_3e0fc4;
        case 0x3e0fc8u: goto label_3e0fc8;
        case 0x3e0fccu: goto label_3e0fcc;
        case 0x3e0fd0u: goto label_3e0fd0;
        case 0x3e0fd4u: goto label_3e0fd4;
        case 0x3e0fd8u: goto label_3e0fd8;
        case 0x3e0fdcu: goto label_3e0fdc;
        case 0x3e0fe0u: goto label_3e0fe0;
        case 0x3e0fe4u: goto label_3e0fe4;
        case 0x3e0fe8u: goto label_3e0fe8;
        case 0x3e0fecu: goto label_3e0fec;
        case 0x3e0ff0u: goto label_3e0ff0;
        case 0x3e0ff4u: goto label_3e0ff4;
        case 0x3e0ff8u: goto label_3e0ff8;
        case 0x3e0ffcu: goto label_3e0ffc;
        case 0x3e1000u: goto label_3e1000;
        case 0x3e1004u: goto label_3e1004;
        case 0x3e1008u: goto label_3e1008;
        case 0x3e100cu: goto label_3e100c;
        case 0x3e1010u: goto label_3e1010;
        case 0x3e1014u: goto label_3e1014;
        case 0x3e1018u: goto label_3e1018;
        case 0x3e101cu: goto label_3e101c;
        case 0x3e1020u: goto label_3e1020;
        case 0x3e1024u: goto label_3e1024;
        case 0x3e1028u: goto label_3e1028;
        case 0x3e102cu: goto label_3e102c;
        case 0x3e1030u: goto label_3e1030;
        case 0x3e1034u: goto label_3e1034;
        case 0x3e1038u: goto label_3e1038;
        case 0x3e103cu: goto label_3e103c;
        case 0x3e1040u: goto label_3e1040;
        case 0x3e1044u: goto label_3e1044;
        case 0x3e1048u: goto label_3e1048;
        case 0x3e104cu: goto label_3e104c;
        case 0x3e1050u: goto label_3e1050;
        case 0x3e1054u: goto label_3e1054;
        case 0x3e1058u: goto label_3e1058;
        case 0x3e105cu: goto label_3e105c;
        case 0x3e1060u: goto label_3e1060;
        case 0x3e1064u: goto label_3e1064;
        case 0x3e1068u: goto label_3e1068;
        case 0x3e106cu: goto label_3e106c;
        case 0x3e1070u: goto label_3e1070;
        case 0x3e1074u: goto label_3e1074;
        case 0x3e1078u: goto label_3e1078;
        case 0x3e107cu: goto label_3e107c;
        case 0x3e1080u: goto label_3e1080;
        case 0x3e1084u: goto label_3e1084;
        case 0x3e1088u: goto label_3e1088;
        case 0x3e108cu: goto label_3e108c;
        case 0x3e1090u: goto label_3e1090;
        case 0x3e1094u: goto label_3e1094;
        case 0x3e1098u: goto label_3e1098;
        case 0x3e109cu: goto label_3e109c;
        case 0x3e10a0u: goto label_3e10a0;
        case 0x3e10a4u: goto label_3e10a4;
        case 0x3e10a8u: goto label_3e10a8;
        case 0x3e10acu: goto label_3e10ac;
        case 0x3e10b0u: goto label_3e10b0;
        case 0x3e10b4u: goto label_3e10b4;
        case 0x3e10b8u: goto label_3e10b8;
        case 0x3e10bcu: goto label_3e10bc;
        case 0x3e10c0u: goto label_3e10c0;
        case 0x3e10c4u: goto label_3e10c4;
        case 0x3e10c8u: goto label_3e10c8;
        case 0x3e10ccu: goto label_3e10cc;
        case 0x3e10d0u: goto label_3e10d0;
        case 0x3e10d4u: goto label_3e10d4;
        case 0x3e10d8u: goto label_3e10d8;
        case 0x3e10dcu: goto label_3e10dc;
        case 0x3e10e0u: goto label_3e10e0;
        case 0x3e10e4u: goto label_3e10e4;
        case 0x3e10e8u: goto label_3e10e8;
        case 0x3e10ecu: goto label_3e10ec;
        case 0x3e10f0u: goto label_3e10f0;
        case 0x3e10f4u: goto label_3e10f4;
        case 0x3e10f8u: goto label_3e10f8;
        case 0x3e10fcu: goto label_3e10fc;
        case 0x3e1100u: goto label_3e1100;
        case 0x3e1104u: goto label_3e1104;
        case 0x3e1108u: goto label_3e1108;
        case 0x3e110cu: goto label_3e110c;
        case 0x3e1110u: goto label_3e1110;
        case 0x3e1114u: goto label_3e1114;
        case 0x3e1118u: goto label_3e1118;
        case 0x3e111cu: goto label_3e111c;
        case 0x3e1120u: goto label_3e1120;
        case 0x3e1124u: goto label_3e1124;
        case 0x3e1128u: goto label_3e1128;
        case 0x3e112cu: goto label_3e112c;
        case 0x3e1130u: goto label_3e1130;
        case 0x3e1134u: goto label_3e1134;
        case 0x3e1138u: goto label_3e1138;
        case 0x3e113cu: goto label_3e113c;
        case 0x3e1140u: goto label_3e1140;
        case 0x3e1144u: goto label_3e1144;
        case 0x3e1148u: goto label_3e1148;
        case 0x3e114cu: goto label_3e114c;
        case 0x3e1150u: goto label_3e1150;
        case 0x3e1154u: goto label_3e1154;
        case 0x3e1158u: goto label_3e1158;
        case 0x3e115cu: goto label_3e115c;
        case 0x3e1160u: goto label_3e1160;
        case 0x3e1164u: goto label_3e1164;
        case 0x3e1168u: goto label_3e1168;
        case 0x3e116cu: goto label_3e116c;
        case 0x3e1170u: goto label_3e1170;
        case 0x3e1174u: goto label_3e1174;
        case 0x3e1178u: goto label_3e1178;
        case 0x3e117cu: goto label_3e117c;
        case 0x3e1180u: goto label_3e1180;
        case 0x3e1184u: goto label_3e1184;
        case 0x3e1188u: goto label_3e1188;
        case 0x3e118cu: goto label_3e118c;
        case 0x3e1190u: goto label_3e1190;
        case 0x3e1194u: goto label_3e1194;
        case 0x3e1198u: goto label_3e1198;
        case 0x3e119cu: goto label_3e119c;
        case 0x3e11a0u: goto label_3e11a0;
        case 0x3e11a4u: goto label_3e11a4;
        case 0x3e11a8u: goto label_3e11a8;
        case 0x3e11acu: goto label_3e11ac;
        case 0x3e11b0u: goto label_3e11b0;
        case 0x3e11b4u: goto label_3e11b4;
        case 0x3e11b8u: goto label_3e11b8;
        case 0x3e11bcu: goto label_3e11bc;
        case 0x3e11c0u: goto label_3e11c0;
        case 0x3e11c4u: goto label_3e11c4;
        case 0x3e11c8u: goto label_3e11c8;
        case 0x3e11ccu: goto label_3e11cc;
        case 0x3e11d0u: goto label_3e11d0;
        case 0x3e11d4u: goto label_3e11d4;
        case 0x3e11d8u: goto label_3e11d8;
        case 0x3e11dcu: goto label_3e11dc;
        case 0x3e11e0u: goto label_3e11e0;
        case 0x3e11e4u: goto label_3e11e4;
        case 0x3e11e8u: goto label_3e11e8;
        case 0x3e11ecu: goto label_3e11ec;
        case 0x3e11f0u: goto label_3e11f0;
        case 0x3e11f4u: goto label_3e11f4;
        case 0x3e11f8u: goto label_3e11f8;
        case 0x3e11fcu: goto label_3e11fc;
        case 0x3e1200u: goto label_3e1200;
        case 0x3e1204u: goto label_3e1204;
        case 0x3e1208u: goto label_3e1208;
        case 0x3e120cu: goto label_3e120c;
        case 0x3e1210u: goto label_3e1210;
        case 0x3e1214u: goto label_3e1214;
        case 0x3e1218u: goto label_3e1218;
        case 0x3e121cu: goto label_3e121c;
        case 0x3e1220u: goto label_3e1220;
        case 0x3e1224u: goto label_3e1224;
        case 0x3e1228u: goto label_3e1228;
        case 0x3e122cu: goto label_3e122c;
        case 0x3e1230u: goto label_3e1230;
        case 0x3e1234u: goto label_3e1234;
        case 0x3e1238u: goto label_3e1238;
        case 0x3e123cu: goto label_3e123c;
        case 0x3e1240u: goto label_3e1240;
        case 0x3e1244u: goto label_3e1244;
        default: break;
    }

    ctx->pc = 0x3e0f50u;

label_3e0f50:
    // 0x3e0f50: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x3e0f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_3e0f54:
    // 0x3e0f54: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3e0f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_3e0f58:
    // 0x3e0f58: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3e0f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_3e0f5c:
    // 0x3e0f5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e0f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e0f60:
    // 0x3e0f60: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3e0f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_3e0f64:
    // 0x3e0f64: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x3e0f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_3e0f68:
    // 0x3e0f68: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3e0f68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e0f6c:
    // 0x3e0f6c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3e0f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_3e0f70:
    // 0x3e0f70: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x3e0f70u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
label_3e0f74:
    // 0x3e0f74: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3e0f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_3e0f78:
    // 0x3e0f78: 0x36b588ff  ori         $s5, $s5, 0x88FF
    ctx->pc = 0x3e0f78u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)35071);
label_3e0f7c:
    // 0x3e0f7c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3e0f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_3e0f80:
    // 0x3e0f80: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3e0f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3e0f84:
    // 0x3e0f84: 0xe7b80110  swc1        $f24, 0x110($sp)
    ctx->pc = 0x3e0f84u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_3e0f88:
    // 0x3e0f88: 0xe7b70108  swc1        $f23, 0x108($sp)
    ctx->pc = 0x3e0f88u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_3e0f8c:
    // 0x3e0f8c: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x3e0f8cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_3e0f90:
    // 0x3e0f90: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x3e0f90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_3e0f94:
    // 0x3e0f94: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x3e0f94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_3e0f98:
    // 0x3e0f98: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3e0f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3e0f9c:
    // 0x3e0f9c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e0f9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e0fa0:
    // 0x3e0fa0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e0fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e0fa4:
    // 0x3e0fa4: 0x40f809  jalr        $v0
label_3e0fa8:
    if (ctx->pc == 0x3E0FA8u) {
        ctx->pc = 0x3E0FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0FA4u;
        // 0x3e0fa8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0FACu;
        goto label_3e0fac;
    }
    ctx->pc = 0x3E0FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E0FACu);
        ctx->pc = 0x3E0FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0FA4u;
        // 0x3e0fa8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0FA4u, 0x3E0FACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E0FACu;
label_3e0fac:
    // 0x3e0fac: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3e0facu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0fb0:
    // 0x3e0fb0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e0fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e0fb4:
    // 0x3e0fb4: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x3e0fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
label_3e0fb8:
    // 0x3e0fb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e0fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e0fbc:
    // 0x3e0fbc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3e0fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3e0fc0:
    // 0x3e0fc0: 0xc0e858c  jal         func_3A1630
label_3e0fc4:
    if (ctx->pc == 0x3E0FC4u) {
        ctx->pc = 0x3E0FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0FC0u;
        // 0x3e0fc4: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0FC8u;
        goto label_3e0fc8;
    }
    ctx->pc = 0x3E0FC0u;
    SET_GPR_U32(ctx, 31, 0x3E0FC8u);
    ctx->pc = 0x3E0FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0FC0u;
    // 0x3e0fc4: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E0FC0u, 0x3E0FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0FC8u;
label_3e0fc8:
    // 0x3e0fc8: 0xae9500b0  sw          $s5, 0xB0($s4)
    ctx->pc = 0x3e0fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 21));
label_3e0fcc:
    // 0x3e0fcc: 0xc0ea146  jal         func_3A8518
label_3e0fd0:
    if (ctx->pc == 0x3E0FD0u) {
        ctx->pc = 0x3E0FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0FCCu;
        // 0x3e0fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0FD4u;
        goto label_3e0fd4;
    }
    ctx->pc = 0x3E0FCCu;
    SET_GPR_U32(ctx, 31, 0x3E0FD4u);
    ctx->pc = 0x3E0FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0FCCu;
    // 0x3e0fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E0FCCu, 0x3E0FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0FD4u;
label_3e0fd4:
    // 0x3e0fd4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e0fd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0fd8:
    // 0x3e0fd8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e0fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e0fdc:
    // 0x3e0fdc: 0xc0ea12a  jal         func_3A84A8
label_3e0fe0:
    if (ctx->pc == 0x3E0FE0u) {
        ctx->pc = 0x3E0FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0FDCu;
        // 0x3e0fe0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0FE4u;
        goto label_3e0fe4;
    }
    ctx->pc = 0x3E0FDCu;
    SET_GPR_U32(ctx, 31, 0x3E0FE4u);
    ctx->pc = 0x3E0FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0FDCu;
    // 0x3e0fe0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E0FDCu, 0x3E0FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0FE4u;
label_3e0fe4:
    // 0x3e0fe4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e0fe4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e0fe8:
    // 0x3e0fe8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e0fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e0fec:
    // 0x3e0fec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e0fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e0ff0:
    // 0x3e0ff0: 0xc0ea12a  jal         func_3A84A8
label_3e0ff4:
    if (ctx->pc == 0x3E0FF4u) {
        ctx->pc = 0x3E0FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0FF0u;
        // 0x3e0ff4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0FF8u;
        goto label_3e0ff8;
    }
    ctx->pc = 0x3E0FF0u;
    SET_GPR_U32(ctx, 31, 0x3E0FF8u);
    ctx->pc = 0x3E0FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0FF0u;
    // 0x3e0ff4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E0FF0u, 0x3E0FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0FF8u;
label_3e0ff8:
    // 0x3e0ff8: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3e0ff8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e0ffc:
    // 0x3e0ffc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3e0ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3e1000:
    // 0x3e1000: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x3e1000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3e1004:
    // 0x3e1004: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e1004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e1008:
    // 0x3e1008: 0xc1073cc  jal         func_41CF30
label_3e100c:
    if (ctx->pc == 0x3E100Cu) {
        ctx->pc = 0x3E100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1008u;
        // 0x3e100c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1010u;
        goto label_3e1010;
    }
    ctx->pc = 0x3E1008u;
    SET_GPR_U32(ctx, 31, 0x3E1010u);
    ctx->pc = 0x3E100Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1008u;
    // 0x3e100c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3E1008u, 0x3E1010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1010u;
label_3e1010:
    // 0x3e1010: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e1010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3e1014:
    // 0x3e1014: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3e1018:
    if (ctx->pc == 0x3E1018u) {
        ctx->pc = 0x3E1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1014u;
        // 0x3e1018: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E101Cu;
        goto label_3e101c;
    }
    ctx->pc = 0x3E1014u;
    {
        const bool branch_taken_0x3e1014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1014u;
        // 0x3e1018: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1014) {
            ctx->pc = 0x3E1034u;
            goto label_3e1034;
        }
    }
    ctx->pc = 0x3E101Cu;
label_3e101c:
    // 0x3e101c: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x3e101cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_3e1020:
    // 0x3e1020: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x3e1020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
label_3e1024:
    // 0x3e1024: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e1024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3e1028:
    // 0x3e1028: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3e1028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3e102c:
    // 0x3e102c: 0xae830054  sw          $v1, 0x54($s4)
    ctx->pc = 0x3e102cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
label_3e1030:
    // 0x3e1030: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e1030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e1034:
    // 0x3e1034: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e1034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e1038:
    // 0x3e1038: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x3e1038u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
label_3e103c:
    // 0x3e103c: 0xc0e858c  jal         func_3A1630
label_3e1040:
    if (ctx->pc == 0x3E1040u) {
        ctx->pc = 0x3E1040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E103Cu;
        // 0x3e1040: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1044u;
        goto label_3e1044;
    }
    ctx->pc = 0x3E103Cu;
    SET_GPR_U32(ctx, 31, 0x3E1044u);
    ctx->pc = 0x3E1040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E103Cu;
    // 0x3e1040: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E103Cu, 0x3E1044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1044u;
label_3e1044:
    // 0x3e1044: 0x3c01c060  lui         $at, 0xC060
    ctx->pc = 0x3e1044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49248 << 16));
label_3e1048:
    // 0x3e1048: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3e1048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3e104c:
    // 0x3e104c: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x3e104cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
label_3e1050:
    // 0x3e1050: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3e1050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3e1054:
    // 0x3e1054: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3e1054u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3e1058:
    // 0x3e1058: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3e1058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3e105c:
    // 0x3e105c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3e105cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3e1060:
    // 0x3e1060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e1060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e1064:
    // 0x3e1064: 0xc0cd518  jal         func_335460
label_3e1068:
    if (ctx->pc == 0x3E1068u) {
        ctx->pc = 0x3E1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1064u;
        // 0x3e1068: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E106Cu;
        goto label_3e106c;
    }
    ctx->pc = 0x3E1064u;
    SET_GPR_U32(ctx, 31, 0x3E106Cu);
    ctx->pc = 0x3E1068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1064u;
    // 0x3e1068: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E1064u, 0x3E106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E106Cu;
label_3e106c:
    // 0x3e106c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e106cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3e1070:
    // 0x3e1070: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3e1070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3e1074:
    // 0x3e1074: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3e1074u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3e1078:
    // 0x3e1078: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3e1078u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3e107c:
    // 0x3e107c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e107cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e1080:
    // 0x3e1080: 0xc0cd518  jal         func_335460
label_3e1084:
    if (ctx->pc == 0x3E1084u) {
        ctx->pc = 0x3E1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1080u;
        // 0x3e1084: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1088u;
        goto label_3e1088;
    }
    ctx->pc = 0x3E1080u;
    SET_GPR_U32(ctx, 31, 0x3E1088u);
    ctx->pc = 0x3E1084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1080u;
    // 0x3e1084: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E1080u, 0x3E1088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1088u;
label_3e1088:
    // 0x3e1088: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3e1088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3e108c:
    // 0x3e108c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3e108cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3e1090:
    // 0x3e1090: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3e1090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3e1094:
    // 0x3e1094: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e1094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e1098:
    // 0x3e1098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e1098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e109c:
    // 0x3e109c: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3e109cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_3e10a0:
    // 0x3e10a0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3e10a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3e10a4:
    // 0x3e10a4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3e10a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3e10a8:
    // 0x3e10a8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3e10a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3e10ac:
    // 0x3e10ac: 0xc0cd518  jal         func_335460
label_3e10b0:
    if (ctx->pc == 0x3E10B0u) {
        ctx->pc = 0x3E10B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E10ACu;
        // 0x3e10b0: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E10B4u;
        goto label_3e10b4;
    }
    ctx->pc = 0x3E10ACu;
    SET_GPR_U32(ctx, 31, 0x3E10B4u);
    ctx->pc = 0x3E10B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E10ACu;
    // 0x3e10b0: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E10ACu, 0x3E10B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E10B4u;
label_3e10b4:
    // 0x3e10b4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x3e10b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3e10b8:
    // 0x3e10b8: 0xe7b70030  swc1        $f23, 0x30($sp)
    ctx->pc = 0x3e10b8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3e10bc:
    // 0x3e10bc: 0xe7b60034  swc1        $f22, 0x34($sp)
    ctx->pc = 0x3e10bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3e10c0:
    // 0x3e10c0: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x3e10c0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_3e10c4:
    // 0x3e10c4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3e10c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3e10c8:
    // 0x3e10c8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3e10c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3e10cc:
    // 0x3e10cc: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x3e10ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3e10d0:
    // 0x3e10d0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3e10d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3e10d4:
    // 0x3e10d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e10d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e10d8:
    // 0x3e10d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e10d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e10dc:
    // 0x3e10dc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3e10dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e10e0:
    // 0x3e10e0: 0x7e820030  sq          $v0, 0x30($s4)
    ctx->pc = 0x3e10e0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), GPR_VEC(ctx, 2));
label_3e10e4:
    // 0x3e10e4: 0xc0cd55c  jal         func_335570
label_3e10e8:
    if (ctx->pc == 0x3E10E8u) {
        ctx->pc = 0x3E10E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E10E4u;
        // 0x3e10e8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E10ECu;
        goto label_3e10ec;
    }
    ctx->pc = 0x3E10E4u;
    SET_GPR_U32(ctx, 31, 0x3E10ECu);
    ctx->pc = 0x3E10E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E10E4u;
    // 0x3e10e8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x3E10E4u, 0x3E10ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E10ECu;
label_3e10ec:
    // 0x3e10ec: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x3e10ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3e10f0:
    // 0x3e10f0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x3e10f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3e10f4:
    // 0x3e10f4: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x3e10f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3e10f8:
    // 0x3e10f8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3e10f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3e10fc:
    // 0x3e10fc: 0xe6380008  swc1        $f24, 0x8($s1)
    ctx->pc = 0x3e10fcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3e1100:
    // 0x3e1100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e1100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e1104:
    // 0x3e1104: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3e1104u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3e1108:
    // 0x3e1108: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3e1108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e110c:
    // 0x3e110c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3e110cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e1110:
    // 0x3e1110: 0xc136afa  jal         func_4DABE8
label_3e1114:
    if (ctx->pc == 0x3E1114u) {
        ctx->pc = 0x3E1114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1110u;
        // 0x3e1114: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1118u;
        goto label_3e1118;
    }
    ctx->pc = 0x3E1110u;
    SET_GPR_U32(ctx, 31, 0x3E1118u);
    ctx->pc = 0x3E1114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1110u;
    // 0x3e1114: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3E1110u, 0x3E1118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1118u;
label_3e1118:
    // 0x3e1118: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x3e1118u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e111c:
    // 0x3e111c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3e111cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3e1120:
    // 0x3e1120: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e1120u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e1124:
    // 0x3e1124: 0x34a50029  ori         $a1, $a1, 0x29
    ctx->pc = 0x3e1124u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)41);
label_3e1128:
    // 0x3e1128: 0x7e830020  sq          $v1, 0x20($s4)
    ctx->pc = 0x3e1128u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 3));
label_3e112c:
    // 0x3e112c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e112cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e1130:
    // 0x3e1130: 0xae9200c4  sw          $s2, 0xC4($s4)
    ctx->pc = 0x3e1130u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 18));
label_3e1134:
    // 0x3e1134: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x3e1134u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
label_3e1138:
    // 0x3e1138: 0xc0e9404  jal         func_3A5010
label_3e113c:
    if (ctx->pc == 0x3E113Cu) {
        ctx->pc = 0x3E113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1138u;
        // 0x3e113c: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1140u;
        goto label_3e1140;
    }
    ctx->pc = 0x3E1138u;
    SET_GPR_U32(ctx, 31, 0x3E1140u);
    ctx->pc = 0x3E113Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1138u;
    // 0x3e113c: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3E1138u, 0x3E1140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1140u;
label_3e1140:
    // 0x3e1140: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x3e1140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_3e1144:
    // 0x3e1144: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3e1144u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3e1148:
    // 0x3e1148: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e1148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e114c:
    // 0x3e114c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x3e114cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_3e1150:
    // 0x3e1150: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3e1150u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3e1154:
    // 0x3e1154: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3e1154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3e1158:
    // 0x3e1158: 0xc0cd518  jal         func_335460
label_3e115c:
    if (ctx->pc == 0x3E115Cu) {
        ctx->pc = 0x3E115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1158u;
        // 0x3e115c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1160u;
        goto label_3e1160;
    }
    ctx->pc = 0x3E1158u;
    SET_GPR_U32(ctx, 31, 0x3E1160u);
    ctx->pc = 0x3E115Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1158u;
    // 0x3e115c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E1158u, 0x3E1160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1160u;
label_3e1160:
    // 0x3e1160: 0xe68000c0  swc1        $f0, 0xC0($s4)
    ctx->pc = 0x3e1160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 192), bits); }
label_3e1164:
    // 0x3e1164: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3e1164u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3e1168:
    // 0x3e1168: 0xe68000bc  swc1        $f0, 0xBC($s4)
    ctx->pc = 0x3e1168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 188), bits); }
label_3e116c:
    // 0x3e116c: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x3e116cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3e1170:
    // 0x3e1170: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x3e1170u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_3e1174:
    // 0x3e1174: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3e1174u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3e1178:
    // 0x3e1178: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3e1178u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_3e117c:
    // 0x3e117c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e117cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e1180:
    // 0x3e1180: 0xc0cd55c  jal         func_335570
label_3e1184:
    if (ctx->pc == 0x3E1184u) {
        ctx->pc = 0x3E1184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1180u;
        // 0x3e1184: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1188u;
        goto label_3e1188;
    }
    ctx->pc = 0x3E1180u;
    SET_GPR_U32(ctx, 31, 0x3E1188u);
    ctx->pc = 0x3E1184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1180u;
    // 0x3e1184: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x3E1180u, 0x3E1188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1188u;
label_3e1188:
    // 0x3e1188: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x3e1188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3e118c:
    // 0x3e118c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3e118cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3e1190:
    // 0x3e1190: 0xe6180008  swc1        $f24, 0x8($s0)
    ctx->pc = 0x3e1190u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3e1194:
    // 0x3e1194: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e1194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e1198:
    // 0x3e1198: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3e1198u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3e119c:
    // 0x3e119c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e119cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e11a0:
    // 0x3e11a0: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x3e11a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3e11a4:
    // 0x3e11a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e11a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e11a8:
    // 0x3e11a8: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3e11a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e11ac:
    // 0x3e11ac: 0xc136afa  jal         func_4DABE8
label_3e11b0:
    if (ctx->pc == 0x3E11B0u) {
        ctx->pc = 0x3E11B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E11ACu;
        // 0x3e11b0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E11B4u;
        goto label_3e11b4;
    }
    ctx->pc = 0x3E11ACu;
    SET_GPR_U32(ctx, 31, 0x3E11B4u);
    ctx->pc = 0x3E11B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E11ACu;
    // 0x3e11b0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3E11ACu, 0x3E11B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E11B4u;
label_3e11b4:
    // 0x3e11b4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3e11b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e11b8:
    // 0x3e11b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e11b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e11bc:
    // 0x3e11bc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3e11bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3e11c0:
    // 0x3e11c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e11c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e11c4:
    // 0x3e11c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3e11c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e11c8:
    // 0x3e11c8: 0xc136b24  jal         func_4DAC90
label_3e11cc:
    if (ctx->pc == 0x3E11CCu) {
        ctx->pc = 0x3E11CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E11C8u;
        // 0x3e11cc: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E11D0u;
        goto label_3e11d0;
    }
    ctx->pc = 0x3E11C8u;
    SET_GPR_U32(ctx, 31, 0x3E11D0u);
    ctx->pc = 0x3E11CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E11C8u;
    // 0x3e11cc: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3E11C8u, 0x3E11D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E11D0u;
label_3e11d0:
    // 0x3e11d0: 0xc68100bc  lwc1        $f1, 0xBC($s4)
    ctx->pc = 0x3e11d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e11d4:
    // 0x3e11d4: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x3e11d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
label_3e11d8:
    // 0x3e11d8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3e11d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3e11dc:
    // 0x3e11dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e11dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e11e0:
    // 0x3e11e0: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3e11e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e11e4:
    // 0x3e11e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3e11e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e11e8:
    // 0x3e11e8: 0x7e820040  sq          $v0, 0x40($s4)
    ctx->pc = 0x3e11e8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 64), GPR_VEC(ctx, 2));
label_3e11ec:
    // 0x3e11ec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3e11f0:
    if (ctx->pc == 0x3E11F0u) {
        ctx->pc = 0x3E11F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E11ECu;
        // 0x3e11f0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E11F4u;
        goto label_3e11f4;
    }
    ctx->pc = 0x3E11ECu;
    {
        const bool branch_taken_0x3e11ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E11F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E11ECu;
        // 0x3e11f0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e11ec) {
            ctx->pc = 0x3E11FCu;
            goto label_3e11fc;
        }
    }
    ctx->pc = 0x3E11F4u;
label_3e11f4:
    // 0x3e11f4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3e11f8:
    if (ctx->pc == 0x3E11F8u) {
        ctx->pc = 0x3E11F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E11F4u;
        // 0x3e11f8: 0xae9500b4  sw          $s5, 0xB4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E11FCu;
        goto label_3e11fc;
    }
    ctx->pc = 0x3E11F4u;
    {
        const bool branch_taken_0x3e11f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E11F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E11F4u;
        // 0x3e11f8: 0xae9500b4  sw          $s5, 0xB4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e11f4) {
            ctx->pc = 0x3E1208u;
            goto label_3e1208;
        }
    }
    ctx->pc = 0x3E11FCu;
label_3e11fc:
    // 0x3e11fc: 0x3c02caca  lui         $v0, 0xCACA
    ctx->pc = 0x3e11fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51914 << 16));
label_3e1200:
    // 0x3e1200: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e1200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3e1204:
    // 0x3e1204: 0xae8200b4  sw          $v0, 0xB4($s4)
    ctx->pc = 0x3e1204u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 2));
label_3e1208:
    // 0x3e1208: 0xaec0000c  sw          $zero, 0xC($s6)
    ctx->pc = 0x3e1208u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 0));
label_3e120c:
    // 0x3e120c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3e120cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3e1210:
    // 0x3e1210: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3e1210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3e1214:
    // 0x3e1214: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3e1214u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3e1218:
    // 0x3e1218: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3e1218u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3e121c:
    // 0x3e121c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3e121cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3e1220:
    // 0x3e1220: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x3e1220u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3e1224:
    // 0x3e1224: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3e1224u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3e1228:
    // 0x3e1228: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3e1228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3e122c:
    // 0x3e122c: 0xc7b80110  lwc1        $f24, 0x110($sp)
    ctx->pc = 0x3e122cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3e1230:
    // 0x3e1230: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x3e1230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3e1234:
    // 0x3e1234: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x3e1234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3e1238:
    // 0x3e1238: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x3e1238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3e123c:
    // 0x3e123c: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x3e123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e1240:
    // 0x3e1240: 0x3e00008  jr          $ra
label_3e1244:
    if (ctx->pc == 0x3E1244u) {
        ctx->pc = 0x3E1244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1240u;
        // 0x3e1244: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1248u;
        goto label_fallthrough_0x3e1240;
    }
    ctx->pc = 0x3E1240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1240u;
        // 0x3e1244: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e1240:
    ctx->pc = 0x3E1248u;
}
