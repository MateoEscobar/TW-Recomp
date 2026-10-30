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

// Function: sub_00184EB0
// Address: 0x184eb0 - 0x1852d8
void sub_00184EB0_0x184eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184EB0_0x184eb0");
#endif

    switch (ctx->pc) {
        case 0x184eb0u: goto label_184eb0;
        case 0x184eb4u: goto label_184eb4;
        case 0x184eb8u: goto label_184eb8;
        case 0x184ebcu: goto label_184ebc;
        case 0x184ec0u: goto label_184ec0;
        case 0x184ec4u: goto label_184ec4;
        case 0x184ec8u: goto label_184ec8;
        case 0x184eccu: goto label_184ecc;
        case 0x184ed0u: goto label_184ed0;
        case 0x184ed4u: goto label_184ed4;
        case 0x184ed8u: goto label_184ed8;
        case 0x184edcu: goto label_184edc;
        case 0x184ee0u: goto label_184ee0;
        case 0x184ee4u: goto label_184ee4;
        case 0x184ee8u: goto label_184ee8;
        case 0x184eecu: goto label_184eec;
        case 0x184ef0u: goto label_184ef0;
        case 0x184ef4u: goto label_184ef4;
        case 0x184ef8u: goto label_184ef8;
        case 0x184efcu: goto label_184efc;
        case 0x184f00u: goto label_184f00;
        case 0x184f04u: goto label_184f04;
        case 0x184f08u: goto label_184f08;
        case 0x184f0cu: goto label_184f0c;
        case 0x184f10u: goto label_184f10;
        case 0x184f14u: goto label_184f14;
        case 0x184f18u: goto label_184f18;
        case 0x184f1cu: goto label_184f1c;
        case 0x184f20u: goto label_184f20;
        case 0x184f24u: goto label_184f24;
        case 0x184f28u: goto label_184f28;
        case 0x184f2cu: goto label_184f2c;
        case 0x184f30u: goto label_184f30;
        case 0x184f34u: goto label_184f34;
        case 0x184f38u: goto label_184f38;
        case 0x184f3cu: goto label_184f3c;
        case 0x184f40u: goto label_184f40;
        case 0x184f44u: goto label_184f44;
        case 0x184f48u: goto label_184f48;
        case 0x184f4cu: goto label_184f4c;
        case 0x184f50u: goto label_184f50;
        case 0x184f54u: goto label_184f54;
        case 0x184f58u: goto label_184f58;
        case 0x184f5cu: goto label_184f5c;
        case 0x184f60u: goto label_184f60;
        case 0x184f64u: goto label_184f64;
        case 0x184f68u: goto label_184f68;
        case 0x184f6cu: goto label_184f6c;
        case 0x184f70u: goto label_184f70;
        case 0x184f74u: goto label_184f74;
        case 0x184f78u: goto label_184f78;
        case 0x184f7cu: goto label_184f7c;
        case 0x184f80u: goto label_184f80;
        case 0x184f84u: goto label_184f84;
        case 0x184f88u: goto label_184f88;
        case 0x184f8cu: goto label_184f8c;
        case 0x184f90u: goto label_184f90;
        case 0x184f94u: goto label_184f94;
        case 0x184f98u: goto label_184f98;
        case 0x184f9cu: goto label_184f9c;
        case 0x184fa0u: goto label_184fa0;
        case 0x184fa4u: goto label_184fa4;
        case 0x184fa8u: goto label_184fa8;
        case 0x184facu: goto label_184fac;
        case 0x184fb0u: goto label_184fb0;
        case 0x184fb4u: goto label_184fb4;
        case 0x184fb8u: goto label_184fb8;
        case 0x184fbcu: goto label_184fbc;
        case 0x184fc0u: goto label_184fc0;
        case 0x184fc4u: goto label_184fc4;
        case 0x184fc8u: goto label_184fc8;
        case 0x184fccu: goto label_184fcc;
        case 0x184fd0u: goto label_184fd0;
        case 0x184fd4u: goto label_184fd4;
        case 0x184fd8u: goto label_184fd8;
        case 0x184fdcu: goto label_184fdc;
        case 0x184fe0u: goto label_184fe0;
        case 0x184fe4u: goto label_184fe4;
        case 0x184fe8u: goto label_184fe8;
        case 0x184fecu: goto label_184fec;
        case 0x184ff0u: goto label_184ff0;
        case 0x184ff4u: goto label_184ff4;
        case 0x184ff8u: goto label_184ff8;
        case 0x184ffcu: goto label_184ffc;
        case 0x185000u: goto label_185000;
        case 0x185004u: goto label_185004;
        case 0x185008u: goto label_185008;
        case 0x18500cu: goto label_18500c;
        case 0x185010u: goto label_185010;
        case 0x185014u: goto label_185014;
        case 0x185018u: goto label_185018;
        case 0x18501cu: goto label_18501c;
        case 0x185020u: goto label_185020;
        case 0x185024u: goto label_185024;
        case 0x185028u: goto label_185028;
        case 0x18502cu: goto label_18502c;
        case 0x185030u: goto label_185030;
        case 0x185034u: goto label_185034;
        case 0x185038u: goto label_185038;
        case 0x18503cu: goto label_18503c;
        case 0x185040u: goto label_185040;
        case 0x185044u: goto label_185044;
        case 0x185048u: goto label_185048;
        case 0x18504cu: goto label_18504c;
        case 0x185050u: goto label_185050;
        case 0x185054u: goto label_185054;
        case 0x185058u: goto label_185058;
        case 0x18505cu: goto label_18505c;
        case 0x185060u: goto label_185060;
        case 0x185064u: goto label_185064;
        case 0x185068u: goto label_185068;
        case 0x18506cu: goto label_18506c;
        case 0x185070u: goto label_185070;
        case 0x185074u: goto label_185074;
        case 0x185078u: goto label_185078;
        case 0x18507cu: goto label_18507c;
        case 0x185080u: goto label_185080;
        case 0x185084u: goto label_185084;
        case 0x185088u: goto label_185088;
        case 0x18508cu: goto label_18508c;
        case 0x185090u: goto label_185090;
        case 0x185094u: goto label_185094;
        case 0x185098u: goto label_185098;
        case 0x18509cu: goto label_18509c;
        case 0x1850a0u: goto label_1850a0;
        case 0x1850a4u: goto label_1850a4;
        case 0x1850a8u: goto label_1850a8;
        case 0x1850acu: goto label_1850ac;
        case 0x1850b0u: goto label_1850b0;
        case 0x1850b4u: goto label_1850b4;
        case 0x1850b8u: goto label_1850b8;
        case 0x1850bcu: goto label_1850bc;
        case 0x1850c0u: goto label_1850c0;
        case 0x1850c4u: goto label_1850c4;
        case 0x1850c8u: goto label_1850c8;
        case 0x1850ccu: goto label_1850cc;
        case 0x1850d0u: goto label_1850d0;
        case 0x1850d4u: goto label_1850d4;
        case 0x1850d8u: goto label_1850d8;
        case 0x1850dcu: goto label_1850dc;
        case 0x1850e0u: goto label_1850e0;
        case 0x1850e4u: goto label_1850e4;
        case 0x1850e8u: goto label_1850e8;
        case 0x1850ecu: goto label_1850ec;
        case 0x1850f0u: goto label_1850f0;
        case 0x1850f4u: goto label_1850f4;
        case 0x1850f8u: goto label_1850f8;
        case 0x1850fcu: goto label_1850fc;
        case 0x185100u: goto label_185100;
        case 0x185104u: goto label_185104;
        case 0x185108u: goto label_185108;
        case 0x18510cu: goto label_18510c;
        case 0x185110u: goto label_185110;
        case 0x185114u: goto label_185114;
        case 0x185118u: goto label_185118;
        case 0x18511cu: goto label_18511c;
        case 0x185120u: goto label_185120;
        case 0x185124u: goto label_185124;
        case 0x185128u: goto label_185128;
        case 0x18512cu: goto label_18512c;
        case 0x185130u: goto label_185130;
        case 0x185134u: goto label_185134;
        case 0x185138u: goto label_185138;
        case 0x18513cu: goto label_18513c;
        case 0x185140u: goto label_185140;
        case 0x185144u: goto label_185144;
        case 0x185148u: goto label_185148;
        case 0x18514cu: goto label_18514c;
        case 0x185150u: goto label_185150;
        case 0x185154u: goto label_185154;
        case 0x185158u: goto label_185158;
        case 0x18515cu: goto label_18515c;
        case 0x185160u: goto label_185160;
        case 0x185164u: goto label_185164;
        case 0x185168u: goto label_185168;
        case 0x18516cu: goto label_18516c;
        case 0x185170u: goto label_185170;
        case 0x185174u: goto label_185174;
        case 0x185178u: goto label_185178;
        case 0x18517cu: goto label_18517c;
        case 0x185180u: goto label_185180;
        case 0x185184u: goto label_185184;
        case 0x185188u: goto label_185188;
        case 0x18518cu: goto label_18518c;
        case 0x185190u: goto label_185190;
        case 0x185194u: goto label_185194;
        case 0x185198u: goto label_185198;
        case 0x18519cu: goto label_18519c;
        case 0x1851a0u: goto label_1851a0;
        case 0x1851a4u: goto label_1851a4;
        case 0x1851a8u: goto label_1851a8;
        case 0x1851acu: goto label_1851ac;
        case 0x1851b0u: goto label_1851b0;
        case 0x1851b4u: goto label_1851b4;
        case 0x1851b8u: goto label_1851b8;
        case 0x1851bcu: goto label_1851bc;
        case 0x1851c0u: goto label_1851c0;
        case 0x1851c4u: goto label_1851c4;
        case 0x1851c8u: goto label_1851c8;
        case 0x1851ccu: goto label_1851cc;
        case 0x1851d0u: goto label_1851d0;
        case 0x1851d4u: goto label_1851d4;
        case 0x1851d8u: goto label_1851d8;
        case 0x1851dcu: goto label_1851dc;
        case 0x1851e0u: goto label_1851e0;
        case 0x1851e4u: goto label_1851e4;
        case 0x1851e8u: goto label_1851e8;
        case 0x1851ecu: goto label_1851ec;
        case 0x1851f0u: goto label_1851f0;
        case 0x1851f4u: goto label_1851f4;
        case 0x1851f8u: goto label_1851f8;
        case 0x1851fcu: goto label_1851fc;
        case 0x185200u: goto label_185200;
        case 0x185204u: goto label_185204;
        case 0x185208u: goto label_185208;
        case 0x18520cu: goto label_18520c;
        case 0x185210u: goto label_185210;
        case 0x185214u: goto label_185214;
        case 0x185218u: goto label_185218;
        case 0x18521cu: goto label_18521c;
        case 0x185220u: goto label_185220;
        case 0x185224u: goto label_185224;
        case 0x185228u: goto label_185228;
        case 0x18522cu: goto label_18522c;
        case 0x185230u: goto label_185230;
        case 0x185234u: goto label_185234;
        case 0x185238u: goto label_185238;
        case 0x18523cu: goto label_18523c;
        case 0x185240u: goto label_185240;
        case 0x185244u: goto label_185244;
        case 0x185248u: goto label_185248;
        case 0x18524cu: goto label_18524c;
        case 0x185250u: goto label_185250;
        case 0x185254u: goto label_185254;
        case 0x185258u: goto label_185258;
        case 0x18525cu: goto label_18525c;
        case 0x185260u: goto label_185260;
        case 0x185264u: goto label_185264;
        case 0x185268u: goto label_185268;
        case 0x18526cu: goto label_18526c;
        case 0x185270u: goto label_185270;
        case 0x185274u: goto label_185274;
        case 0x185278u: goto label_185278;
        case 0x18527cu: goto label_18527c;
        case 0x185280u: goto label_185280;
        case 0x185284u: goto label_185284;
        case 0x185288u: goto label_185288;
        case 0x18528cu: goto label_18528c;
        case 0x185290u: goto label_185290;
        case 0x185294u: goto label_185294;
        case 0x185298u: goto label_185298;
        case 0x18529cu: goto label_18529c;
        case 0x1852a0u: goto label_1852a0;
        case 0x1852a4u: goto label_1852a4;
        case 0x1852a8u: goto label_1852a8;
        case 0x1852acu: goto label_1852ac;
        case 0x1852b0u: goto label_1852b0;
        case 0x1852b4u: goto label_1852b4;
        case 0x1852b8u: goto label_1852b8;
        case 0x1852bcu: goto label_1852bc;
        case 0x1852c0u: goto label_1852c0;
        case 0x1852c4u: goto label_1852c4;
        case 0x1852c8u: goto label_1852c8;
        case 0x1852ccu: goto label_1852cc;
        case 0x1852d0u: goto label_1852d0;
        case 0x1852d4u: goto label_1852d4;
        default: break;
    }

    ctx->pc = 0x184eb0u;

label_184eb0:
    // 0x184eb0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x184eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_184eb4:
    // 0x184eb4: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x184eb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_184eb8:
    // 0x184eb8: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x184eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_184ebc:
    // 0x184ebc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x184ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184ec0:
    // 0x184ec0: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x184ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
label_184ec4:
    // 0x184ec4: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x184ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
label_184ec8:
    // 0x184ec8: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x184ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_184ecc:
    // 0x184ecc: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x184eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
label_184ed0:
    // 0x184ed0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x184ed0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_184ed4:
    // 0x184ed4: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x184ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
label_184ed8:
    // 0x184ed8: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x184ed8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_184edc:
    // 0x184edc: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x184edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
label_184ee0:
    // 0x184ee0: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x184ee0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
label_184ee4:
    // 0x184ee4: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x184ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
label_184ee8:
    // 0x184ee8: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x184ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
label_184eec:
    // 0x184eec: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x184eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
label_184ef0:
    // 0x184ef0: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x184ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
label_184ef4:
    // 0x184ef4: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x184ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_184ef8:
    // 0x184ef8: 0xc061e6e  jal         func_1879B8
label_184efc:
    if (ctx->pc == 0x184EFCu) {
        ctx->pc = 0x184EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184EF8u;
        // 0x184efc: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184F00u;
        goto label_184f00;
    }
    ctx->pc = 0x184EF8u;
    SET_GPR_U32(ctx, 31, 0x184F00u);
    ctx->pc = 0x184EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184EF8u;
    // 0x184efc: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x184EF8u, 0x184F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184F00u;
label_184f00:
    // 0x184f00: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x184f00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_184f04:
    // 0x184f04: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x184f04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184f08:
    // 0x184f08: 0x8e05b9b8  lw          $a1, -0x4648($s0)
    ctx->pc = 0x184f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949304)));
label_184f0c:
    // 0x184f0c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x184f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_184f10:
    // 0x184f10: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x184f10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_184f14:
    // 0x184f14: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x184f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_184f18:
    // 0x184f18: 0x40f809  jalr        $v0
label_184f1c:
    if (ctx->pc == 0x184F1Cu) {
        ctx->pc = 0x184F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F18u;
        // 0x184f1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184F20u;
        goto label_184f20;
    }
    ctx->pc = 0x184F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184F20u);
        ctx->pc = 0x184F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F18u;
        // 0x184f1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184F18u, 0x184F20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x184F20u;
label_184f20:
    // 0x184f20: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x184f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_184f24:
    // 0x184f24: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x184f24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_184f28:
    // 0x184f28: 0x24762be8  addiu       $s6, $v1, 0x2BE8
    ctx->pc = 0x184f28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 11240));
label_184f2c:
    // 0x184f2c: 0x24682be8  addiu       $t0, $v1, 0x2BE8
    ctx->pc = 0x184f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 11240));
label_184f30:
    // 0x184f30: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x184f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_184f34:
    // 0x184f34: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x184f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_184f38:
    // 0x184f38: 0x8906000b  lwl         $a2, 0xB($t0)
    ctx->pc = 0x184f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
label_184f3c:
    // 0x184f3c: 0x99060008  lwr         $a2, 0x8($t0)
    ctx->pc = 0x184f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_184f40:
    // 0x184f40: 0x8107000c  lb          $a3, 0xC($t0)
    ctx->pc = 0x184f40u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 12)));
label_184f44:
    // 0x184f44: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x184f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_184f48:
    // 0x184f48: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x184f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_184f4c:
    // 0x184f4c: 0xaba6000b  swl         $a2, 0xB($sp)
    ctx->pc = 0x184f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_184f50:
    // 0x184f50: 0xbba60008  swr         $a2, 0x8($sp)
    ctx->pc = 0x184f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_184f54:
    // 0x184f54: 0xa3a7000c  sb          $a3, 0xC($sp)
    ctx->pc = 0x184f54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 7));
label_184f58:
    // 0x184f58: 0x8102000d  lb          $v0, 0xD($t0)
    ctx->pc = 0x184f58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 13)));
label_184f5c:
    // 0x184f5c: 0x8106000e  lb          $a2, 0xE($t0)
    ctx->pc = 0x184f5cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 14)));
label_184f60:
    // 0x184f60: 0xa3a2000d  sb          $v0, 0xD($sp)
    ctx->pc = 0x184f60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 13), (uint8_t)GPR_U32(ctx, 2));
label_184f64:
    // 0x184f64: 0xa3a6000e  sb          $a2, 0xE($sp)
    ctx->pc = 0x184f64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 14), (uint8_t)GPR_U32(ctx, 6));
label_184f68:
    // 0x184f68: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x184f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
label_184f6c:
    // 0x184f6c: 0xc050fda  jal         func_143F68
label_184f70:
    if (ctx->pc == 0x184F70u) {
        ctx->pc = 0x184F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F6Cu;
        // 0x184f70: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184F74u;
        goto label_184f74;
    }
    ctx->pc = 0x184F6Cu;
    SET_GPR_U32(ctx, 31, 0x184F74u);
    ctx->pc = 0x184F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184F6Cu;
    // 0x184f70: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x184F6Cu, 0x184F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184F74u;
label_184f74:
    // 0x184f74: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x184f74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_184f78:
    // 0x184f78: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x184f78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_184f7c:
    // 0x184f7c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x184f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_184f80:
    // 0x184f80: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x184f80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184f84:
    // 0x184f84: 0x24c62be0  addiu       $a2, $a2, 0x2BE0
    ctx->pc = 0x184f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11232));
label_184f88:
    // 0x184f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184f8c:
    // 0x184f8c: 0xc10ca04  jal         func_432810
label_184f90:
    if (ctx->pc == 0x184F90u) {
        ctx->pc = 0x184F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F8Cu;
        // 0x184f90: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184F94u;
        goto label_184f94;
    }
    ctx->pc = 0x184F8Cu;
    SET_GPR_U32(ctx, 31, 0x184F94u);
    ctx->pc = 0x184F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184F8Cu;
    // 0x184f90: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x184F8Cu, 0x184F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184F94u;
label_184f94:
    // 0x184f94: 0x8e24b788  lw          $a0, -0x4878($s1)
    ctx->pc = 0x184f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948744)));
label_184f98:
    // 0x184f98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x184f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184f9c:
    // 0x184f9c: 0x8c860090  lw          $a2, 0x90($a0)
    ctx->pc = 0x184f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_184fa0:
    // 0x184fa0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x184fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_184fa4:
    // 0x184fa4: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x184fa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_184fa8:
    // 0x184fa8: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x184fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_184fac:
    // 0x184fac: 0x40f809  jalr        $v0
label_184fb0:
    if (ctx->pc == 0x184FB0u) {
        ctx->pc = 0x184FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FACu;
        // 0x184fb0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184FB4u;
        goto label_184fb4;
    }
    ctx->pc = 0x184FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184FB4u);
        ctx->pc = 0x184FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FACu;
        // 0x184fb0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184FACu, 0x184FB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x184FB4u;
label_184fb4:
    // 0x184fb4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x184fb4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184fb8:
    // 0x184fb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x184fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184fbc:
    // 0x184fbc: 0x8e22b788  lw          $v0, -0x4878($s1)
    ctx->pc = 0x184fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948744)));
label_184fc0:
    // 0x184fc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x184fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184fc4:
    // 0x184fc4: 0x8c470090  lw          $a3, 0x90($v0)
    ctx->pc = 0x184fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_184fc8:
    // 0x184fc8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x184fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_184fcc:
    // 0x184fcc: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x184fccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_184fd0:
    // 0x184fd0: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x184fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_184fd4:
    // 0x184fd4: 0x40f809  jalr        $v0
label_184fd8:
    if (ctx->pc == 0x184FD8u) {
        ctx->pc = 0x184FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FD4u;
        // 0x184fd8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184FDCu;
        goto label_184fdc;
    }
    ctx->pc = 0x184FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184FDCu);
        ctx->pc = 0x184FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FD4u;
        // 0x184fd8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184FD4u, 0x184FDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x184FDCu;
label_184fdc:
    // 0x184fdc: 0x8e645340  lw          $a0, 0x5340($s3)
    ctx->pc = 0x184fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21312)));
label_184fe0:
    // 0x184fe0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x184fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184fe4:
    // 0x184fe4: 0xc0552b8  jal         func_154AE0
label_184fe8:
    if (ctx->pc == 0x184FE8u) {
        ctx->pc = 0x184FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FE4u;
        // 0x184fe8: 0xafa200c4  sw          $v0, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184FECu;
        goto label_184fec;
    }
    ctx->pc = 0x184FE4u;
    SET_GPR_U32(ctx, 31, 0x184FECu);
    ctx->pc = 0x184FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184FE4u;
    // 0x184fe8: 0xafa200c4  sw          $v0, 0xC4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x184FE4u, 0x184FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184FECu;
label_184fec:
    // 0x184fec: 0x8e625340  lw          $v0, 0x5340($s3)
    ctx->pc = 0x184fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21312)));
label_184ff0:
    // 0x184ff0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x184ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_184ff4:
    // 0x184ff4: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x184ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_184ff8:
    // 0x184ff8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x184ff8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_184ffc:
    // 0x184ffc: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x184ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_185000:
    // 0x185000: 0xc055130  jal         func_1544C0
label_185004:
    if (ctx->pc == 0x185004u) {
        ctx->pc = 0x185004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185000u;
        // 0x185004: 0x8c470040  lw          $a3, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185008u;
        goto label_185008;
    }
    ctx->pc = 0x185000u;
    SET_GPR_U32(ctx, 31, 0x185008u);
    ctx->pc = 0x185004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185000u;
    // 0x185004: 0x8c470040  lw          $a3, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1544C0u, 0x185000u, 0x185008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185008u;
label_185008:
    // 0x185008: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x185008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_18500c:
    // 0x18500c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x18500cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_185010:
    // 0x185010: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x185010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_185014:
    // 0x185014: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x185014u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_185018:
    // 0x185018: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x185018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_18501c:
    // 0x18501c: 0x60f809  jalr        $v1
label_185020:
    if (ctx->pc == 0x185020u) {
        ctx->pc = 0x185020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18501Cu;
        // 0x185020: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185024u;
        goto label_185024;
    }
    ctx->pc = 0x18501Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x185024u);
        ctx->pc = 0x185020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18501Cu;
        // 0x185020: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18501Cu, 0x185024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185024u;
label_185024:
    // 0x185024: 0x8e4a27e4  lw          $t2, 0x27E4($s2)
    ctx->pc = 0x185024u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_185028:
    // 0x185028: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x185028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_18502c:
    // 0x18502c: 0x245e2b28  addiu       $fp, $v0, 0x2B28
    ctx->pc = 0x18502cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 11048));
label_185030:
    // 0x185030: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x185030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_185034:
    // 0x185034: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x185034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_185038:
    // 0x185038: 0x24a529e8  addiu       $a1, $a1, 0x29E8
    ctx->pc = 0x185038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10728));
label_18503c:
    // 0x18503c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x18503cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_185040:
    // 0x185040: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x185040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_185044:
    // 0x185044: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x185044u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_185048:
    // 0x185048: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x185048u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_18504c:
    // 0x18504c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x18504cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_185050:
    // 0x185050: 0x24090185  addiu       $t1, $zero, 0x185
    ctx->pc = 0x185050u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 389));
label_185054:
    // 0x185054: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x185054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_185058:
    // 0x185058: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x185058u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18505c:
    // 0x18505c: 0x40f809  jalr        $v0
label_185060:
    if (ctx->pc == 0x185060u) {
        ctx->pc = 0x185060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18505Cu;
        // 0x185060: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185064u;
        goto label_185064;
    }
    ctx->pc = 0x18505Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185064u);
        ctx->pc = 0x185060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18505Cu;
        // 0x185060: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18505Cu, 0x185064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185064u;
label_185064:
    // 0x185064: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x185064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_185068:
    // 0x185068: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_18506c:
    if (ctx->pc == 0x18506Cu) {
        ctx->pc = 0x18506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185068u;
        // 0x18506c: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185070u;
        goto label_185070;
    }
    ctx->pc = 0x185068u;
    {
        const bool branch_taken_0x185068 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185068u;
        // 0x18506c: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185068) {
            ctx->pc = 0x185078u;
            goto label_185078;
        }
    }
    ctx->pc = 0x185070u;
label_185070:
    // 0x185070: 0x24424370  addiu       $v0, $v0, 0x4370
    ctx->pc = 0x185070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17264));
label_185074:
    // 0x185074: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x185074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_185078:
    // 0x185078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18507c:
    // 0x18507c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x18507cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_185080:
    // 0x185080: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x185080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_185084:
    // 0x185084: 0xc0ce108  jal         func_338420
label_185088:
    if (ctx->pc == 0x185088u) {
        ctx->pc = 0x185088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185084u;
        // 0x185088: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18508Cu;
        goto label_18508c;
    }
    ctx->pc = 0x185084u;
    SET_GPR_U32(ctx, 31, 0x18508Cu);
    ctx->pc = 0x185088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185084u;
    // 0x185088: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338420u, 0x185084u, 0x18508Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18508Cu;
label_18508c:
    // 0x18508c: 0x8ea827e4  lw          $t0, 0x27E4($s5)
    ctx->pc = 0x18508cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_185090:
    // 0x185090: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x185090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_185094:
    // 0x185094: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x185094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_185098:
    // 0x185098: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x185098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18509c:
    // 0x18509c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x18509cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1850a0:
    // 0x1850a0: 0x846400d8  lh          $a0, 0xD8($v1)
    ctx->pc = 0x1850a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
label_1850a4:
    // 0x1850a4: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x1850a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_1850a8:
    // 0x1850a8: 0x40f809  jalr        $v0
label_1850ac:
    if (ctx->pc == 0x1850ACu) {
        ctx->pc = 0x1850ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1850A8u;
        // 0x1850ac: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1850B0u;
        goto label_1850b0;
    }
    ctx->pc = 0x1850A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1850B0u);
        ctx->pc = 0x1850ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1850A8u;
        // 0x1850ac: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1850A8u, 0x1850B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1850B0u;
label_1850b0:
    // 0x1850b0: 0x8ea827e4  lw          $t0, 0x27E4($s5)
    ctx->pc = 0x1850b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_1850b4:
    // 0x1850b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1850b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1850b8:
    // 0x1850b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1850b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1850bc:
    // 0x1850bc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1850bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1850c0:
    // 0x1850c0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1850c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1850c4:
    // 0x1850c4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1850c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1850c8:
    // 0x1850c8: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x1850c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_1850cc:
    // 0x1850cc: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x1850ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_1850d0:
    // 0x1850d0: 0x60f809  jalr        $v1
label_1850d4:
    if (ctx->pc == 0x1850D4u) {
        ctx->pc = 0x1850D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1850D0u;
        // 0x1850d4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1850D8u;
        goto label_1850d8;
    }
    ctx->pc = 0x1850D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1850D8u);
        ctx->pc = 0x1850D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1850D0u;
        // 0x1850d4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1850D0u, 0x1850D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1850D8u;
label_1850d8:
    // 0x1850d8: 0x8ea627e4  lw          $a2, 0x27E4($s5)
    ctx->pc = 0x1850d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_1850dc:
    // 0x1850dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1850dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1850e0:
    // 0x1850e0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1850e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1850e4:
    // 0x1850e4: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1850e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1850e8:
    // 0x1850e8: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1850e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1850ec:
    // 0x1850ec: 0x60f809  jalr        $v1
label_1850f0:
    if (ctx->pc == 0x1850F0u) {
        ctx->pc = 0x1850F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1850ECu;
        // 0x1850f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1850F4u;
        goto label_1850f4;
    }
    ctx->pc = 0x1850ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1850F4u);
        ctx->pc = 0x1850F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1850ECu;
        // 0x1850f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1850ECu, 0x1850F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1850F4u;
label_1850f4:
    // 0x1850f4: 0xc051060  jal         func_144180
label_1850f8:
    if (ctx->pc == 0x1850F8u) {
        ctx->pc = 0x1850F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1850F4u;
        // 0x1850f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1850FCu;
        goto label_1850fc;
    }
    ctx->pc = 0x1850F4u;
    SET_GPR_U32(ctx, 31, 0x1850FCu);
    ctx->pc = 0x1850F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1850F4u;
    // 0x1850f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144180u, 0x1850F4u, 0x1850FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1850FCu;
label_1850fc:
    // 0x1850fc: 0x8ea627e4  lw          $a2, 0x27E4($s5)
    ctx->pc = 0x1850fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_185100:
    // 0x185100: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x185100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_185104:
    // 0x185104: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x185104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_185108:
    // 0x185108: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x185108u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_18510c:
    // 0x18510c: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x18510cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_185110:
    // 0x185110: 0x60f809  jalr        $v1
label_185114:
    if (ctx->pc == 0x185114u) {
        ctx->pc = 0x185114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185110u;
        // 0x185114: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185118u;
        goto label_185118;
    }
    ctx->pc = 0x185110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x185118u);
        ctx->pc = 0x185114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185110u;
        // 0x185114: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185110u, 0x185118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185118u;
label_185118:
    // 0x185118: 0x8ea627e4  lw          $a2, 0x27E4($s5)
    ctx->pc = 0x185118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_18511c:
    // 0x18511c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x18511cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_185120:
    // 0x185120: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x185120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_185124:
    // 0x185124: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x185124u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_185128:
    // 0x185128: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x185128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_18512c:
    // 0x18512c: 0x60f809  jalr        $v1
label_185130:
    if (ctx->pc == 0x185130u) {
        ctx->pc = 0x185130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18512Cu;
        // 0x185130: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185134u;
        goto label_185134;
    }
    ctx->pc = 0x18512Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x185134u);
        ctx->pc = 0x185130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18512Cu;
        // 0x185130: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18512Cu, 0x185134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185134u;
label_185134:
    // 0x185134: 0xc051028  jal         func_1440A0
label_185138:
    if (ctx->pc == 0x185138u) {
        ctx->pc = 0x18513Cu;
        goto label_18513c;
    }
    ctx->pc = 0x185134u;
    SET_GPR_U32(ctx, 31, 0x18513Cu);
    ctx->pc = 0x1440A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1440A0u, 0x185134u, 0x18513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18513Cu;
label_18513c:
    // 0x18513c: 0x8eab27e4  lw          $t3, 0x27E4($s5)
    ctx->pc = 0x18513cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_185140:
    // 0x185140: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x185140u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_185144:
    // 0x185144: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x185144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_185148:
    // 0x185148: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x185148u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_18514c:
    // 0x18514c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x18514cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_185150:
    // 0x185150: 0x24a52bf8  addiu       $a1, $a1, 0x2BF8
    ctx->pc = 0x185150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11256));
label_185154:
    // 0x185154: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x185154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_185158:
    // 0x185158: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x185158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_18515c:
    // 0x18515c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x18515cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_185160:
    // 0x185160: 0x24090195  addiu       $t1, $zero, 0x195
    ctx->pc = 0x185160u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
label_185164:
    // 0x185164: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x185164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_185168:
    // 0x185168: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x185168u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18516c:
    // 0x18516c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x18516cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_185170:
    // 0x185170: 0x40f809  jalr        $v0
label_185174:
    if (ctx->pc == 0x185174u) {
        ctx->pc = 0x185174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185170u;
        // 0x185174: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185178u;
        goto label_185178;
    }
    ctx->pc = 0x185170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185178u);
        ctx->pc = 0x185174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185170u;
        // 0x185174: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185170u, 0x185178u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185178u;
label_185178:
    // 0x185178: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x185178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18517c:
    // 0x18517c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_185180:
    if (ctx->pc == 0x185180u) {
        ctx->pc = 0x185180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18517Cu;
        // 0x185180: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185184u;
        goto label_185184;
    }
    ctx->pc = 0x18517Cu;
    {
        const bool branch_taken_0x18517c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x185180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18517Cu;
        // 0x185180: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18517c) {
            ctx->pc = 0x1851A8u;
            goto label_1851a8;
        }
    }
    ctx->pc = 0x185184u;
label_185184:
    // 0x185184: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185188:
    // 0x185188: 0xc061e6e  jal         func_1879B8
label_18518c:
    if (ctx->pc == 0x18518Cu) {
        ctx->pc = 0x18518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185188u;
        // 0x18518c: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185190u;
        goto label_185190;
    }
    ctx->pc = 0x185188u;
    SET_GPR_U32(ctx, 31, 0x185190u);
    ctx->pc = 0x18518Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185188u;
    // 0x18518c: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x185188u, 0x185190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185190u;
label_185190:
    // 0x185190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_185194:
    // 0x185194: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x185194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_185198:
    // 0x185198: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x185198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18519c:
    // 0x18519c: 0xc05b8e2  jal         func_16E388
label_1851a0:
    if (ctx->pc == 0x1851A0u) {
        ctx->pc = 0x1851A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18519Cu;
        // 0x1851a0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1851A4u;
        goto label_1851a4;
    }
    ctx->pc = 0x18519Cu;
    SET_GPR_U32(ctx, 31, 0x1851A4u);
    ctx->pc = 0x1851A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18519Cu;
    // 0x1851a0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E388u, 0x18519Cu, 0x1851A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1851A4u;
label_1851a4:
    // 0x1851a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1851a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1851a8:
    // 0x1851a8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1851a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1851ac:
    // 0x1851ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1851acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1851b0:
    // 0x1851b0: 0x8c83cd4c  lw          $v1, -0x32B4($a0)
    ctx->pc = 0x1851b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954316)));
label_1851b4:
    // 0x1851b4: 0x27b200c0  addiu       $s2, $sp, 0xC0
    ctx->pc = 0x1851b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1851b8:
    // 0x1851b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1851b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1851bc:
    // 0x1851bc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1851bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1851c0:
    // 0x1851c0: 0x24710040  addiu       $s1, $v1, 0x40
    ctx->pc = 0x1851c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1851c4:
    // 0x1851c4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1851c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1851c8:
    // 0x1851c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1851c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1851cc:
    // 0x1851cc: 0xc137d0c  jal         func_4DF430
label_1851d0:
    if (ctx->pc == 0x1851D0u) {
        ctx->pc = 0x1851D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1851CCu;
        // 0x1851d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1851D4u;
        goto label_1851d4;
    }
    ctx->pc = 0x1851CCu;
    SET_GPR_U32(ctx, 31, 0x1851D4u);
    ctx->pc = 0x1851D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1851CCu;
    // 0x1851d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF430u, 0x1851CCu, 0x1851D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1851D4u;
label_1851d4:
    // 0x1851d4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1851d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1851d8:
    // 0x1851d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1851d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1851dc:
    // 0x1851dc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1851dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1851e0:
    // 0x1851e0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1851e4:
    if (ctx->pc == 0x1851E4u) {
        ctx->pc = 0x1851E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1851E0u;
        // 0x1851e4: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1851E8u;
        goto label_1851e8;
    }
    ctx->pc = 0x1851E0u;
    {
        const bool branch_taken_0x1851e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1851E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1851E0u;
        // 0x1851e4: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1851e0) {
            ctx->pc = 0x1851FCu;
            goto label_1851fc;
        }
    }
    ctx->pc = 0x1851E8u;
label_1851e8:
    // 0x1851e8: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1851e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1851ec:
    // 0x1851ec: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1851ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1851f0:
    // 0x1851f0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1851f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1851f4:
    // 0x1851f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1851f8:
    if (ctx->pc == 0x1851F8u) {
        ctx->pc = 0x1851FCu;
        goto label_1851fc;
    }
    ctx->pc = 0x1851F4u;
    {
        const bool branch_taken_0x1851f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1851f4) {
            ctx->pc = 0x185200u;
            goto label_185200;
        }
    }
    ctx->pc = 0x1851FCu;
label_1851fc:
    // 0x1851fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1851fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_185200:
    // 0x185200: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_185204:
    if (ctx->pc == 0x185204u) {
        ctx->pc = 0x185204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185200u;
        // 0x185204: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185208u;
        goto label_185208;
    }
    ctx->pc = 0x185200u;
    {
        const bool branch_taken_0x185200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x185204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185200u;
        // 0x185204: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185200) {
            ctx->pc = 0x185238u;
            goto label_185238;
        }
    }
    ctx->pc = 0x185208u;
label_185208:
    // 0x185208: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x185208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18520c:
    // 0x18520c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18520cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_185210:
    // 0x185210: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x185210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_185214:
    // 0x185214: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x185214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
label_185218:
    // 0x185218: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x185218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_18521c:
    // 0x18521c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x18521cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_185220:
    // 0x185220: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x185220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_185224:
    // 0x185224: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x185224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_185228:
    // 0x185228: 0xc137e66  jal         func_4DF998
label_18522c:
    if (ctx->pc == 0x18522Cu) {
        ctx->pc = 0x18522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185228u;
        // 0x18522c: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185230u;
        goto label_185230;
    }
    ctx->pc = 0x185228u;
    SET_GPR_U32(ctx, 31, 0x185230u);
    ctx->pc = 0x18522Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185228u;
    // 0x18522c: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF998u, 0x185228u, 0x185230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185230u;
label_185230:
    // 0x185230: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x185230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_185234:
    // 0x185234: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x185234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_185238:
    // 0x185238: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x185238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_18523c:
    // 0x18523c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x18523cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_185240:
    // 0x185240: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x185240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_185244:
    // 0x185244: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x185244u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
label_185248:
    // 0x185248: 0x8cc2cd4c  lw          $v0, -0x32B4($a2)
    ctx->pc = 0x185248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954316)));
label_18524c:
    // 0x18524c: 0xc0551c6  jal         func_154718
label_185250:
    if (ctx->pc == 0x185250u) {
        ctx->pc = 0x185250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18524Cu;
        // 0x185250: 0xac500070  sw          $s0, 0x70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185254u;
        goto label_185254;
    }
    ctx->pc = 0x18524Cu;
    SET_GPR_U32(ctx, 31, 0x185254u);
    ctx->pc = 0x185250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18524Cu;
    // 0x185250: 0xac500070  sw          $s0, 0x70($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154718u, 0x18524Cu, 0x185254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185254u;
label_185254:
    // 0x185254: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x185254u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_185258:
    // 0x185258: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x185258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_18525c:
    // 0x18525c: 0x8ce3b788  lw          $v1, -0x4878($a3)
    ctx->pc = 0x18525cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948744)));
label_185260:
    // 0x185260: 0x8c660090  lw          $a2, 0x90($v1)
    ctx->pc = 0x185260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_185264:
    // 0x185264: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x185264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_185268:
    // 0x185268: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x185268u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_18526c:
    // 0x18526c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x18526cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_185270:
    // 0x185270: 0x60f809  jalr        $v1
label_185274:
    if (ctx->pc == 0x185274u) {
        ctx->pc = 0x185274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185270u;
        // 0x185274: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185278u;
        goto label_185278;
    }
    ctx->pc = 0x185270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x185278u);
        ctx->pc = 0x185274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185270u;
        // 0x185274: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185270u, 0x185278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185278u;
label_185278:
    // 0x185278: 0x8ea627e4  lw          $a2, 0x27E4($s5)
    ctx->pc = 0x185278u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_18527c:
    // 0x18527c: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x18527cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_185280:
    // 0x185280: 0x8d05b9b8  lw          $a1, -0x4648($t0)
    ctx->pc = 0x185280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294949304)));
label_185284:
    // 0x185284: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x185284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_185288:
    // 0x185288: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x185288u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_18528c:
    // 0x18528c: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x18528cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_185290:
    // 0x185290: 0x60f809  jalr        $v1
label_185294:
    if (ctx->pc == 0x185294u) {
        ctx->pc = 0x185294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185290u;
        // 0x185294: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185298u;
        goto label_185298;
    }
    ctx->pc = 0x185290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x185298u);
        ctx->pc = 0x185294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185290u;
        // 0x185294: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185290u, 0x185298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185298u;
label_185298:
    // 0x185298: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x185298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18529c:
    // 0x18529c: 0xc055168  jal         func_1545A0
label_1852a0:
    if (ctx->pc == 0x1852A0u) {
        ctx->pc = 0x1852A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18529Cu;
        // 0x1852a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1852A4u;
        goto label_1852a4;
    }
    ctx->pc = 0x18529Cu;
    SET_GPR_U32(ctx, 31, 0x1852A4u);
    ctx->pc = 0x1852A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18529Cu;
    // 0x1852a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1545A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1545A0u, 0x18529Cu, 0x1852A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1852A4u;
label_1852a4:
    // 0x1852a4: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x1852a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_1852a8:
    // 0x1852a8: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x1852a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1852ac:
    // 0x1852ac: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x1852acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1852b0:
    // 0x1852b0: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x1852b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1852b4:
    // 0x1852b4: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x1852b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1852b8:
    // 0x1852b8: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x1852b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1852bc:
    // 0x1852bc: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x1852bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1852c0:
    // 0x1852c0: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x1852c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1852c4:
    // 0x1852c4: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x1852c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1852c8:
    // 0x1852c8: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1852c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_1852cc:
    // 0x1852cc: 0x3e00008  jr          $ra
label_1852d0:
    if (ctx->pc == 0x1852D0u) {
        ctx->pc = 0x1852D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1852CCu;
        // 0x1852d0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1852D4u;
        goto label_1852d4;
    }
    ctx->pc = 0x1852CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1852D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1852CCu;
        // 0x1852d0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1852CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1852D4u;
label_1852d4:
    // 0x1852d4: 0x0  nop
    ctx->pc = 0x1852d4u;
    // NOP
    ctx->pc = 0x1852d8u;
}
