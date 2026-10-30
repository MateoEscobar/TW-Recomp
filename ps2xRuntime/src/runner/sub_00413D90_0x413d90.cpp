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

// Function: sub_00413D90
// Address: 0x413d90 - 0x414188
void sub_00413D90_0x413d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413D90_0x413d90");
#endif

    switch (ctx->pc) {
        case 0x413d90u: goto label_413d90;
        case 0x413d94u: goto label_413d94;
        case 0x413d98u: goto label_413d98;
        case 0x413d9cu: goto label_413d9c;
        case 0x413da0u: goto label_413da0;
        case 0x413da4u: goto label_413da4;
        case 0x413da8u: goto label_413da8;
        case 0x413dacu: goto label_413dac;
        case 0x413db0u: goto label_413db0;
        case 0x413db4u: goto label_413db4;
        case 0x413db8u: goto label_413db8;
        case 0x413dbcu: goto label_413dbc;
        case 0x413dc0u: goto label_413dc0;
        case 0x413dc4u: goto label_413dc4;
        case 0x413dc8u: goto label_413dc8;
        case 0x413dccu: goto label_413dcc;
        case 0x413dd0u: goto label_413dd0;
        case 0x413dd4u: goto label_413dd4;
        case 0x413dd8u: goto label_413dd8;
        case 0x413ddcu: goto label_413ddc;
        case 0x413de0u: goto label_413de0;
        case 0x413de4u: goto label_413de4;
        case 0x413de8u: goto label_413de8;
        case 0x413decu: goto label_413dec;
        case 0x413df0u: goto label_413df0;
        case 0x413df4u: goto label_413df4;
        case 0x413df8u: goto label_413df8;
        case 0x413dfcu: goto label_413dfc;
        case 0x413e00u: goto label_413e00;
        case 0x413e04u: goto label_413e04;
        case 0x413e08u: goto label_413e08;
        case 0x413e0cu: goto label_413e0c;
        case 0x413e10u: goto label_413e10;
        case 0x413e14u: goto label_413e14;
        case 0x413e18u: goto label_413e18;
        case 0x413e1cu: goto label_413e1c;
        case 0x413e20u: goto label_413e20;
        case 0x413e24u: goto label_413e24;
        case 0x413e28u: goto label_413e28;
        case 0x413e2cu: goto label_413e2c;
        case 0x413e30u: goto label_413e30;
        case 0x413e34u: goto label_413e34;
        case 0x413e38u: goto label_413e38;
        case 0x413e3cu: goto label_413e3c;
        case 0x413e40u: goto label_413e40;
        case 0x413e44u: goto label_413e44;
        case 0x413e48u: goto label_413e48;
        case 0x413e4cu: goto label_413e4c;
        case 0x413e50u: goto label_413e50;
        case 0x413e54u: goto label_413e54;
        case 0x413e58u: goto label_413e58;
        case 0x413e5cu: goto label_413e5c;
        case 0x413e60u: goto label_413e60;
        case 0x413e64u: goto label_413e64;
        case 0x413e68u: goto label_413e68;
        case 0x413e6cu: goto label_413e6c;
        case 0x413e70u: goto label_413e70;
        case 0x413e74u: goto label_413e74;
        case 0x413e78u: goto label_413e78;
        case 0x413e7cu: goto label_413e7c;
        case 0x413e80u: goto label_413e80;
        case 0x413e84u: goto label_413e84;
        case 0x413e88u: goto label_413e88;
        case 0x413e8cu: goto label_413e8c;
        case 0x413e90u: goto label_413e90;
        case 0x413e94u: goto label_413e94;
        case 0x413e98u: goto label_413e98;
        case 0x413e9cu: goto label_413e9c;
        case 0x413ea0u: goto label_413ea0;
        case 0x413ea4u: goto label_413ea4;
        case 0x413ea8u: goto label_413ea8;
        case 0x413eacu: goto label_413eac;
        case 0x413eb0u: goto label_413eb0;
        case 0x413eb4u: goto label_413eb4;
        case 0x413eb8u: goto label_413eb8;
        case 0x413ebcu: goto label_413ebc;
        case 0x413ec0u: goto label_413ec0;
        case 0x413ec4u: goto label_413ec4;
        case 0x413ec8u: goto label_413ec8;
        case 0x413eccu: goto label_413ecc;
        case 0x413ed0u: goto label_413ed0;
        case 0x413ed4u: goto label_413ed4;
        case 0x413ed8u: goto label_413ed8;
        case 0x413edcu: goto label_413edc;
        case 0x413ee0u: goto label_413ee0;
        case 0x413ee4u: goto label_413ee4;
        case 0x413ee8u: goto label_413ee8;
        case 0x413eecu: goto label_413eec;
        case 0x413ef0u: goto label_413ef0;
        case 0x413ef4u: goto label_413ef4;
        case 0x413ef8u: goto label_413ef8;
        case 0x413efcu: goto label_413efc;
        case 0x413f00u: goto label_413f00;
        case 0x413f04u: goto label_413f04;
        case 0x413f08u: goto label_413f08;
        case 0x413f0cu: goto label_413f0c;
        case 0x413f10u: goto label_413f10;
        case 0x413f14u: goto label_413f14;
        case 0x413f18u: goto label_413f18;
        case 0x413f1cu: goto label_413f1c;
        case 0x413f20u: goto label_413f20;
        case 0x413f24u: goto label_413f24;
        case 0x413f28u: goto label_413f28;
        case 0x413f2cu: goto label_413f2c;
        case 0x413f30u: goto label_413f30;
        case 0x413f34u: goto label_413f34;
        case 0x413f38u: goto label_413f38;
        case 0x413f3cu: goto label_413f3c;
        case 0x413f40u: goto label_413f40;
        case 0x413f44u: goto label_413f44;
        case 0x413f48u: goto label_413f48;
        case 0x413f4cu: goto label_413f4c;
        case 0x413f50u: goto label_413f50;
        case 0x413f54u: goto label_413f54;
        case 0x413f58u: goto label_413f58;
        case 0x413f5cu: goto label_413f5c;
        case 0x413f60u: goto label_413f60;
        case 0x413f64u: goto label_413f64;
        case 0x413f68u: goto label_413f68;
        case 0x413f6cu: goto label_413f6c;
        case 0x413f70u: goto label_413f70;
        case 0x413f74u: goto label_413f74;
        case 0x413f78u: goto label_413f78;
        case 0x413f7cu: goto label_413f7c;
        case 0x413f80u: goto label_413f80;
        case 0x413f84u: goto label_413f84;
        case 0x413f88u: goto label_413f88;
        case 0x413f8cu: goto label_413f8c;
        case 0x413f90u: goto label_413f90;
        case 0x413f94u: goto label_413f94;
        case 0x413f98u: goto label_413f98;
        case 0x413f9cu: goto label_413f9c;
        case 0x413fa0u: goto label_413fa0;
        case 0x413fa4u: goto label_413fa4;
        case 0x413fa8u: goto label_413fa8;
        case 0x413facu: goto label_413fac;
        case 0x413fb0u: goto label_413fb0;
        case 0x413fb4u: goto label_413fb4;
        case 0x413fb8u: goto label_413fb8;
        case 0x413fbcu: goto label_413fbc;
        case 0x413fc0u: goto label_413fc0;
        case 0x413fc4u: goto label_413fc4;
        case 0x413fc8u: goto label_413fc8;
        case 0x413fccu: goto label_413fcc;
        case 0x413fd0u: goto label_413fd0;
        case 0x413fd4u: goto label_413fd4;
        case 0x413fd8u: goto label_413fd8;
        case 0x413fdcu: goto label_413fdc;
        case 0x413fe0u: goto label_413fe0;
        case 0x413fe4u: goto label_413fe4;
        case 0x413fe8u: goto label_413fe8;
        case 0x413fecu: goto label_413fec;
        case 0x413ff0u: goto label_413ff0;
        case 0x413ff4u: goto label_413ff4;
        case 0x413ff8u: goto label_413ff8;
        case 0x413ffcu: goto label_413ffc;
        case 0x414000u: goto label_414000;
        case 0x414004u: goto label_414004;
        case 0x414008u: goto label_414008;
        case 0x41400cu: goto label_41400c;
        case 0x414010u: goto label_414010;
        case 0x414014u: goto label_414014;
        case 0x414018u: goto label_414018;
        case 0x41401cu: goto label_41401c;
        case 0x414020u: goto label_414020;
        case 0x414024u: goto label_414024;
        case 0x414028u: goto label_414028;
        case 0x41402cu: goto label_41402c;
        case 0x414030u: goto label_414030;
        case 0x414034u: goto label_414034;
        case 0x414038u: goto label_414038;
        case 0x41403cu: goto label_41403c;
        case 0x414040u: goto label_414040;
        case 0x414044u: goto label_414044;
        case 0x414048u: goto label_414048;
        case 0x41404cu: goto label_41404c;
        case 0x414050u: goto label_414050;
        case 0x414054u: goto label_414054;
        case 0x414058u: goto label_414058;
        case 0x41405cu: goto label_41405c;
        case 0x414060u: goto label_414060;
        case 0x414064u: goto label_414064;
        case 0x414068u: goto label_414068;
        case 0x41406cu: goto label_41406c;
        case 0x414070u: goto label_414070;
        case 0x414074u: goto label_414074;
        case 0x414078u: goto label_414078;
        case 0x41407cu: goto label_41407c;
        case 0x414080u: goto label_414080;
        case 0x414084u: goto label_414084;
        case 0x414088u: goto label_414088;
        case 0x41408cu: goto label_41408c;
        case 0x414090u: goto label_414090;
        case 0x414094u: goto label_414094;
        case 0x414098u: goto label_414098;
        case 0x41409cu: goto label_41409c;
        case 0x4140a0u: goto label_4140a0;
        case 0x4140a4u: goto label_4140a4;
        case 0x4140a8u: goto label_4140a8;
        case 0x4140acu: goto label_4140ac;
        case 0x4140b0u: goto label_4140b0;
        case 0x4140b4u: goto label_4140b4;
        case 0x4140b8u: goto label_4140b8;
        case 0x4140bcu: goto label_4140bc;
        case 0x4140c0u: goto label_4140c0;
        case 0x4140c4u: goto label_4140c4;
        case 0x4140c8u: goto label_4140c8;
        case 0x4140ccu: goto label_4140cc;
        case 0x4140d0u: goto label_4140d0;
        case 0x4140d4u: goto label_4140d4;
        case 0x4140d8u: goto label_4140d8;
        case 0x4140dcu: goto label_4140dc;
        case 0x4140e0u: goto label_4140e0;
        case 0x4140e4u: goto label_4140e4;
        case 0x4140e8u: goto label_4140e8;
        case 0x4140ecu: goto label_4140ec;
        case 0x4140f0u: goto label_4140f0;
        case 0x4140f4u: goto label_4140f4;
        case 0x4140f8u: goto label_4140f8;
        case 0x4140fcu: goto label_4140fc;
        case 0x414100u: goto label_414100;
        case 0x414104u: goto label_414104;
        case 0x414108u: goto label_414108;
        case 0x41410cu: goto label_41410c;
        case 0x414110u: goto label_414110;
        case 0x414114u: goto label_414114;
        case 0x414118u: goto label_414118;
        case 0x41411cu: goto label_41411c;
        case 0x414120u: goto label_414120;
        case 0x414124u: goto label_414124;
        case 0x414128u: goto label_414128;
        case 0x41412cu: goto label_41412c;
        case 0x414130u: goto label_414130;
        case 0x414134u: goto label_414134;
        case 0x414138u: goto label_414138;
        case 0x41413cu: goto label_41413c;
        case 0x414140u: goto label_414140;
        case 0x414144u: goto label_414144;
        case 0x414148u: goto label_414148;
        case 0x41414cu: goto label_41414c;
        case 0x414150u: goto label_414150;
        case 0x414154u: goto label_414154;
        case 0x414158u: goto label_414158;
        case 0x41415cu: goto label_41415c;
        case 0x414160u: goto label_414160;
        case 0x414164u: goto label_414164;
        case 0x414168u: goto label_414168;
        case 0x41416cu: goto label_41416c;
        case 0x414170u: goto label_414170;
        case 0x414174u: goto label_414174;
        case 0x414178u: goto label_414178;
        case 0x41417cu: goto label_41417c;
        case 0x414180u: goto label_414180;
        case 0x414184u: goto label_414184;
        default: break;
    }

    ctx->pc = 0x413d90u;

label_413d90:
    // 0x413d90: 0x27bdfd10  addiu       $sp, $sp, -0x2F0
    ctx->pc = 0x413d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966544));
label_413d94:
    // 0x413d94: 0x7fb70260  sq          $s7, 0x260($sp)
    ctx->pc = 0x413d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 23));
label_413d98:
    // 0x413d98: 0x7fb002d0  sq          $s0, 0x2D0($sp)
    ctx->pc = 0x413d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 16));
label_413d9c:
    // 0x413d9c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x413d9cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_413da0:
    // 0x413da0: 0x7fb102c0  sq          $s1, 0x2C0($sp)
    ctx->pc = 0x413da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 17));
label_413da4:
    // 0x413da4: 0x7fb202b0  sq          $s2, 0x2B0($sp)
    ctx->pc = 0x413da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 18));
label_413da8:
    // 0x413da8: 0x7fb302a0  sq          $s3, 0x2A0($sp)
    ctx->pc = 0x413da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 19));
label_413dac:
    // 0x413dac: 0x7fb40290  sq          $s4, 0x290($sp)
    ctx->pc = 0x413dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 20));
label_413db0:
    // 0x413db0: 0x7fb50280  sq          $s5, 0x280($sp)
    ctx->pc = 0x413db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 21));
label_413db4:
    // 0x413db4: 0x7fb60270  sq          $s6, 0x270($sp)
    ctx->pc = 0x413db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 22));
label_413db8:
    // 0x413db8: 0x7fbe0250  sq          $fp, 0x250($sp)
    ctx->pc = 0x413db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 30));
label_413dbc:
    // 0x413dbc: 0xffbf0240  sd          $ra, 0x240($sp)
    ctx->pc = 0x413dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 31));
label_413dc0:
    // 0x413dc0: 0xe7b402e0  swc1        $f20, 0x2E0($sp)
    ctx->pc = 0x413dc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
label_413dc4:
    // 0x413dc4: 0x92e20148  lbu         $v0, 0x148($s7)
    ctx->pc = 0x413dc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 328)));
label_413dc8:
    // 0x413dc8: 0x104000e2  beqz        $v0, . + 4 + (0xE2 << 2)
label_413dcc:
    if (ctx->pc == 0x413DCCu) {
        ctx->pc = 0x413DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413DC8u;
        // 0x413dcc: 0x27a30050  addiu       $v1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413DD0u;
        goto label_413dd0;
    }
    ctx->pc = 0x413DC8u;
    {
        const bool branch_taken_0x413dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413DC8u;
        // 0x413dcc: 0x27a30050  addiu       $v1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413dc8) {
            ctx->pc = 0x414154u;
            goto label_414154;
        }
    }
    ctx->pc = 0x413DD0u;
label_413dd0:
    // 0x413dd0: 0x8ee20140  lw          $v0, 0x140($s7)
    ctx->pc = 0x413dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 320)));
label_413dd4:
    // 0x413dd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x413dd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_413dd8:
    // 0x413dd8: 0x26f300c0  addiu       $s3, $s7, 0xC0
    ctx->pc = 0x413dd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 192));
label_413ddc:
    // 0x413ddc: 0x26f400d0  addiu       $s4, $s7, 0xD0
    ctx->pc = 0x413ddcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 208));
label_413de0:
    // 0x413de0: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x413de0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_413de4:
    // 0x413de4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_413de8:
    if (ctx->pc == 0x413DE8u) {
        ctx->pc = 0x413DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413DE4u;
        // 0x413de8: 0xafa30238  sw          $v1, 0x238($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413DECu;
        goto label_413dec;
    }
    ctx->pc = 0x413DE4u;
    {
        const bool branch_taken_0x413de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413DE4u;
        // 0x413de8: 0xafa30238  sw          $v1, 0x238($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413de4) {
            ctx->pc = 0x413E34u;
            goto label_413e34;
        }
    }
    ctx->pc = 0x413DECu;
label_413dec:
    // 0x413dec: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x413decu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_413df0:
    // 0x413df0: 0x26f000e0  addiu       $s0, $s7, 0xE0
    ctx->pc = 0x413df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 224));
label_413df4:
    // 0x413df4: 0x0  nop
    ctx->pc = 0x413df4u;
    // NOP
label_413df8:
    // 0x413df8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x413df8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_413dfc:
    // 0x413dfc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x413dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_413e00:
    // 0x413e00: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x413e00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_413e04:
    // 0x413e04: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x413e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_413e08:
    // 0x413e08: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x413e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_413e0c:
    // 0x413e0c: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x413e0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_413e10:
    // 0x413e10: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x413e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_413e14:
    // 0x413e14: 0x60f809  jalr        $v1
label_413e18:
    if (ctx->pc == 0x413E18u) {
        ctx->pc = 0x413E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413E14u;
        // 0x413e18: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413E1Cu;
        goto label_413e1c;
    }
    ctx->pc = 0x413E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x413E1Cu);
        ctx->pc = 0x413E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413E14u;
        // 0x413e18: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413E14u, 0x413E1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x413E1Cu;
label_413e1c:
    // 0x413e1c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x413e1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_413e20:
    // 0x413e20: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x413e20u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_413e24:
    // 0x413e24: 0x8ee20140  lw          $v0, 0x140($s7)
    ctx->pc = 0x413e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 320)));
label_413e28:
    // 0x413e28: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x413e28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_413e2c:
    // 0x413e2c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_413e30:
    if (ctx->pc == 0x413E30u) {
        ctx->pc = 0x413E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413E2Cu;
        // 0x413e30: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413E34u;
        goto label_413e34;
    }
    ctx->pc = 0x413E2Cu;
    {
        const bool branch_taken_0x413e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x413E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413E2Cu;
        // 0x413e30: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413e2c) {
            ctx->pc = 0x413DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_413df8;
        }
    }
    ctx->pc = 0x413E34u;
label_413e34:
    // 0x413e34: 0x7ae30000  lq          $v1, 0x0($s7)
    ctx->pc = 0x413e34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_413e38:
    // 0x413e38: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x413e38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_413e3c:
    // 0x413e3c: 0x8ee20140  lw          $v0, 0x140($s7)
    ctx->pc = 0x413e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 320)));
label_413e40:
    // 0x413e40: 0x7ee300d0  sq          $v1, 0xD0($s7)
    ctx->pc = 0x413e40u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 208), GPR_VEC(ctx, 3));
label_413e44:
    // 0x413e44: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x413e44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_413e48:
    // 0x413e48: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_413e4c:
    if (ctx->pc == 0x413E4Cu) {
        ctx->pc = 0x413E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413E48u;
        // 0x413e4c: 0x7ee300c0  sq          $v1, 0xC0($s7) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 23), 192), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413E50u;
        goto label_413e50;
    }
    ctx->pc = 0x413E48u;
    {
        const bool branch_taken_0x413e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413E48u;
        // 0x413e4c: 0x7ee300c0  sq          $v1, 0xC0($s7) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 23), 192), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413e48) {
            ctx->pc = 0x413E78u;
            goto label_413e78;
        }
    }
    ctx->pc = 0x413E50u;
label_413e50:
    // 0x413e50: 0x26f00010  addiu       $s0, $s7, 0x10
    ctx->pc = 0x413e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_413e54:
    // 0x413e54: 0x0  nop
    ctx->pc = 0x413e54u;
    // NOP
label_413e58:
    // 0x413e58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x413e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_413e5c:
    // 0x413e5c: 0xc0cdfde  jal         func_337F78
label_413e60:
    if (ctx->pc == 0x413E60u) {
        ctx->pc = 0x413E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413E5Cu;
        // 0x413e60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413E64u;
        goto label_413e64;
    }
    ctx->pc = 0x413E5Cu;
    SET_GPR_U32(ctx, 31, 0x413E64u);
    ctx->pc = 0x413E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413E5Cu;
    // 0x413e60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F78u, 0x413E5Cu, 0x413E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413E64u;
label_413e64:
    // 0x413e64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x413e64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_413e68:
    // 0x413e68: 0x8ee20140  lw          $v0, 0x140($s7)
    ctx->pc = 0x413e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 320)));
label_413e6c:
    // 0x413e6c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x413e6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_413e70:
    // 0x413e70: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_413e74:
    if (ctx->pc == 0x413E74u) {
        ctx->pc = 0x413E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413E70u;
        // 0x413e74: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413E78u;
        goto label_413e78;
    }
    ctx->pc = 0x413E70u;
    {
        const bool branch_taken_0x413e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x413E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413E70u;
        // 0x413e74: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413e70) {
            ctx->pc = 0x413E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_413e58;
        }
    }
    ctx->pc = 0x413E78u;
label_413e78:
    // 0x413e78: 0xc6e00144  lwc1        $f0, 0x144($s7)
    ctx->pc = 0x413e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_413e7c:
    // 0x413e7c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x413e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_413e80:
    // 0x413e80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x413e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_413e84:
    // 0x413e84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x413e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_413e88:
    // 0x413e88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x413e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_413e8c:
    // 0x413e8c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x413e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_413e90:
    // 0x413e90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x413e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_413e94:
    // 0x413e94: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x413e94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_413e98:
    // 0x413e98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x413e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_413e9c:
    // 0x413e9c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x413e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_413ea0:
    // 0x413ea0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x413ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_413ea4:
    // 0x413ea4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x413ea4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_413ea8:
    // 0x413ea8: 0xc136afa  jal         func_4DABE8
label_413eac:
    if (ctx->pc == 0x413EACu) {
        ctx->pc = 0x413EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413EA8u;
        // 0x413eac: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413EB0u;
        goto label_413eb0;
    }
    ctx->pc = 0x413EA8u;
    SET_GPR_U32(ctx, 31, 0x413EB0u);
    ctx->pc = 0x413EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413EA8u;
    // 0x413eac: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x413EA8u, 0x413EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413EB0u;
label_413eb0:
    // 0x413eb0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x413eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_413eb4:
    // 0x413eb4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x413eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_413eb8:
    // 0x413eb8: 0xc136b18  jal         func_4DAC60
label_413ebc:
    if (ctx->pc == 0x413EBCu) {
        ctx->pc = 0x413EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413EB8u;
        // 0x413ebc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413EC0u;
        goto label_413ec0;
    }
    ctx->pc = 0x413EB8u;
    SET_GPR_U32(ctx, 31, 0x413EC0u);
    ctx->pc = 0x413EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413EB8u;
    // 0x413ebc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x413EB8u, 0x413EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413EC0u;
label_413ec0:
    // 0x413ec0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x413ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_413ec4:
    // 0x413ec4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x413ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_413ec8:
    // 0x413ec8: 0xc136afa  jal         func_4DABE8
label_413ecc:
    if (ctx->pc == 0x413ECCu) {
        ctx->pc = 0x413ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413EC8u;
        // 0x413ecc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413ED0u;
        goto label_413ed0;
    }
    ctx->pc = 0x413EC8u;
    SET_GPR_U32(ctx, 31, 0x413ED0u);
    ctx->pc = 0x413ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413EC8u;
    // 0x413ecc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x413EC8u, 0x413ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413ED0u;
label_413ed0:
    // 0x413ed0: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x413ed0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_413ed4:
    // 0x413ed4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x413ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_413ed8:
    // 0x413ed8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x413ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_413edc:
    // 0x413edc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x413edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_413ee0:
    // 0x413ee0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x413ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_413ee4:
    // 0x413ee4: 0xc136b24  jal         func_4DAC90
label_413ee8:
    if (ctx->pc == 0x413EE8u) {
        ctx->pc = 0x413EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413EE4u;
        // 0x413ee8: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413EECu;
        goto label_413eec;
    }
    ctx->pc = 0x413EE4u;
    SET_GPR_U32(ctx, 31, 0x413EECu);
    ctx->pc = 0x413EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413EE4u;
    // 0x413ee8: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x413EE4u, 0x413EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413EECu;
label_413eec:
    // 0x413eec: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x413eecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_413ef0:
    // 0x413ef0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x413ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_413ef4:
    // 0x413ef4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x413ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_413ef8:
    // 0x413ef8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x413ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_413efc:
    // 0x413efc: 0xc136b18  jal         func_4DAC60
label_413f00:
    if (ctx->pc == 0x413F00u) {
        ctx->pc = 0x413F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413EFCu;
        // 0x413f00: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413F04u;
        goto label_413f04;
    }
    ctx->pc = 0x413EFCu;
    SET_GPR_U32(ctx, 31, 0x413F04u);
    ctx->pc = 0x413F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413EFCu;
    // 0x413f00: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x413EFCu, 0x413F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413F04u;
label_413f04:
    // 0x413f04: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x413f04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_413f08:
    // 0x413f08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x413f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_413f0c:
    // 0x413f0c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x413f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_413f10:
    // 0x413f10: 0xc0cdb62  jal         func_336D88
label_413f14:
    if (ctx->pc == 0x413F14u) {
        ctx->pc = 0x413F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413F10u;
        // 0x413f14: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413F18u;
        goto label_413f18;
    }
    ctx->pc = 0x413F10u;
    SET_GPR_U32(ctx, 31, 0x413F18u);
    ctx->pc = 0x413F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413F10u;
    // 0x413f14: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x413F10u, 0x413F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413F18u;
label_413f18:
    // 0x413f18: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x413f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_413f1c:
    // 0x413f1c: 0x8fa40238  lw          $a0, 0x238($sp)
    ctx->pc = 0x413f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_413f20:
    // 0x413f20: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x413f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_413f24:
    // 0x413f24: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x413f24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_413f28:
    // 0x413f28: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x413f28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_413f2c:
    // 0x413f2c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x413f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_413f30:
    // 0x413f30: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x413f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_413f34:
    // 0x413f34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x413f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_413f38:
    // 0x413f38: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x413f38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_413f3c:
    // 0x413f3c: 0xc089d2a  jal         func_2274A8
label_413f40:
    if (ctx->pc == 0x413F40u) {
        ctx->pc = 0x413F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413F3Cu;
        // 0x413f40: 0xafa30234  sw          $v1, 0x234($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413F44u;
        goto label_413f44;
    }
    ctx->pc = 0x413F3Cu;
    SET_GPR_U32(ctx, 31, 0x413F44u);
    ctx->pc = 0x413F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413F3Cu;
    // 0x413f40: 0xafa30234  sw          $v1, 0x234($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2274A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2274A8u, 0x413F3Cu, 0x413F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413F44u;
label_413f44:
    // 0x413f44: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
label_413f48:
    if (ctx->pc == 0x413F48u) {
        ctx->pc = 0x413F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413F44u;
        // 0x413f48: 0xafa20230  sw          $v0, 0x230($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413F4Cu;
        goto label_413f4c;
    }
    ctx->pc = 0x413F44u;
    {
        const bool branch_taken_0x413f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413F44u;
        // 0x413f48: 0xafa20230  sw          $v0, 0x230($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413f44) {
            ctx->pc = 0x414154u;
            goto label_414154;
        }
    }
    ctx->pc = 0x413F4Cu;
label_413f4c:
    // 0x413f4c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x413f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_413f50:
    // 0x413f50: 0x8fa30238  lw          $v1, 0x238($sp)
    ctx->pc = 0x413f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_413f54:
    // 0x413f54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x413f54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_413f58:
    // 0x413f58: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x413f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_413f5c:
    // 0x413f5c: 0xafb0023c  sw          $s0, 0x23C($sp)
    ctx->pc = 0x413f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 16));
label_413f60:
    // 0x413f60: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x413f60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_413f64:
    // 0x413f64: 0xc087502  jal         func_21D408
label_413f68:
    if (ctx->pc == 0x413F68u) {
        ctx->pc = 0x413F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413F64u;
        // 0x413f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413F6Cu;
        goto label_413f6c;
    }
    ctx->pc = 0x413F64u;
    SET_GPR_U32(ctx, 31, 0x413F6Cu);
    ctx->pc = 0x413F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413F64u;
    // 0x413f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x413F64u, 0x413F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413F6Cu;
label_413f6c:
    // 0x413f6c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x413f6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_413f70:
    // 0x413f70: 0xc0a2ad4  jal         func_28AB50
label_413f74:
    if (ctx->pc == 0x413F74u) {
        ctx->pc = 0x413F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413F70u;
        // 0x413f74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413F78u;
        goto label_413f78;
    }
    ctx->pc = 0x413F70u;
    SET_GPR_U32(ctx, 31, 0x413F78u);
    ctx->pc = 0x413F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413F70u;
    // 0x413f74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB50u, 0x413F70u, 0x413F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413F78u;
label_413f78:
    // 0x413f78: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
label_413f7c:
    if (ctx->pc == 0x413F7Cu) {
        ctx->pc = 0x413F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413F78u;
        // 0x413f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413F80u;
        goto label_413f80;
    }
    ctx->pc = 0x413F78u;
    {
        const bool branch_taken_0x413f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413F78u;
        // 0x413f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413f78) {
            ctx->pc = 0x414140u;
            goto label_414140;
        }
    }
    ctx->pc = 0x413F80u;
label_413f80:
    // 0x413f80: 0xc089f76  jal         func_227DD8
label_413f84:
    if (ctx->pc == 0x413F84u) {
        ctx->pc = 0x413F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413F80u;
        // 0x413f84: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413F88u;
        goto label_413f88;
    }
    ctx->pc = 0x413F80u;
    SET_GPR_U32(ctx, 31, 0x413F88u);
    ctx->pc = 0x413F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413F80u;
    // 0x413f84: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x413F80u, 0x413F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413F88u;
label_413f88:
    // 0x413f88: 0x5051006e  beql        $v0, $s1, . + 4 + (0x6E << 2)
label_413f8c:
    if (ctx->pc == 0x413F8Cu) {
        ctx->pc = 0x413F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413F88u;
        // 0x413f8c: 0x8fb0023c  lw          $s0, 0x23C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413F90u;
        goto label_413f90;
    }
    ctx->pc = 0x413F88u;
    {
        const bool branch_taken_0x413f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x413f88) {
            ctx->pc = 0x413F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x413F88u;
            // 0x413f8c: 0x8fb0023c  lw          $s0, 0x23C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x414144u;
            goto label_414144;
        }
    }
    ctx->pc = 0x413F90u;
label_413f90:
    // 0x413f90: 0xc088edc  jal         func_223B70
label_413f94:
    if (ctx->pc == 0x413F94u) {
        ctx->pc = 0x413F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413F90u;
        // 0x413f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413F98u;
        goto label_413f98;
    }
    ctx->pc = 0x413F90u;
    SET_GPR_U32(ctx, 31, 0x413F98u);
    ctx->pc = 0x413F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413F90u;
    // 0x413f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x413F90u, 0x413F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413F98u;
label_413f98:
    // 0x413f98: 0x10510069  beq         $v0, $s1, . + 4 + (0x69 << 2)
label_413f9c:
    if (ctx->pc == 0x413F9Cu) {
        ctx->pc = 0x413F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413F98u;
        // 0x413f9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413FA0u;
        goto label_413fa0;
    }
    ctx->pc = 0x413F98u;
    {
        const bool branch_taken_0x413f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x413F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413F98u;
        // 0x413f9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413f98) {
            ctx->pc = 0x414140u;
            goto label_414140;
        }
    }
    ctx->pc = 0x413FA0u;
label_413fa0:
    // 0x413fa0: 0xc0a3658  jal         func_28D960
label_413fa4:
    if (ctx->pc == 0x413FA4u) {
        ctx->pc = 0x413FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413FA0u;
        // 0x413fa4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413FA8u;
        goto label_413fa8;
    }
    ctx->pc = 0x413FA0u;
    SET_GPR_U32(ctx, 31, 0x413FA8u);
    ctx->pc = 0x413FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413FA0u;
    // 0x413fa4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x413FA0u, 0x413FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413FA8u;
label_413fa8:
    // 0x413fa8: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
label_413fac:
    if (ctx->pc == 0x413FACu) {
        ctx->pc = 0x413FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413FA8u;
        // 0x413fac: 0x8fa20234  lw          $v0, 0x234($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413FB0u;
        goto label_413fb0;
    }
    ctx->pc = 0x413FA8u;
    {
        const bool branch_taken_0x413fa8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x413FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413FA8u;
        // 0x413fac: 0x8fa20234  lw          $v0, 0x234($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413fa8) {
            ctx->pc = 0x413FB8u;
            goto label_413fb8;
        }
    }
    ctx->pc = 0x413FB0u;
label_413fb0:
    // 0x413fb0: 0x10000063  b           . + 4 + (0x63 << 2)
label_413fb4:
    if (ctx->pc == 0x413FB4u) {
        ctx->pc = 0x413FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413FB0u;
        // 0x413fb4: 0xae4202e0  sw          $v0, 0x2E0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413FB8u;
        goto label_413fb8;
    }
    ctx->pc = 0x413FB0u;
    {
        const bool branch_taken_0x413fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x413FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413FB0u;
        // 0x413fb4: 0xae4202e0  sw          $v0, 0x2E0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413fb0) {
            ctx->pc = 0x414140u;
            goto label_414140;
        }
    }
    ctx->pc = 0x413FB8u;
label_413fb8:
    // 0x413fb8: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x413fb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_413fbc:
    // 0x413fbc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x413fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_413fc0:
    // 0x413fc0: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x413fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_413fc4:
    // 0x413fc4: 0xc6e00144  lwc1        $f0, 0x144($s7)
    ctx->pc = 0x413fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_413fc8:
    // 0x413fc8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x413fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_413fcc:
    // 0x413fcc: 0x8ee40140  lw          $a0, 0x140($s7)
    ctx->pc = 0x413fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 320)));
label_413fd0:
    // 0x413fd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x413fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_413fd4:
    // 0x413fd4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x413fd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_413fd8:
    // 0x413fd8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x413fd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_413fdc:
    // 0x413fdc: 0x46000502  mul.s       $f20, $f0, $f0
    ctx->pc = 0x413fdcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_413fe0:
    // 0x413fe0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x413fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_413fe4:
    // 0x413fe4: 0x10800056  beqz        $a0, . + 4 + (0x56 << 2)
label_413fe8:
    if (ctx->pc == 0x413FE8u) {
        ctx->pc = 0x413FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413FE4u;
        // 0x413fe8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413FECu;
        goto label_413fec;
    }
    ctx->pc = 0x413FE4u;
    {
        const bool branch_taken_0x413fe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x413FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413FE4u;
        // 0x413fe8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413fe4) {
            ctx->pc = 0x414140u;
            goto label_414140;
        }
    }
    ctx->pc = 0x413FECu;
label_413fec:
    // 0x413fec: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x413fecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_413ff0:
    // 0x413ff0: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x413ff0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_413ff4:
    // 0x413ff4: 0x265e0040  addiu       $fp, $s2, 0x40
    ctx->pc = 0x413ff4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_413ff8:
    // 0x413ff8: 0x26f30010  addiu       $s3, $s7, 0x10
    ctx->pc = 0x413ff8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_413ffc:
    // 0x413ffc: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x413ffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_414000:
    // 0x414000: 0x26f00110  addiu       $s0, $s7, 0x110
    ctx->pc = 0x414000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 272));
label_414004:
    // 0x414004: 0x0  nop
    ctx->pc = 0x414004u;
    // NOP
label_414008:
    // 0x414008: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x414008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41400c:
    // 0x41400c: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
label_414010:
    if (ctx->pc == 0x414010u) {
        ctx->pc = 0x414010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41400Cu;
        // 0x414010: 0x8ee20140  lw          $v0, 0x140($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414014u;
        goto label_414014;
    }
    ctx->pc = 0x41400Cu;
    {
        const bool branch_taken_0x41400c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41400c) {
            ctx->pc = 0x414010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41400Cu;
            // 0x414010: 0x8ee20140  lw          $v0, 0x140($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x414124u;
            goto label_414124;
        }
    }
    ctx->pc = 0x414014u;
label_414014:
    // 0x414014: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x414014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_414018:
    // 0x414018: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x414018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41401c:
    // 0x41401c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x41401cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_414020:
    // 0x414020: 0xc0cdbb8  jal         func_336EE0
label_414024:
    if (ctx->pc == 0x414024u) {
        ctx->pc = 0x414024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414020u;
        // 0x414024: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414028u;
        goto label_414028;
    }
    ctx->pc = 0x414020u;
    SET_GPR_U32(ctx, 31, 0x414028u);
    ctx->pc = 0x414024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414020u;
    // 0x414024: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336EE0u, 0x414020u, 0x414028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414028u;
label_414028:
    // 0x414028: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x414028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41402c:
    // 0x41402c: 0xc0cdb38  jal         func_336CE0
label_414030:
    if (ctx->pc == 0x414030u) {
        ctx->pc = 0x414030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41402Cu;
        // 0x414030: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414034u;
        goto label_414034;
    }
    ctx->pc = 0x41402Cu;
    SET_GPR_U32(ctx, 31, 0x414034u);
    ctx->pc = 0x414030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41402Cu;
    // 0x414030: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x41402Cu, 0x414034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414034u;
label_414034:
    // 0x414034: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x414034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_414038:
    // 0x414038: 0x0  nop
    ctx->pc = 0x414038u;
    // NOP
label_41403c:
    // 0x41403c: 0x45030039  bc1tl       . + 4 + (0x39 << 2)
label_414040:
    if (ctx->pc == 0x414040u) {
        ctx->pc = 0x414040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41403Cu;
        // 0x414040: 0x8ee20140  lw          $v0, 0x140($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414044u;
        goto label_414044;
    }
    ctx->pc = 0x41403Cu;
    {
        const bool branch_taken_0x41403c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x41403c) {
            ctx->pc = 0x414040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41403Cu;
            // 0x414040: 0x8ee20140  lw          $v0, 0x140($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x414124u;
            goto label_414124;
        }
    }
    ctx->pc = 0x414044u;
label_414044:
    // 0x414044: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x414044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
label_414048:
    // 0x414048: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x414048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_41404c:
    // 0x41404c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_414050:
    if (ctx->pc == 0x414050u) {
        ctx->pc = 0x414050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41404Cu;
        // 0x414050: 0xae4302e0  sw          $v1, 0x2E0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 736), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414054u;
        goto label_414054;
    }
    ctx->pc = 0x41404Cu;
    {
        const bool branch_taken_0x41404c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x414050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41404Cu;
        // 0x414050: 0xae4302e0  sw          $v1, 0x2E0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 736), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41404c) {
            ctx->pc = 0x414140u;
            goto label_414140;
        }
    }
    ctx->pc = 0x414054u;
label_414054:
    // 0x414054: 0x8242002c  lb          $v0, 0x2C($s2)
    ctx->pc = 0x414054u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_414058:
    // 0x414058: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
label_41405c:
    if (ctx->pc == 0x41405Cu) {
        ctx->pc = 0x414060u;
        goto label_414060;
    }
    ctx->pc = 0x414058u;
    {
        const bool branch_taken_0x414058 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x414058) {
            ctx->pc = 0x4140A0u;
            goto label_4140a0;
        }
    }
    ctx->pc = 0x414060u;
label_414060:
    // 0x414060: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_414064:
    if (ctx->pc == 0x414064u) {
        ctx->pc = 0x414064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414060u;
        // 0x414064: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414068u;
        goto label_414068;
    }
    ctx->pc = 0x414060u;
    {
        const bool branch_taken_0x414060 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x414064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414060u;
        // 0x414064: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414060) {
            ctx->pc = 0x414074u;
            goto label_414074;
        }
    }
    ctx->pc = 0x414068u;
label_414068:
    // 0x414068: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x414068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_41406c:
    // 0x41406c: 0x10000002  b           . + 4 + (0x2 << 2)
label_414070:
    if (ctx->pc == 0x414070u) {
        ctx->pc = 0x414070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41406Cu;
        // 0x414070: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414074u;
        goto label_414074;
    }
    ctx->pc = 0x41406Cu;
    {
        const bool branch_taken_0x41406c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x414070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41406Cu;
        // 0x414070: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41406c) {
            ctx->pc = 0x414078u;
            goto label_414078;
        }
    }
    ctx->pc = 0x414074u;
label_414074:
    // 0x414074: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x414074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_414078:
    // 0x414078: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x414078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_41407c:
    // 0x41407c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x41407cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_414080:
    // 0x414080: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x414080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_414084:
    // 0x414084: 0x40f809  jalr        $v0
label_414088:
    if (ctx->pc == 0x414088u) {
        ctx->pc = 0x414088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414084u;
        // 0x414088: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41408Cu;
        goto label_41408c;
    }
    ctx->pc = 0x414084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41408Cu);
        ctx->pc = 0x414088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414084u;
        // 0x414088: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414084u, 0x41408Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41408Cu;
label_41408c:
    // 0x41408c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x41408cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_414090:
    // 0x414090: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_414094:
    if (ctx->pc == 0x414094u) {
        ctx->pc = 0x414098u;
        goto label_414098;
    }
    ctx->pc = 0x414090u;
    {
        const bool branch_taken_0x414090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x414090) {
            ctx->pc = 0x4140A0u;
            goto label_4140a0;
        }
    }
    ctx->pc = 0x414098u;
label_414098:
    // 0x414098: 0xc0a35f6  jal         func_28D7D8
label_41409c:
    if (ctx->pc == 0x41409Cu) {
        ctx->pc = 0x41409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414098u;
        // 0x41409c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4140A0u;
        goto label_4140a0;
    }
    ctx->pc = 0x414098u;
    SET_GPR_U32(ctx, 31, 0x4140A0u);
    ctx->pc = 0x41409Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414098u;
    // 0x41409c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x414098u, 0x4140A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4140A0u;
label_4140a0:
    // 0x4140a0: 0xc0a4e54  jal         func_293950
label_4140a4:
    if (ctx->pc == 0x4140A4u) {
        ctx->pc = 0x4140A8u;
        goto label_4140a8;
    }
    ctx->pc = 0x4140A0u;
    SET_GPR_U32(ctx, 31, 0x4140A8u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x4140A0u, 0x4140A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4140A8u;
label_4140a8:
    // 0x4140a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4140a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4140ac:
    // 0x4140ac: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_4140b0:
    if (ctx->pc == 0x4140B0u) {
        ctx->pc = 0x4140B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4140ACu;
        // 0x4140b0: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4140B4u;
        goto label_4140b4;
    }
    ctx->pc = 0x4140ACu;
    {
        const bool branch_taken_0x4140ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4140B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4140ACu;
        // 0x4140b0: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4140ac) {
            ctx->pc = 0x4140C4u;
            goto label_4140c4;
        }
    }
    ctx->pc = 0x4140B4u;
label_4140b4:
    // 0x4140b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4140b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4140b8:
    // 0x4140b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4140b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4140bc:
    // 0x4140bc: 0xc0be4d6  jal         func_2F9358
label_4140c0:
    if (ctx->pc == 0x4140C0u) {
        ctx->pc = 0x4140C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4140BCu;
        // 0x4140c0: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4140C4u;
        goto label_4140c4;
    }
    ctx->pc = 0x4140BCu;
    SET_GPR_U32(ctx, 31, 0x4140C4u);
    ctx->pc = 0x4140C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4140BCu;
    // 0x4140c0: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9358u, 0x4140BCu, 0x4140C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4140C4u;
label_4140c4:
    // 0x4140c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4140c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4140c8:
    // 0x4140c8: 0xc0a35d6  jal         func_28D758
label_4140cc:
    if (ctx->pc == 0x4140CCu) {
        ctx->pc = 0x4140CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4140C8u;
        // 0x4140cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4140D0u;
        goto label_4140d0;
    }
    ctx->pc = 0x4140C8u;
    SET_GPR_U32(ctx, 31, 0x4140D0u);
    ctx->pc = 0x4140CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4140C8u;
    // 0x4140cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x4140C8u, 0x4140D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4140D0u;
label_4140d0:
    // 0x4140d0: 0x8242002c  lb          $v0, 0x2C($s2)
    ctx->pc = 0x4140d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_4140d4:
    // 0x4140d4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_4140d8:
    if (ctx->pc == 0x4140D8u) {
        ctx->pc = 0x4140D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4140D4u;
        // 0x4140d8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4140DCu;
        goto label_4140dc;
    }
    ctx->pc = 0x4140D4u;
    {
        const bool branch_taken_0x4140d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4140D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4140D4u;
        // 0x4140d8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4140d4) {
            ctx->pc = 0x4140E8u;
            goto label_4140e8;
        }
    }
    ctx->pc = 0x4140DCu;
label_4140dc:
    // 0x4140dc: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x4140dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_4140e0:
    // 0x4140e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_4140e4:
    if (ctx->pc == 0x4140E4u) {
        ctx->pc = 0x4140E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4140E0u;
        // 0x4140e4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4140E8u;
        goto label_4140e8;
    }
    ctx->pc = 0x4140E0u;
    {
        const bool branch_taken_0x4140e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4140E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4140E0u;
        // 0x4140e4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4140e0) {
            ctx->pc = 0x4140ECu;
            goto label_4140ec;
        }
    }
    ctx->pc = 0x4140E8u;
label_4140e8:
    // 0x4140e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4140e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4140ec:
    // 0x4140ec: 0x52000015  beql        $s0, $zero, . + 4 + (0x15 << 2)
label_4140f0:
    if (ctx->pc == 0x4140F0u) {
        ctx->pc = 0x4140F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4140ECu;
        // 0x4140f0: 0x8fb0023c  lw          $s0, 0x23C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4140F4u;
        goto label_4140f4;
    }
    ctx->pc = 0x4140ECu;
    {
        const bool branch_taken_0x4140ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4140ec) {
            ctx->pc = 0x4140F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4140ECu;
            // 0x4140f0: 0x8fb0023c  lw          $s0, 0x23C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x414144u;
            goto label_414144;
        }
    }
    ctx->pc = 0x4140F4u;
label_4140f4:
    // 0x4140f4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4140f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4140f8:
    // 0x4140f8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x4140f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_4140fc:
    // 0x4140fc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4140fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_414100:
    // 0x414100: 0x40f809  jalr        $v0
label_414104:
    if (ctx->pc == 0x414104u) {
        ctx->pc = 0x414104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414100u;
        // 0x414104: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414108u;
        goto label_414108;
    }
    ctx->pc = 0x414100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414108u);
        ctx->pc = 0x414104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414100u;
        // 0x414104: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414100u, 0x414108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414108u;
label_414108:
    // 0x414108: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x414108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_41410c:
    // 0x41410c: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
label_414110:
    if (ctx->pc == 0x414110u) {
        ctx->pc = 0x414110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41410Cu;
        // 0x414110: 0x8fb0023c  lw          $s0, 0x23C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414114u;
        goto label_414114;
    }
    ctx->pc = 0x41410Cu;
    {
        const bool branch_taken_0x41410c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x41410c) {
            ctx->pc = 0x414110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41410Cu;
            // 0x414110: 0x8fb0023c  lw          $s0, 0x23C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x414144u;
            goto label_414144;
        }
    }
    ctx->pc = 0x414114u;
label_414114:
    // 0x414114: 0xc0be6a0  jal         func_2F9A80
label_414118:
    if (ctx->pc == 0x414118u) {
        ctx->pc = 0x414118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414114u;
        // 0x414118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41411Cu;
        goto label_41411c;
    }
    ctx->pc = 0x414114u;
    SET_GPR_U32(ctx, 31, 0x41411Cu);
    ctx->pc = 0x414118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414114u;
    // 0x414118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9A80u, 0x414114u, 0x41411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41411Cu;
label_41411c:
    // 0x41411c: 0x10000009  b           . + 4 + (0x9 << 2)
label_414120:
    if (ctx->pc == 0x414120u) {
        ctx->pc = 0x414120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41411Cu;
        // 0x414120: 0x8fb0023c  lw          $s0, 0x23C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414124u;
        goto label_414124;
    }
    ctx->pc = 0x41411Cu;
    {
        const bool branch_taken_0x41411c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x414120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41411Cu;
        // 0x414120: 0x8fb0023c  lw          $s0, 0x23C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41411c) {
            ctx->pc = 0x414144u;
            goto label_414144;
        }
    }
    ctx->pc = 0x414124u;
label_414124:
    // 0x414124: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x414124u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_414128:
    // 0x414128: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x414128u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_41412c:
    // 0x41412c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x41412cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_414130:
    // 0x414130: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x414130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_414134:
    // 0x414134: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x414134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_414138:
    // 0x414138: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
label_41413c:
    if (ctx->pc == 0x41413Cu) {
        ctx->pc = 0x41413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414138u;
        // 0x41413c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414140u;
        goto label_414140;
    }
    ctx->pc = 0x414138u;
    {
        const bool branch_taken_0x414138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414138u;
        // 0x41413c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414138) {
            ctx->pc = 0x414008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_414008;
        }
    }
    ctx->pc = 0x414140u;
label_414140:
    // 0x414140: 0x8fb0023c  lw          $s0, 0x23C($sp)
    ctx->pc = 0x414140u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_414144:
    // 0x414144: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x414144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_414148:
    // 0x414148: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x414148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_41414c:
    // 0x41414c: 0x1440ff80  bnez        $v0, . + 4 + (-0x80 << 2)
label_414150:
    if (ctx->pc == 0x414150u) {
        ctx->pc = 0x414150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41414Cu;
        // 0x414150: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414154u;
        goto label_414154;
    }
    ctx->pc = 0x41414Cu;
    {
        const bool branch_taken_0x41414c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x414150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41414Cu;
        // 0x414150: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41414c) {
            ctx->pc = 0x413F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_413f50;
        }
    }
    ctx->pc = 0x414154u;
label_414154:
    // 0x414154: 0x7bb002d0  lq          $s0, 0x2D0($sp)
    ctx->pc = 0x414154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_414158:
    // 0x414158: 0x7bb102c0  lq          $s1, 0x2C0($sp)
    ctx->pc = 0x414158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_41415c:
    // 0x41415c: 0x7bb202b0  lq          $s2, 0x2B0($sp)
    ctx->pc = 0x41415cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_414160:
    // 0x414160: 0x7bb302a0  lq          $s3, 0x2A0($sp)
    ctx->pc = 0x414160u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_414164:
    // 0x414164: 0x7bb40290  lq          $s4, 0x290($sp)
    ctx->pc = 0x414164u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_414168:
    // 0x414168: 0x7bb50280  lq          $s5, 0x280($sp)
    ctx->pc = 0x414168u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_41416c:
    // 0x41416c: 0x7bb60270  lq          $s6, 0x270($sp)
    ctx->pc = 0x41416cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_414170:
    // 0x414170: 0x7bb70260  lq          $s7, 0x260($sp)
    ctx->pc = 0x414170u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_414174:
    // 0x414174: 0x7bbe0250  lq          $fp, 0x250($sp)
    ctx->pc = 0x414174u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_414178:
    // 0x414178: 0xdfbf0240  ld          $ra, 0x240($sp)
    ctx->pc = 0x414178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 576)));
label_41417c:
    // 0x41417c: 0xc7b402e0  lwc1        $f20, 0x2E0($sp)
    ctx->pc = 0x41417cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_414180:
    // 0x414180: 0x3e00008  jr          $ra
label_414184:
    if (ctx->pc == 0x414184u) {
        ctx->pc = 0x414184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414180u;
        // 0x414184: 0x27bd02f0  addiu       $sp, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414188u;
        goto label_fallthrough_0x414180;
    }
    ctx->pc = 0x414180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414180u;
        // 0x414184: 0x27bd02f0  addiu       $sp, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x414180:
    ctx->pc = 0x414188u;
}
