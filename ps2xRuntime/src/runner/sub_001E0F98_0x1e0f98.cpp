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

// Function: sub_001E0F98
// Address: 0x1e0f98 - 0x1e12a0
void sub_001E0F98_0x1e0f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0F98_0x1e0f98");
#endif

    switch (ctx->pc) {
        case 0x1e0f98u: goto label_1e0f98;
        case 0x1e0f9cu: goto label_1e0f9c;
        case 0x1e0fa0u: goto label_1e0fa0;
        case 0x1e0fa4u: goto label_1e0fa4;
        case 0x1e0fa8u: goto label_1e0fa8;
        case 0x1e0facu: goto label_1e0fac;
        case 0x1e0fb0u: goto label_1e0fb0;
        case 0x1e0fb4u: goto label_1e0fb4;
        case 0x1e0fb8u: goto label_1e0fb8;
        case 0x1e0fbcu: goto label_1e0fbc;
        case 0x1e0fc0u: goto label_1e0fc0;
        case 0x1e0fc4u: goto label_1e0fc4;
        case 0x1e0fc8u: goto label_1e0fc8;
        case 0x1e0fccu: goto label_1e0fcc;
        case 0x1e0fd0u: goto label_1e0fd0;
        case 0x1e0fd4u: goto label_1e0fd4;
        case 0x1e0fd8u: goto label_1e0fd8;
        case 0x1e0fdcu: goto label_1e0fdc;
        case 0x1e0fe0u: goto label_1e0fe0;
        case 0x1e0fe4u: goto label_1e0fe4;
        case 0x1e0fe8u: goto label_1e0fe8;
        case 0x1e0fecu: goto label_1e0fec;
        case 0x1e0ff0u: goto label_1e0ff0;
        case 0x1e0ff4u: goto label_1e0ff4;
        case 0x1e0ff8u: goto label_1e0ff8;
        case 0x1e0ffcu: goto label_1e0ffc;
        case 0x1e1000u: goto label_1e1000;
        case 0x1e1004u: goto label_1e1004;
        case 0x1e1008u: goto label_1e1008;
        case 0x1e100cu: goto label_1e100c;
        case 0x1e1010u: goto label_1e1010;
        case 0x1e1014u: goto label_1e1014;
        case 0x1e1018u: goto label_1e1018;
        case 0x1e101cu: goto label_1e101c;
        case 0x1e1020u: goto label_1e1020;
        case 0x1e1024u: goto label_1e1024;
        case 0x1e1028u: goto label_1e1028;
        case 0x1e102cu: goto label_1e102c;
        case 0x1e1030u: goto label_1e1030;
        case 0x1e1034u: goto label_1e1034;
        case 0x1e1038u: goto label_1e1038;
        case 0x1e103cu: goto label_1e103c;
        case 0x1e1040u: goto label_1e1040;
        case 0x1e1044u: goto label_1e1044;
        case 0x1e1048u: goto label_1e1048;
        case 0x1e104cu: goto label_1e104c;
        case 0x1e1050u: goto label_1e1050;
        case 0x1e1054u: goto label_1e1054;
        case 0x1e1058u: goto label_1e1058;
        case 0x1e105cu: goto label_1e105c;
        case 0x1e1060u: goto label_1e1060;
        case 0x1e1064u: goto label_1e1064;
        case 0x1e1068u: goto label_1e1068;
        case 0x1e106cu: goto label_1e106c;
        case 0x1e1070u: goto label_1e1070;
        case 0x1e1074u: goto label_1e1074;
        case 0x1e1078u: goto label_1e1078;
        case 0x1e107cu: goto label_1e107c;
        case 0x1e1080u: goto label_1e1080;
        case 0x1e1084u: goto label_1e1084;
        case 0x1e1088u: goto label_1e1088;
        case 0x1e108cu: goto label_1e108c;
        case 0x1e1090u: goto label_1e1090;
        case 0x1e1094u: goto label_1e1094;
        case 0x1e1098u: goto label_1e1098;
        case 0x1e109cu: goto label_1e109c;
        case 0x1e10a0u: goto label_1e10a0;
        case 0x1e10a4u: goto label_1e10a4;
        case 0x1e10a8u: goto label_1e10a8;
        case 0x1e10acu: goto label_1e10ac;
        case 0x1e10b0u: goto label_1e10b0;
        case 0x1e10b4u: goto label_1e10b4;
        case 0x1e10b8u: goto label_1e10b8;
        case 0x1e10bcu: goto label_1e10bc;
        case 0x1e10c0u: goto label_1e10c0;
        case 0x1e10c4u: goto label_1e10c4;
        case 0x1e10c8u: goto label_1e10c8;
        case 0x1e10ccu: goto label_1e10cc;
        case 0x1e10d0u: goto label_1e10d0;
        case 0x1e10d4u: goto label_1e10d4;
        case 0x1e10d8u: goto label_1e10d8;
        case 0x1e10dcu: goto label_1e10dc;
        case 0x1e10e0u: goto label_1e10e0;
        case 0x1e10e4u: goto label_1e10e4;
        case 0x1e10e8u: goto label_1e10e8;
        case 0x1e10ecu: goto label_1e10ec;
        case 0x1e10f0u: goto label_1e10f0;
        case 0x1e10f4u: goto label_1e10f4;
        case 0x1e10f8u: goto label_1e10f8;
        case 0x1e10fcu: goto label_1e10fc;
        case 0x1e1100u: goto label_1e1100;
        case 0x1e1104u: goto label_1e1104;
        case 0x1e1108u: goto label_1e1108;
        case 0x1e110cu: goto label_1e110c;
        case 0x1e1110u: goto label_1e1110;
        case 0x1e1114u: goto label_1e1114;
        case 0x1e1118u: goto label_1e1118;
        case 0x1e111cu: goto label_1e111c;
        case 0x1e1120u: goto label_1e1120;
        case 0x1e1124u: goto label_1e1124;
        case 0x1e1128u: goto label_1e1128;
        case 0x1e112cu: goto label_1e112c;
        case 0x1e1130u: goto label_1e1130;
        case 0x1e1134u: goto label_1e1134;
        case 0x1e1138u: goto label_1e1138;
        case 0x1e113cu: goto label_1e113c;
        case 0x1e1140u: goto label_1e1140;
        case 0x1e1144u: goto label_1e1144;
        case 0x1e1148u: goto label_1e1148;
        case 0x1e114cu: goto label_1e114c;
        case 0x1e1150u: goto label_1e1150;
        case 0x1e1154u: goto label_1e1154;
        case 0x1e1158u: goto label_1e1158;
        case 0x1e115cu: goto label_1e115c;
        case 0x1e1160u: goto label_1e1160;
        case 0x1e1164u: goto label_1e1164;
        case 0x1e1168u: goto label_1e1168;
        case 0x1e116cu: goto label_1e116c;
        case 0x1e1170u: goto label_1e1170;
        case 0x1e1174u: goto label_1e1174;
        case 0x1e1178u: goto label_1e1178;
        case 0x1e117cu: goto label_1e117c;
        case 0x1e1180u: goto label_1e1180;
        case 0x1e1184u: goto label_1e1184;
        case 0x1e1188u: goto label_1e1188;
        case 0x1e118cu: goto label_1e118c;
        case 0x1e1190u: goto label_1e1190;
        case 0x1e1194u: goto label_1e1194;
        case 0x1e1198u: goto label_1e1198;
        case 0x1e119cu: goto label_1e119c;
        case 0x1e11a0u: goto label_1e11a0;
        case 0x1e11a4u: goto label_1e11a4;
        case 0x1e11a8u: goto label_1e11a8;
        case 0x1e11acu: goto label_1e11ac;
        case 0x1e11b0u: goto label_1e11b0;
        case 0x1e11b4u: goto label_1e11b4;
        case 0x1e11b8u: goto label_1e11b8;
        case 0x1e11bcu: goto label_1e11bc;
        case 0x1e11c0u: goto label_1e11c0;
        case 0x1e11c4u: goto label_1e11c4;
        case 0x1e11c8u: goto label_1e11c8;
        case 0x1e11ccu: goto label_1e11cc;
        case 0x1e11d0u: goto label_1e11d0;
        case 0x1e11d4u: goto label_1e11d4;
        case 0x1e11d8u: goto label_1e11d8;
        case 0x1e11dcu: goto label_1e11dc;
        case 0x1e11e0u: goto label_1e11e0;
        case 0x1e11e4u: goto label_1e11e4;
        case 0x1e11e8u: goto label_1e11e8;
        case 0x1e11ecu: goto label_1e11ec;
        case 0x1e11f0u: goto label_1e11f0;
        case 0x1e11f4u: goto label_1e11f4;
        case 0x1e11f8u: goto label_1e11f8;
        case 0x1e11fcu: goto label_1e11fc;
        case 0x1e1200u: goto label_1e1200;
        case 0x1e1204u: goto label_1e1204;
        case 0x1e1208u: goto label_1e1208;
        case 0x1e120cu: goto label_1e120c;
        case 0x1e1210u: goto label_1e1210;
        case 0x1e1214u: goto label_1e1214;
        case 0x1e1218u: goto label_1e1218;
        case 0x1e121cu: goto label_1e121c;
        case 0x1e1220u: goto label_1e1220;
        case 0x1e1224u: goto label_1e1224;
        case 0x1e1228u: goto label_1e1228;
        case 0x1e122cu: goto label_1e122c;
        case 0x1e1230u: goto label_1e1230;
        case 0x1e1234u: goto label_1e1234;
        case 0x1e1238u: goto label_1e1238;
        case 0x1e123cu: goto label_1e123c;
        case 0x1e1240u: goto label_1e1240;
        case 0x1e1244u: goto label_1e1244;
        case 0x1e1248u: goto label_1e1248;
        case 0x1e124cu: goto label_1e124c;
        case 0x1e1250u: goto label_1e1250;
        case 0x1e1254u: goto label_1e1254;
        case 0x1e1258u: goto label_1e1258;
        case 0x1e125cu: goto label_1e125c;
        case 0x1e1260u: goto label_1e1260;
        case 0x1e1264u: goto label_1e1264;
        case 0x1e1268u: goto label_1e1268;
        case 0x1e126cu: goto label_1e126c;
        case 0x1e1270u: goto label_1e1270;
        case 0x1e1274u: goto label_1e1274;
        case 0x1e1278u: goto label_1e1278;
        case 0x1e127cu: goto label_1e127c;
        case 0x1e1280u: goto label_1e1280;
        case 0x1e1284u: goto label_1e1284;
        case 0x1e1288u: goto label_1e1288;
        case 0x1e128cu: goto label_1e128c;
        case 0x1e1290u: goto label_1e1290;
        case 0x1e1294u: goto label_1e1294;
        case 0x1e1298u: goto label_1e1298;
        case 0x1e129cu: goto label_1e129c;
        default: break;
    }

    ctx->pc = 0x1e0f98u;

label_1e0f98:
    // 0x1e0f98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e0f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e0f9c:
    // 0x1e0f9c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e0f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1e0fa0:
    // 0x1e0fa0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e0fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e0fa4:
    // 0x1e0fa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e0fa8:
    // 0x1e0fa8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e0fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e0fac:
    // 0x1e0fac: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1e0facu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1e0fb0:
    // 0x1e0fb0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1e0fb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1e0fb4:
    // 0x1e0fb4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e0fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e0fb8:
    // 0x1e0fb8: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1e0fb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1e0fbc:
    // 0x1e0fbc: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1e0fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1e0fc0:
    // 0x1e0fc0: 0x40f809  jalr        $v0
label_1e0fc4:
    if (ctx->pc == 0x1E0FC4u) {
        ctx->pc = 0x1E0FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FC0u;
        // 0x1e0fc4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0FC8u;
        goto label_1e0fc8;
    }
    ctx->pc = 0x1E0FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E0FC8u);
        ctx->pc = 0x1E0FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FC0u;
        // 0x1e0fc4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0FC0u, 0x1E0FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0FC8u;
label_1e0fc8:
    // 0x1e0fc8: 0x504000ae  beql        $v0, $zero, . + 4 + (0xAE << 2)
label_1e0fcc:
    if (ctx->pc == 0x1E0FCCu) {
        ctx->pc = 0x1E0FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FC8u;
        // 0x1e0fcc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0FD0u;
        goto label_1e0fd0;
    }
    ctx->pc = 0x1E0FC8u;
    {
        const bool branch_taken_0x1e0fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0fc8) {
            ctx->pc = 0x1E0FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0FC8u;
            // 0x1e0fcc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1284u;
            goto label_1e1284;
        }
    }
    ctx->pc = 0x1E0FD0u;
label_1e0fd0:
    // 0x1e0fd0: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x1e0fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1e0fd4:
    // 0x1e0fd4: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_1e0fd8:
    if (ctx->pc == 0x1E0FD8u) {
        ctx->pc = 0x1E0FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FD4u;
        // 0x1e0fd8: 0x8e020064  lw          $v0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0FDCu;
        goto label_1e0fdc;
    }
    ctx->pc = 0x1E0FD4u;
    {
        const bool branch_taken_0x1e0fd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0fd4) {
            ctx->pc = 0x1E0FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0FD4u;
            // 0x1e0fd8: 0x8e020064  lw          $v0, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0FF4u;
            goto label_1e0ff4;
        }
    }
    ctx->pc = 0x1E0FDCu;
label_1e0fdc:
    // 0x1e0fdc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e0fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e0fe0:
    // 0x1e0fe0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1e0fe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1e0fe4:
    // 0x1e0fe4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1e0fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1e0fe8:
    // 0x1e0fe8: 0x60f809  jalr        $v1
label_1e0fec:
    if (ctx->pc == 0x1E0FECu) {
        ctx->pc = 0x1E0FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FE8u;
        // 0x1e0fec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0FF0u;
        goto label_1e0ff0;
    }
    ctx->pc = 0x1E0FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E0FF0u);
        ctx->pc = 0x1E0FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FE8u;
        // 0x1e0fec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0FE8u, 0x1E0FF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0FF0u;
label_1e0ff0:
    // 0x1e0ff0: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1e0ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_1e0ff4:
    // 0x1e0ff4: 0x504000a3  beql        $v0, $zero, . + 4 + (0xA3 << 2)
label_1e0ff8:
    if (ctx->pc == 0x1E0FF8u) {
        ctx->pc = 0x1E0FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FF4u;
        // 0x1e0ff8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0FFCu;
        goto label_1e0ffc;
    }
    ctx->pc = 0x1E0FF4u;
    {
        const bool branch_taken_0x1e0ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0ff4) {
            ctx->pc = 0x1E0FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0FF4u;
            // 0x1e0ff8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1284u;
            goto label_1e1284;
        }
    }
    ctx->pc = 0x1E0FFCu;
label_1e0ffc:
    // 0x1e0ffc: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x1e0ffcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_1e1000:
    // 0x1e1000: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x1e1000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1e1004:
    // 0x1e1004: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1e1008:
    if (ctx->pc == 0x1E1008u) {
        ctx->pc = 0x1E1008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1004u;
        // 0x1e1008: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E100Cu;
        goto label_1e100c;
    }
    ctx->pc = 0x1E1004u;
    {
        const bool branch_taken_0x1e1004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1004u;
        // 0x1e1008: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1004) {
            ctx->pc = 0x1E106Cu;
            goto label_1e106c;
        }
    }
    ctx->pc = 0x1E100Cu;
label_1e100c:
    // 0x1e100c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e100cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e1010:
    // 0x1e1010: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x1e1010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1e1014:
    // 0x1e1014: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e1014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1e1018:
    // 0x1e1018: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1e1018u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1e101c:
    // 0x1e101c: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1e101cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_1e1020:
    // 0x1e1020: 0x40f809  jalr        $v0
label_1e1024:
    if (ctx->pc == 0x1E1024u) {
        ctx->pc = 0x1E1024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1020u;
        // 0x1e1024: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1028u;
        goto label_1e1028;
    }
    ctx->pc = 0x1E1020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E1028u);
        ctx->pc = 0x1E1024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1020u;
        // 0x1e1024: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1020u, 0x1E1028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1028u;
label_1e1028:
    // 0x1e1028: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1e1028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1e102c:
    // 0x1e102c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e102cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1e1030:
    // 0x1e1030: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1e1030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e1034:
    // 0x1e1034: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e1034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e1038:
    // 0x1e1038: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1e1038u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1e103c:
    // 0x1e103c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1e103cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1e1040:
    // 0x1e1040: 0x60f809  jalr        $v1
label_1e1044:
    if (ctx->pc == 0x1E1044u) {
        ctx->pc = 0x1E1044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1040u;
        // 0x1e1044: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1048u;
        goto label_1e1048;
    }
    ctx->pc = 0x1E1040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E1048u);
        ctx->pc = 0x1E1044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1040u;
        // 0x1e1044: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1040u, 0x1E1048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1048u;
label_1e1048:
    // 0x1e1048: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1e1048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1e104c:
    // 0x1e104c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e104cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e1050:
    // 0x1e1050: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1e1050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e1054:
    // 0x1e1054: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x1e1054u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[20]); }
label_1e1058:
    // 0x1e1058: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1e1058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e105c:
    // 0x1e105c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1e105cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1e1060:
    // 0x1e1060: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e1060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1e1064:
    // 0x1e1064: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1e1068:
    if (ctx->pc == 0x1E1068u) {
        ctx->pc = 0x1E1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1064u;
        // 0x1e1068: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E106Cu;
        goto label_1e106c;
    }
    ctx->pc = 0x1E1064u;
    {
        const bool branch_taken_0x1e1064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1064u;
        // 0x1e1068: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1064) {
            ctx->pc = 0x1E10D4u;
            goto label_1e10d4;
        }
    }
    ctx->pc = 0x1E106Cu;
label_1e106c:
    // 0x1e106c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e106cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e1070:
    // 0x1e1070: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x1e1070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1e1074:
    // 0x1e1074: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e1074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1e1078:
    // 0x1e1078: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1e1078u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1e107c:
    // 0x1e107c: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1e107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_1e1080:
    // 0x1e1080: 0x40f809  jalr        $v0
label_1e1084:
    if (ctx->pc == 0x1E1084u) {
        ctx->pc = 0x1E1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1080u;
        // 0x1e1084: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1088u;
        goto label_1e1088;
    }
    ctx->pc = 0x1E1080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E1088u);
        ctx->pc = 0x1E1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1080u;
        // 0x1e1084: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1080u, 0x1E1088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1088u;
label_1e1088:
    // 0x1e1088: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1e1088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1e108c:
    // 0x1e108c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e108cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1e1090:
    // 0x1e1090: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1e1090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e1094:
    // 0x1e1094: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e1094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e1098:
    // 0x1e1098: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1e1098u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1e109c:
    // 0x1e109c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1e109cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1e10a0:
    // 0x1e10a0: 0x60f809  jalr        $v1
label_1e10a4:
    if (ctx->pc == 0x1E10A4u) {
        ctx->pc = 0x1E10A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E10A0u;
        // 0x1e10a4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E10A8u;
        goto label_1e10a8;
    }
    ctx->pc = 0x1E10A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E10A8u);
        ctx->pc = 0x1E10A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E10A0u;
        // 0x1e10a4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E10A0u, 0x1E10A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E10A8u;
label_1e10a8:
    // 0x1e10a8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1e10a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1e10ac:
    // 0x1e10ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e10acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e10b0:
    // 0x1e10b0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1e10b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e10b4:
    // 0x1e10b4: 0x46141083  div.s       $f2, $f2, $f20
    ctx->pc = 0x1e10b4u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[20]); }
label_1e10b8:
    // 0x1e10b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e10b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1e10bc:
    // 0x1e10bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e10bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1e10c0:
    // 0x1e10c0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1e10c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e10c4:
    // 0x1e10c4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1e10c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1e10c8:
    // 0x1e10c8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1e10c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1e10cc:
    // 0x1e10cc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e10ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e10d0:
    // 0x1e10d0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1e10d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1e10d4:
    // 0x1e10d4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1e10d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e10d8:
    // 0x1e10d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e10d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e10dc:
    // 0x1e10dc: 0xc601007c  lwc1        $f1, 0x7C($s0)
    ctx->pc = 0x1e10dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e10e0:
    // 0x1e10e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e10e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e10e4:
    // 0x1e10e4: 0x8e070064  lw          $a3, 0x64($s0)
    ctx->pc = 0x1e10e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_1e10e8:
    // 0x1e10e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e10e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e10ec:
    // 0x1e10ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e10ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e10f0:
    // 0x1e10f0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1e10f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1e10f4:
    // 0x1e10f4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1e10f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1e10f8:
    // 0x1e10f8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1e10f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1e10fc:
    // 0x1e10fc: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1e10fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1e1100:
    // 0x1e1100: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1e1100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1e1104:
    // 0x1e1104: 0x60f809  jalr        $v1
label_1e1108:
    if (ctx->pc == 0x1E1108u) {
        ctx->pc = 0x1E1108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1104u;
        // 0x1e1108: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E110Cu;
        goto label_1e110c;
    }
    ctx->pc = 0x1E1104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E110Cu);
        ctx->pc = 0x1E1108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1104u;
        // 0x1e1108: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1104u, 0x1E110Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E110Cu;
label_1e110c:
    // 0x1e110c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e110cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e1110:
    // 0x1e1110: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1e1110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1e1114:
    // 0x1e1114: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e1114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e1118:
    // 0x1e1118: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1e1118u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1e111c:
    // 0x1e111c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1e111cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1e1120:
    // 0x1e1120: 0x40f809  jalr        $v0
label_1e1124:
    if (ctx->pc == 0x1E1124u) {
        ctx->pc = 0x1E1124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1120u;
        // 0x1e1124: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1128u;
        goto label_1e1128;
    }
    ctx->pc = 0x1E1120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E1128u);
        ctx->pc = 0x1E1124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1120u;
        // 0x1e1124: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1120u, 0x1E1128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1128u;
label_1e1128:
    // 0x1e1128: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1e1128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1e112c:
    // 0x1e112c: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x1e112cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1e1130:
    // 0x1e1130: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1e1130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e1134:
    // 0x1e1134: 0x438823  subu        $s1, $v0, $v1
    ctx->pc = 0x1e1134u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e1138:
    // 0x1e1138: 0x84a400b0  lh          $a0, 0xB0($a1)
    ctx->pc = 0x1e1138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 176)));
label_1e113c:
    // 0x1e113c: 0x8ca200b4  lw          $v0, 0xB4($a1)
    ctx->pc = 0x1e113cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
label_1e1140:
    // 0x1e1140: 0x40f809  jalr        $v0
label_1e1144:
    if (ctx->pc == 0x1E1144u) {
        ctx->pc = 0x1E1144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1140u;
        // 0x1e1144: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1148u;
        goto label_1e1148;
    }
    ctx->pc = 0x1E1140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E1148u);
        ctx->pc = 0x1E1144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1140u;
        // 0x1e1144: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1140u, 0x1E1148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1148u;
label_1e1148:
    // 0x1e1148: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x1e1148u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e114c:
    // 0x1e114c: 0x0  nop
    ctx->pc = 0x1e114cu;
    // NOP
label_1e1150:
    // 0x1e1150: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
label_1e1154:
    if (ctx->pc == 0x1E1154u) {
        ctx->pc = 0x1E1154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1150u;
        // 0x1e1154: 0x8e050064  lw          $a1, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1158u;
        goto label_1e1158;
    }
    ctx->pc = 0x1E1150u;
    {
        const bool branch_taken_0x1e1150 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1150u;
        // 0x1e1154: 0x8e050064  lw          $a1, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1150) {
            ctx->pc = 0x1E1200u;
            goto label_1e1200;
        }
    }
    ctx->pc = 0x1E1158u;
label_1e1158:
    // 0x1e1158: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e1158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e115c:
    // 0x1e115c: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x1e115cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_1e1160:
    // 0x1e1160: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x1e1160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_1e1164:
    // 0x1e1164: 0x40f809  jalr        $v0
label_1e1168:
    if (ctx->pc == 0x1E1168u) {
        ctx->pc = 0x1E1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1164u;
        // 0x1e1168: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E116Cu;
        goto label_1e116c;
    }
    ctx->pc = 0x1E1164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E116Cu);
        ctx->pc = 0x1E1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1164u;
        // 0x1e1168: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1164u, 0x1E116Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E116Cu;
label_1e116c:
    // 0x1e116c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1e1170:
    if (ctx->pc == 0x1E1170u) {
        ctx->pc = 0x1E1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E116Cu;
        // 0x1e1170: 0x8e050064  lw          $a1, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1174u;
        goto label_1e1174;
    }
    ctx->pc = 0x1E116Cu;
    {
        const bool branch_taken_0x1e116c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e116c) {
            ctx->pc = 0x1E1170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E116Cu;
            // 0x1e1170: 0x8e050064  lw          $a1, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1190u;
            goto label_1e1190;
        }
    }
    ctx->pc = 0x1E1174u;
label_1e1174:
    // 0x1e1174: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1e1174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1e1178:
    // 0x1e1178: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_1e117c:
    if (ctx->pc == 0x1E117Cu) {
        ctx->pc = 0x1E117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1178u;
        // 0x1e117c: 0x8e050064  lw          $a1, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1180u;
        goto label_1e1180;
    }
    ctx->pc = 0x1E1178u;
    {
        const bool branch_taken_0x1e1178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1178u;
        // 0x1e117c: 0x8e050064  lw          $a1, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1178) {
            ctx->pc = 0x1E1200u;
            goto label_1e1200;
        }
    }
    ctx->pc = 0x1E1180u;
label_1e1180:
    // 0x1e1180: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1e1180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_1e1184:
    // 0x1e1184: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1e1184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e1188:
    // 0x1e1188: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_1e118c:
    if (ctx->pc == 0x1E118Cu) {
        ctx->pc = 0x1E1190u;
        goto label_1e1190;
    }
    ctx->pc = 0x1E1188u;
    {
        const bool branch_taken_0x1e1188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1188) {
            ctx->pc = 0x1E1200u;
            goto label_1e1200;
        }
    }
    ctx->pc = 0x1E1190u;
label_1e1190:
    // 0x1e1190: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e1190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e1194:
    // 0x1e1194: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1e1194u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1e1198:
    // 0x1e1198: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1e1198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1e119c:
    // 0x1e119c: 0x60f809  jalr        $v1
label_1e11a0:
    if (ctx->pc == 0x1E11A0u) {
        ctx->pc = 0x1E11A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E119Cu;
        // 0x1e11a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E11A4u;
        goto label_1e11a4;
    }
    ctx->pc = 0x1E119Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E11A4u);
        ctx->pc = 0x1E11A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E119Cu;
        // 0x1e11a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E119Cu, 0x1E11A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E11A4u;
label_1e11a4:
    // 0x1e11a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e11a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e11a8:
    // 0x1e11a8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e11a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1e11ac:
    // 0x1e11ac: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x1e11acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e11b0:
    // 0x1e11b0: 0x0  nop
    ctx->pc = 0x1e11b0u;
    // NOP
label_1e11b4:
    // 0x1e11b4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1e11b8:
    if (ctx->pc == 0x1E11B8u) {
        ctx->pc = 0x1E11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11B4u;
        // 0x1e11b8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E11BCu;
        goto label_1e11bc;
    }
    ctx->pc = 0x1E11B4u;
    {
        const bool branch_taken_0x1e11b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11B4u;
        // 0x1e11b8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e11b4) {
            ctx->pc = 0x1E11C8u;
            goto label_1e11c8;
        }
    }
    ctx->pc = 0x1E11BCu;
label_1e11bc:
    // 0x1e11bc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1e11bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1e11c0:
    // 0x1e11c0: 0xc043f0c  jal         func_10FC30
label_1e11c4:
    if (ctx->pc == 0x1E11C4u) {
        ctx->pc = 0x1E11C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11C0u;
        // 0x1e11c4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E11C8u;
        goto label_1e11c8;
    }
    ctx->pc = 0x1E11C0u;
    SET_GPR_U32(ctx, 31, 0x1E11C8u);
    ctx->pc = 0x1E11C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E11C0u;
    // 0x1e11c4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1E11C0u, 0x1E11C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E11C8u;
label_1e11c8:
    // 0x1e11c8: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x1e11c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e11cc:
    // 0x1e11cc: 0x0  nop
    ctx->pc = 0x1e11ccu;
    // NOP
label_1e11d0:
    // 0x1e11d0: 0x4502001f  bc1fl       . + 4 + (0x1F << 2)
label_1e11d4:
    if (ctx->pc == 0x1E11D4u) {
        ctx->pc = 0x1E11D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11D0u;
        // 0x1e11d4: 0x8e060064  lw          $a2, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E11D8u;
        goto label_1e11d8;
    }
    ctx->pc = 0x1E11D0u;
    {
        const bool branch_taken_0x1e11d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e11d0) {
            ctx->pc = 0x1E11D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E11D0u;
            // 0x1e11d4: 0x8e060064  lw          $a2, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1250u;
            goto label_1e1250;
        }
    }
    ctx->pc = 0x1E11D8u;
label_1e11d8:
    // 0x1e11d8: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x1e11d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_1e11dc:
    // 0x1e11dc: 0xc60c0070  lwc1        $f12, 0x70($s0)
    ctx->pc = 0x1e11dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e11e0:
    // 0x1e11e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e11e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e11e4:
    // 0x1e11e4: 0x460ca300  add.s       $f12, $f20, $f12
    ctx->pc = 0x1e11e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
label_1e11e8:
    // 0x1e11e8: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1e11e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1e11ec:
    // 0x1e11ec: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1e11ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1e11f0:
    // 0x1e11f0: 0x60f809  jalr        $v1
label_1e11f4:
    if (ctx->pc == 0x1E11F4u) {
        ctx->pc = 0x1E11F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11F0u;
        // 0x1e11f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E11F8u;
        goto label_1e11f8;
    }
    ctx->pc = 0x1E11F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E11F8u);
        ctx->pc = 0x1E11F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11F0u;
        // 0x1e11f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E11F0u, 0x1E11F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E11F8u;
label_1e11f8:
    // 0x1e11f8: 0x10000015  b           . + 4 + (0x15 << 2)
label_1e11fc:
    if (ctx->pc == 0x1E11FCu) {
        ctx->pc = 0x1E11FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11F8u;
        // 0x1e11fc: 0x8e060064  lw          $a2, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1200u;
        goto label_1e1200;
    }
    ctx->pc = 0x1E11F8u;
    {
        const bool branch_taken_0x1e11f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E11FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11F8u;
        // 0x1e11fc: 0x8e060064  lw          $a2, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e11f8) {
            ctx->pc = 0x1E1250u;
            goto label_1e1250;
        }
    }
    ctx->pc = 0x1E1200u;
label_1e1200:
    // 0x1e1200: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e1200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e1204:
    // 0x1e1204: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1e1204u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1e1208:
    // 0x1e1208: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1e1208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1e120c:
    // 0x1e120c: 0x60f809  jalr        $v1
label_1e1210:
    if (ctx->pc == 0x1E1210u) {
        ctx->pc = 0x1E1210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E120Cu;
        // 0x1e1210: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1214u;
        goto label_1e1214;
    }
    ctx->pc = 0x1E120Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E1214u);
        ctx->pc = 0x1E1210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E120Cu;
        // 0x1e1210: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E120Cu, 0x1E1214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1214u;
label_1e1214:
    // 0x1e1214: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e1214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e1218:
    // 0x1e1218: 0x0  nop
    ctx->pc = 0x1e1218u;
    // NOP
label_1e121c:
    // 0x1e121c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e121cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e1220:
    // 0x1e1220: 0x0  nop
    ctx->pc = 0x1e1220u;
    // NOP
label_1e1224:
    // 0x1e1224: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_1e1228:
    if (ctx->pc == 0x1E1228u) {
        ctx->pc = 0x1E1228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1224u;
        // 0x1e1228: 0x8e060064  lw          $a2, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E122Cu;
        goto label_1e122c;
    }
    ctx->pc = 0x1E1224u;
    {
        const bool branch_taken_0x1e1224 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1224) {
            ctx->pc = 0x1E1228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1224u;
            // 0x1e1228: 0x8e060064  lw          $a2, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1250u;
            goto label_1e1250;
        }
    }
    ctx->pc = 0x1E122Cu;
label_1e122c:
    // 0x1e122c: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x1e122cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_1e1230:
    // 0x1e1230: 0xc60c0070  lwc1        $f12, 0x70($s0)
    ctx->pc = 0x1e1230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e1234:
    // 0x1e1234: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e1234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e1238:
    // 0x1e1238: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x1e1238u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_1e123c:
    // 0x1e123c: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1e123cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1e1240:
    // 0x1e1240: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1e1240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1e1244:
    // 0x1e1244: 0x60f809  jalr        $v1
label_1e1248:
    if (ctx->pc == 0x1E1248u) {
        ctx->pc = 0x1E1248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1244u;
        // 0x1e1248: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E124Cu;
        goto label_1e124c;
    }
    ctx->pc = 0x1E1244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E124Cu);
        ctx->pc = 0x1E1248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1244u;
        // 0x1e1248: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1244u, 0x1E124Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E124Cu;
label_1e124c:
    // 0x1e124c: 0x8e060064  lw          $a2, 0x64($s0)
    ctx->pc = 0x1e124cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_1e1250:
    // 0x1e1250: 0x92050080  lbu         $a1, 0x80($s0)
    ctx->pc = 0x1e1250u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
label_1e1254:
    // 0x1e1254: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e1254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e1258:
    // 0x1e1258: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1e1258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1e125c:
    // 0x1e125c: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1e125cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1e1260:
    // 0x1e1260: 0x60f809  jalr        $v1
label_1e1264:
    if (ctx->pc == 0x1E1264u) {
        ctx->pc = 0x1E1264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1260u;
        // 0x1e1264: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1268u;
        goto label_1e1268;
    }
    ctx->pc = 0x1E1260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E1268u);
        ctx->pc = 0x1E1264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1260u;
        // 0x1e1264: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1260u, 0x1E1268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1268u;
label_1e1268:
    // 0x1e1268: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x1e1268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_1e126c:
    // 0x1e126c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e126cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e1270:
    // 0x1e1270: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1e1270u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1e1274:
    // 0x1e1274: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1e1274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1e1278:
    // 0x1e1278: 0x60f809  jalr        $v1
label_1e127c:
    if (ctx->pc == 0x1E127Cu) {
        ctx->pc = 0x1E127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1278u;
        // 0x1e127c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1280u;
        goto label_1e1280;
    }
    ctx->pc = 0x1E1278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E1280u);
        ctx->pc = 0x1E127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1278u;
        // 0x1e127c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1278u, 0x1E1280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1280u;
label_1e1280:
    // 0x1e1280: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e1280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e1284:
    // 0x1e1284: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e1284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e1288:
    // 0x1e1288: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e1288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e128c:
    // 0x1e128c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1e128cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1e1290:
    // 0x1e1290: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1e1290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e1294:
    // 0x1e1294: 0x3e00008  jr          $ra
label_1e1298:
    if (ctx->pc == 0x1E1298u) {
        ctx->pc = 0x1E1298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1294u;
        // 0x1e1298: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E129Cu;
        goto label_1e129c;
    }
    ctx->pc = 0x1E1294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1294u;
        // 0x1e1298: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E129Cu;
label_1e129c:
    // 0x1e129c: 0x0  nop
    ctx->pc = 0x1e129cu;
    // NOP
    ctx->pc = 0x1e12a0u;
}
