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

// Function: sub_003221E8
// Address: 0x3221e8 - 0x322440
void sub_003221E8_0x3221e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003221E8_0x3221e8");
#endif

    switch (ctx->pc) {
        case 0x3221e8u: goto label_3221e8;
        case 0x3221ecu: goto label_3221ec;
        case 0x3221f0u: goto label_3221f0;
        case 0x3221f4u: goto label_3221f4;
        case 0x3221f8u: goto label_3221f8;
        case 0x3221fcu: goto label_3221fc;
        case 0x322200u: goto label_322200;
        case 0x322204u: goto label_322204;
        case 0x322208u: goto label_322208;
        case 0x32220cu: goto label_32220c;
        case 0x322210u: goto label_322210;
        case 0x322214u: goto label_322214;
        case 0x322218u: goto label_322218;
        case 0x32221cu: goto label_32221c;
        case 0x322220u: goto label_322220;
        case 0x322224u: goto label_322224;
        case 0x322228u: goto label_322228;
        case 0x32222cu: goto label_32222c;
        case 0x322230u: goto label_322230;
        case 0x322234u: goto label_322234;
        case 0x322238u: goto label_322238;
        case 0x32223cu: goto label_32223c;
        case 0x322240u: goto label_322240;
        case 0x322244u: goto label_322244;
        case 0x322248u: goto label_322248;
        case 0x32224cu: goto label_32224c;
        case 0x322250u: goto label_322250;
        case 0x322254u: goto label_322254;
        case 0x322258u: goto label_322258;
        case 0x32225cu: goto label_32225c;
        case 0x322260u: goto label_322260;
        case 0x322264u: goto label_322264;
        case 0x322268u: goto label_322268;
        case 0x32226cu: goto label_32226c;
        case 0x322270u: goto label_322270;
        case 0x322274u: goto label_322274;
        case 0x322278u: goto label_322278;
        case 0x32227cu: goto label_32227c;
        case 0x322280u: goto label_322280;
        case 0x322284u: goto label_322284;
        case 0x322288u: goto label_322288;
        case 0x32228cu: goto label_32228c;
        case 0x322290u: goto label_322290;
        case 0x322294u: goto label_322294;
        case 0x322298u: goto label_322298;
        case 0x32229cu: goto label_32229c;
        case 0x3222a0u: goto label_3222a0;
        case 0x3222a4u: goto label_3222a4;
        case 0x3222a8u: goto label_3222a8;
        case 0x3222acu: goto label_3222ac;
        case 0x3222b0u: goto label_3222b0;
        case 0x3222b4u: goto label_3222b4;
        case 0x3222b8u: goto label_3222b8;
        case 0x3222bcu: goto label_3222bc;
        case 0x3222c0u: goto label_3222c0;
        case 0x3222c4u: goto label_3222c4;
        case 0x3222c8u: goto label_3222c8;
        case 0x3222ccu: goto label_3222cc;
        case 0x3222d0u: goto label_3222d0;
        case 0x3222d4u: goto label_3222d4;
        case 0x3222d8u: goto label_3222d8;
        case 0x3222dcu: goto label_3222dc;
        case 0x3222e0u: goto label_3222e0;
        case 0x3222e4u: goto label_3222e4;
        case 0x3222e8u: goto label_3222e8;
        case 0x3222ecu: goto label_3222ec;
        case 0x3222f0u: goto label_3222f0;
        case 0x3222f4u: goto label_3222f4;
        case 0x3222f8u: goto label_3222f8;
        case 0x3222fcu: goto label_3222fc;
        case 0x322300u: goto label_322300;
        case 0x322304u: goto label_322304;
        case 0x322308u: goto label_322308;
        case 0x32230cu: goto label_32230c;
        case 0x322310u: goto label_322310;
        case 0x322314u: goto label_322314;
        case 0x322318u: goto label_322318;
        case 0x32231cu: goto label_32231c;
        case 0x322320u: goto label_322320;
        case 0x322324u: goto label_322324;
        case 0x322328u: goto label_322328;
        case 0x32232cu: goto label_32232c;
        case 0x322330u: goto label_322330;
        case 0x322334u: goto label_322334;
        case 0x322338u: goto label_322338;
        case 0x32233cu: goto label_32233c;
        case 0x322340u: goto label_322340;
        case 0x322344u: goto label_322344;
        case 0x322348u: goto label_322348;
        case 0x32234cu: goto label_32234c;
        case 0x322350u: goto label_322350;
        case 0x322354u: goto label_322354;
        case 0x322358u: goto label_322358;
        case 0x32235cu: goto label_32235c;
        case 0x322360u: goto label_322360;
        case 0x322364u: goto label_322364;
        case 0x322368u: goto label_322368;
        case 0x32236cu: goto label_32236c;
        case 0x322370u: goto label_322370;
        case 0x322374u: goto label_322374;
        case 0x322378u: goto label_322378;
        case 0x32237cu: goto label_32237c;
        case 0x322380u: goto label_322380;
        case 0x322384u: goto label_322384;
        case 0x322388u: goto label_322388;
        case 0x32238cu: goto label_32238c;
        case 0x322390u: goto label_322390;
        case 0x322394u: goto label_322394;
        case 0x322398u: goto label_322398;
        case 0x32239cu: goto label_32239c;
        case 0x3223a0u: goto label_3223a0;
        case 0x3223a4u: goto label_3223a4;
        case 0x3223a8u: goto label_3223a8;
        case 0x3223acu: goto label_3223ac;
        case 0x3223b0u: goto label_3223b0;
        case 0x3223b4u: goto label_3223b4;
        case 0x3223b8u: goto label_3223b8;
        case 0x3223bcu: goto label_3223bc;
        case 0x3223c0u: goto label_3223c0;
        case 0x3223c4u: goto label_3223c4;
        case 0x3223c8u: goto label_3223c8;
        case 0x3223ccu: goto label_3223cc;
        case 0x3223d0u: goto label_3223d0;
        case 0x3223d4u: goto label_3223d4;
        case 0x3223d8u: goto label_3223d8;
        case 0x3223dcu: goto label_3223dc;
        case 0x3223e0u: goto label_3223e0;
        case 0x3223e4u: goto label_3223e4;
        case 0x3223e8u: goto label_3223e8;
        case 0x3223ecu: goto label_3223ec;
        case 0x3223f0u: goto label_3223f0;
        case 0x3223f4u: goto label_3223f4;
        case 0x3223f8u: goto label_3223f8;
        case 0x3223fcu: goto label_3223fc;
        case 0x322400u: goto label_322400;
        case 0x322404u: goto label_322404;
        case 0x322408u: goto label_322408;
        case 0x32240cu: goto label_32240c;
        case 0x322410u: goto label_322410;
        case 0x322414u: goto label_322414;
        case 0x322418u: goto label_322418;
        case 0x32241cu: goto label_32241c;
        case 0x322420u: goto label_322420;
        case 0x322424u: goto label_322424;
        case 0x322428u: goto label_322428;
        case 0x32242cu: goto label_32242c;
        case 0x322430u: goto label_322430;
        case 0x322434u: goto label_322434;
        case 0x322438u: goto label_322438;
        case 0x32243cu: goto label_32243c;
        default: break;
    }

    ctx->pc = 0x3221e8u;

label_3221e8:
    // 0x3221e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3221e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3221ec:
    // 0x3221ec: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3221ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3221f0:
    // 0x3221f0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3221f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3221f4:
    // 0x3221f4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3221f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3221f8:
    // 0x3221f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3221f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3221fc:
    // 0x3221fc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3221fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_322200:
    // 0x322200: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x322200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_322204:
    // 0x322204: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x322204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_322208:
    // 0x322208: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x322208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_32220c:
    // 0x32220c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x32220cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_322210:
    // 0x322210: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x322210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_322214:
    // 0x322214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x322214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_322218:
    // 0x322218: 0xc05959e  jal         func_165678
label_32221c:
    if (ctx->pc == 0x32221Cu) {
        ctx->pc = 0x32221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322218u;
        // 0x32221c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322220u;
        goto label_322220;
    }
    ctx->pc = 0x322218u;
    SET_GPR_U32(ctx, 31, 0x322220u);
    ctx->pc = 0x32221Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322218u;
    // 0x32221c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x322218u, 0x322220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322220u;
label_322220:
    // 0x322220: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x322220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322224:
    // 0x322224: 0x12400079  beqz        $s2, . + 4 + (0x79 << 2)
label_322228:
    if (ctx->pc == 0x322228u) {
        ctx->pc = 0x322228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322224u;
        // 0x322228: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32222Cu;
        goto label_32222c;
    }
    ctx->pc = 0x322224u;
    {
        const bool branch_taken_0x322224 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x322228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322224u;
        // 0x322228: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322224) {
            ctx->pc = 0x32240Cu;
            goto label_32240c;
        }
    }
    ctx->pc = 0x32222Cu;
label_32222c:
    // 0x32222c: 0xc08750a  jal         func_21D428
label_322230:
    if (ctx->pc == 0x322230u) {
        ctx->pc = 0x322230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32222Cu;
        // 0x322230: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322234u;
        goto label_322234;
    }
    ctx->pc = 0x32222Cu;
    SET_GPR_U32(ctx, 31, 0x322234u);
    ctx->pc = 0x322230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32222Cu;
    // 0x322230: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x32222Cu, 0x322234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322234u;
label_322234:
    // 0x322234: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x322234u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322238:
    // 0x322238: 0x82630016  lb          $v1, 0x16($s3)
    ctx->pc = 0x322238u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
label_32223c:
    // 0x32223c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32223cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_322240:
    // 0x322240: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_322244:
    if (ctx->pc == 0x322244u) {
        ctx->pc = 0x322244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322240u;
        // 0x322244: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322248u;
        goto label_322248;
    }
    ctx->pc = 0x322240u;
    {
        const bool branch_taken_0x322240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x322240) {
            ctx->pc = 0x322244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322240u;
            // 0x322244: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322254u;
            goto label_322254;
        }
    }
    ctx->pc = 0x322248u;
label_322248:
    // 0x322248: 0x92820275  lbu         $v0, 0x275($s4)
    ctx->pc = 0x322248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 629)));
label_32224c:
    // 0x32224c: 0xa2620016  sb          $v0, 0x16($s3)
    ctx->pc = 0x32224cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 22), (uint8_t)GPR_U32(ctx, 2));
label_322250:
    // 0x322250: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x322250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_322254:
    // 0x322254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x322254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322258:
    // 0x322258: 0xc059856  jal         func_166158
label_32225c:
    if (ctx->pc == 0x32225Cu) {
        ctx->pc = 0x32225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322258u;
        // 0x32225c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322260u;
        goto label_322260;
    }
    ctx->pc = 0x322258u;
    SET_GPR_U32(ctx, 31, 0x322260u);
    ctx->pc = 0x32225Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322258u;
    // 0x32225c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x322258u, 0x322260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322260u;
label_322260:
    // 0x322260: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x322260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_322264:
    // 0x322264: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x322264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_322268:
    // 0x322268: 0x247e1438  addiu       $fp, $v1, 0x1438
    ctx->pc = 0x322268u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 5176));
label_32226c:
    // 0x32226c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x32226cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322270:
    // 0x322270: 0x24970048  addiu       $s7, $a0, 0x48
    ctx->pc = 0x322270u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_322274:
    // 0x322274: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x322274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_322278:
    // 0x322278: 0xc137826  jal         func_4DE098
label_32227c:
    if (ctx->pc == 0x32227Cu) {
        ctx->pc = 0x32227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322278u;
        // 0x32227c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322280u;
        goto label_322280;
    }
    ctx->pc = 0x322278u;
    SET_GPR_U32(ctx, 31, 0x322280u);
    ctx->pc = 0x32227Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322278u;
    // 0x32227c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x322278u, 0x322280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322280u;
label_322280:
    // 0x322280: 0xc0e409a  jal         func_390268
label_322284:
    if (ctx->pc == 0x322284u) {
        ctx->pc = 0x322284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322280u;
        // 0x322284: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322288u;
        goto label_322288;
    }
    ctx->pc = 0x322280u;
    SET_GPR_U32(ctx, 31, 0x322288u);
    ctx->pc = 0x322284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322280u;
    // 0x322284: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x322280u, 0x322288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322288u;
label_322288:
    // 0x322288: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x322288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32228c:
    // 0x32228c: 0x52000047  beql        $s0, $zero, . + 4 + (0x47 << 2)
label_322290:
    if (ctx->pc == 0x322290u) {
        ctx->pc = 0x322290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32228Cu;
        // 0x322290: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322294u;
        goto label_322294;
    }
    ctx->pc = 0x32228Cu;
    {
        const bool branch_taken_0x32228c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32228c) {
            ctx->pc = 0x322290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32228Cu;
            // 0x322290: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3223ACu;
            goto label_3223ac;
        }
    }
    ctx->pc = 0x322294u;
label_322294:
    // 0x322294: 0xc089f98  jal         func_227E60
label_322298:
    if (ctx->pc == 0x322298u) {
        ctx->pc = 0x322298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322294u;
        // 0x322298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32229Cu;
        goto label_32229c;
    }
    ctx->pc = 0x322294u;
    SET_GPR_U32(ctx, 31, 0x32229Cu);
    ctx->pc = 0x322298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322294u;
    // 0x322298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x322294u, 0x32229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32229Cu;
label_32229c:
    // 0x32229c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32229cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3222a0:
    // 0x3222a0: 0x50430042  beql        $v0, $v1, . + 4 + (0x42 << 2)
label_3222a4:
    if (ctx->pc == 0x3222A4u) {
        ctx->pc = 0x3222A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3222A0u;
        // 0x3222a4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3222A8u;
        goto label_3222a8;
    }
    ctx->pc = 0x3222A0u;
    {
        const bool branch_taken_0x3222a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3222a0) {
            ctx->pc = 0x3222A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3222A0u;
            // 0x3222a4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3223ACu;
            goto label_3223ac;
        }
    }
    ctx->pc = 0x3222A8u;
label_3222a8:
    // 0x3222a8: 0x16120019  bne         $s0, $s2, . + 4 + (0x19 << 2)
label_3222ac:
    if (ctx->pc == 0x3222ACu) {
        ctx->pc = 0x3222B0u;
        goto label_3222b0;
    }
    ctx->pc = 0x3222A8u;
    {
        const bool branch_taken_0x3222a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x3222a8) {
            ctx->pc = 0x322310u;
            goto label_322310;
        }
    }
    ctx->pc = 0x3222B0u;
label_3222b0:
    // 0x3222b0: 0x92620017  lbu         $v0, 0x17($s3)
    ctx->pc = 0x3222b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 23)));
label_3222b4:
    // 0x3222b4: 0x1443003c  bne         $v0, $v1, . + 4 + (0x3C << 2)
label_3222b8:
    if (ctx->pc == 0x3222B8u) {
        ctx->pc = 0x3222B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3222B4u;
        // 0x3222b8: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3222BCu;
        goto label_3222bc;
    }
    ctx->pc = 0x3222B4u;
    {
        const bool branch_taken_0x3222b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3222B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3222B4u;
        // 0x3222b8: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3222b4) {
            ctx->pc = 0x3223A8u;
            goto label_3223a8;
        }
    }
    ctx->pc = 0x3222BCu;
label_3222bc:
    // 0x3222bc: 0xc087502  jal         func_21D408
label_3222c0:
    if (ctx->pc == 0x3222C0u) {
        ctx->pc = 0x3222C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3222BCu;
        // 0x3222c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3222C4u;
        goto label_3222c4;
    }
    ctx->pc = 0x3222BCu;
    SET_GPR_U32(ctx, 31, 0x3222C4u);
    ctx->pc = 0x3222C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3222BCu;
    // 0x3222c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3222BCu, 0x3222C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3222C4u;
label_3222c4:
    // 0x3222c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3222c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3222c8:
    // 0x3222c8: 0xc0a3630  jal         func_28D8C0
label_3222cc:
    if (ctx->pc == 0x3222CCu) {
        ctx->pc = 0x3222CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3222C8u;
        // 0x3222cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3222D0u;
        goto label_3222d0;
    }
    ctx->pc = 0x3222C8u;
    SET_GPR_U32(ctx, 31, 0x3222D0u);
    ctx->pc = 0x3222CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3222C8u;
    // 0x3222cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x3222C8u, 0x3222D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3222D0u;
label_3222d0:
    // 0x3222d0: 0xc0a3628  jal         func_28D8A0
label_3222d4:
    if (ctx->pc == 0x3222D4u) {
        ctx->pc = 0x3222D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3222D0u;
        // 0x3222d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3222D8u;
        goto label_3222d8;
    }
    ctx->pc = 0x3222D0u;
    SET_GPR_U32(ctx, 31, 0x3222D8u);
    ctx->pc = 0x3222D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3222D0u;
    // 0x3222d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x3222D0u, 0x3222D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3222D8u;
label_3222d8:
    // 0x3222d8: 0xc0a4e54  jal         func_293950
label_3222dc:
    if (ctx->pc == 0x3222DCu) {
        ctx->pc = 0x3222E0u;
        goto label_3222e0;
    }
    ctx->pc = 0x3222D8u;
    SET_GPR_U32(ctx, 31, 0x3222E0u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x3222D8u, 0x3222E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3222E0u;
label_3222e0:
    // 0x3222e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3222e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3222e4:
    // 0x3222e4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_3222e8:
    if (ctx->pc == 0x3222E8u) {
        ctx->pc = 0x3222E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3222E4u;
        // 0x3222e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3222ECu;
        goto label_3222ec;
    }
    ctx->pc = 0x3222E4u;
    {
        const bool branch_taken_0x3222e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3222E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3222E4u;
        // 0x3222e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3222e4) {
            ctx->pc = 0x3222FCu;
            goto label_3222fc;
        }
    }
    ctx->pc = 0x3222ECu;
label_3222ec:
    // 0x3222ec: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x3222ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_3222f0:
    // 0x3222f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3222f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3222f4:
    // 0x3222f4: 0xc0adc50  jal         func_2B7140
label_3222f8:
    if (ctx->pc == 0x3222F8u) {
        ctx->pc = 0x3222F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3222F4u;
        // 0x3222f8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3222FCu;
        goto label_3222fc;
    }
    ctx->pc = 0x3222F4u;
    SET_GPR_U32(ctx, 31, 0x3222FCu);
    ctx->pc = 0x3222F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3222F4u;
    // 0x3222f8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7140u, 0x3222F4u, 0x3222FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3222FCu;
label_3222fc:
    // 0x3222fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3222fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_322300:
    // 0x322300: 0xc0a35d6  jal         func_28D758
label_322304:
    if (ctx->pc == 0x322304u) {
        ctx->pc = 0x322304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322300u;
        // 0x322304: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322308u;
        goto label_322308;
    }
    ctx->pc = 0x322300u;
    SET_GPR_U32(ctx, 31, 0x322308u);
    ctx->pc = 0x322304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322300u;
    // 0x322304: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x322300u, 0x322308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322308u;
label_322308:
    // 0x322308: 0x10000028  b           . + 4 + (0x28 << 2)
label_32230c:
    if (ctx->pc == 0x32230Cu) {
        ctx->pc = 0x32230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322308u;
        // 0x32230c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322310u;
        goto label_322310;
    }
    ctx->pc = 0x322308u;
    {
        const bool branch_taken_0x322308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322308u;
        // 0x32230c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322308) {
            ctx->pc = 0x3223ACu;
            goto label_3223ac;
        }
    }
    ctx->pc = 0x322310u;
label_322310:
    // 0x322310: 0x52000026  beql        $s0, $zero, . + 4 + (0x26 << 2)
label_322314:
    if (ctx->pc == 0x322314u) {
        ctx->pc = 0x322314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322310u;
        // 0x322314: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322318u;
        goto label_322318;
    }
    ctx->pc = 0x322310u;
    {
        const bool branch_taken_0x322310 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x322310) {
            ctx->pc = 0x322314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322310u;
            // 0x322314: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3223ACu;
            goto label_3223ac;
        }
    }
    ctx->pc = 0x322318u;
label_322318:
    // 0x322318: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x322318u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_32231c:
    // 0x32231c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x32231cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_322320:
    // 0x322320: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_322324:
    if (ctx->pc == 0x322324u) {
        ctx->pc = 0x322324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322320u;
        // 0x322324: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322328u;
        goto label_322328;
    }
    ctx->pc = 0x322320u;
    {
        const bool branch_taken_0x322320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x322320) {
            ctx->pc = 0x322324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322320u;
            // 0x322324: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3223ACu;
            goto label_3223ac;
        }
    }
    ctx->pc = 0x322328u;
label_322328:
    // 0x322328: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x322328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32232c:
    // 0x32232c: 0xc0a57ca  jal         func_295F28
label_322330:
    if (ctx->pc == 0x322330u) {
        ctx->pc = 0x322330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32232Cu;
        // 0x322330: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322334u;
        goto label_322334;
    }
    ctx->pc = 0x32232Cu;
    SET_GPR_U32(ctx, 31, 0x322334u);
    ctx->pc = 0x322330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32232Cu;
    // 0x322330: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x32232Cu, 0x322334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322334u;
label_322334:
    // 0x322334: 0xc087502  jal         func_21D408
label_322338:
    if (ctx->pc == 0x322338u) {
        ctx->pc = 0x322338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322334u;
        // 0x322338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32233Cu;
        goto label_32233c;
    }
    ctx->pc = 0x322334u;
    SET_GPR_U32(ctx, 31, 0x32233Cu);
    ctx->pc = 0x322338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322334u;
    // 0x322338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x322334u, 0x32233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32233Cu;
label_32233c:
    // 0x32233c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32233cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322340:
    // 0x322340: 0x92620017  lbu         $v0, 0x17($s3)
    ctx->pc = 0x322340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 23)));
label_322344:
    // 0x322344: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_322348:
    if (ctx->pc == 0x322348u) {
        ctx->pc = 0x322348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322344u;
        // 0x322348: 0xae3e0208  sw          $fp, 0x208($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32234Cu;
        goto label_32234c;
    }
    ctx->pc = 0x322344u;
    {
        const bool branch_taken_0x322344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x322344) {
            ctx->pc = 0x322348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322344u;
            // 0x322348: 0xae3e0208  sw          $fp, 0x208($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32234Cu;
            goto label_32234c;
        }
    }
    ctx->pc = 0x32234Cu;
label_32234c:
    // 0x32234c: 0xc0a3630  jal         func_28D8C0
label_322350:
    if (ctx->pc == 0x322350u) {
        ctx->pc = 0x322350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32234Cu;
        // 0x322350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322354u;
        goto label_322354;
    }
    ctx->pc = 0x32234Cu;
    SET_GPR_U32(ctx, 31, 0x322354u);
    ctx->pc = 0x322350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32234Cu;
    // 0x322350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x32234Cu, 0x322354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322354u;
label_322354:
    // 0x322354: 0xc0a3628  jal         func_28D8A0
label_322358:
    if (ctx->pc == 0x322358u) {
        ctx->pc = 0x322358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322354u;
        // 0x322358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32235Cu;
        goto label_32235c;
    }
    ctx->pc = 0x322354u;
    SET_GPR_U32(ctx, 31, 0x32235Cu);
    ctx->pc = 0x322358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322354u;
    // 0x322358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x322354u, 0x32235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32235Cu;
label_32235c:
    // 0x32235c: 0xc0a4e54  jal         func_293950
label_322360:
    if (ctx->pc == 0x322360u) {
        ctx->pc = 0x322364u;
        goto label_322364;
    }
    ctx->pc = 0x32235Cu;
    SET_GPR_U32(ctx, 31, 0x322364u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x32235Cu, 0x322364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322364u;
label_322364:
    // 0x322364: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x322364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322368:
    // 0x322368: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
label_32236c:
    if (ctx->pc == 0x32236Cu) {
        ctx->pc = 0x32236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322368u;
        // 0x32236c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322370u;
        goto label_322370;
    }
    ctx->pc = 0x322368u;
    {
        const bool branch_taken_0x322368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x322368) {
            ctx->pc = 0x32236Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322368u;
            // 0x32236c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3223A0u;
            goto label_3223a0;
        }
    }
    ctx->pc = 0x322370u;
label_322370:
    // 0x322370: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x322370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_322374:
    // 0x322374: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x322374u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_322378:
    // 0x322378: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x322378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_32237c:
    // 0x32237c: 0x40f809  jalr        $v0
label_322380:
    if (ctx->pc == 0x322380u) {
        ctx->pc = 0x322380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32237Cu;
        // 0x322380: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322384u;
        goto label_322384;
    }
    ctx->pc = 0x32237Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x322384u);
        ctx->pc = 0x322380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32237Cu;
        // 0x322380: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32237Cu, 0x322384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x322384u;
label_322384:
    // 0x322384: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x322384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_322388:
    // 0x322388: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x322388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_32238c:
    // 0x32238c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32238cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322390:
    // 0x322390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322394:
    // 0x322394: 0xc0af288  jal         func_2BCA20
label_322398:
    if (ctx->pc == 0x322398u) {
        ctx->pc = 0x322398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322394u;
        // 0x322398: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32239Cu;
        goto label_32239c;
    }
    ctx->pc = 0x322394u;
    SET_GPR_U32(ctx, 31, 0x32239Cu);
    ctx->pc = 0x322398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322394u;
    // 0x322398: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BCA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BCA20u, 0x322394u, 0x32239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32239Cu;
label_32239c:
    // 0x32239c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32239cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3223a0:
    // 0x3223a0: 0xc0a35d6  jal         func_28D758
label_3223a4:
    if (ctx->pc == 0x3223A4u) {
        ctx->pc = 0x3223A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3223A0u;
        // 0x3223a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3223A8u;
        goto label_3223a8;
    }
    ctx->pc = 0x3223A0u;
    SET_GPR_U32(ctx, 31, 0x3223A8u);
    ctx->pc = 0x3223A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3223A0u;
    // 0x3223a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x3223A0u, 0x3223A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3223A8u;
label_3223a8:
    // 0x3223a8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3223a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3223ac:
    // 0x3223ac: 0x2ea20010  sltiu       $v0, $s5, 0x10
    ctx->pc = 0x3223acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_3223b0:
    // 0x3223b0: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
label_3223b4:
    if (ctx->pc == 0x3223B4u) {
        ctx->pc = 0x3223B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3223B0u;
        // 0x3223b4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3223B8u;
        goto label_3223b8;
    }
    ctx->pc = 0x3223B0u;
    {
        const bool branch_taken_0x3223b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3223B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3223B0u;
        // 0x3223b4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3223b0) {
            ctx->pc = 0x322278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322278;
        }
    }
    ctx->pc = 0x3223B8u;
label_3223b8:
    // 0x3223b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3223b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3223bc:
    // 0x3223bc: 0xc0a576c  jal         func_295DB0
label_3223c0:
    if (ctx->pc == 0x3223C0u) {
        ctx->pc = 0x3223C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3223BCu;
        // 0x3223c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3223C4u;
        goto label_3223c4;
    }
    ctx->pc = 0x3223BCu;
    SET_GPR_U32(ctx, 31, 0x3223C4u);
    ctx->pc = 0x3223C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3223BCu;
    // 0x3223c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x3223BCu, 0x3223C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3223C4u;
label_3223c4:
    // 0x3223c4: 0x162840  sll         $a1, $s6, 1
    ctx->pc = 0x3223c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
label_3223c8:
    // 0x3223c8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3223c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3223cc:
    // 0x3223cc: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x3223ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
label_3223d0:
    // 0x3223d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3223d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3223d4:
    // 0x3223d4: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3223d4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_3223d8:
    // 0x3223d8: 0xc0a5776  jal         func_295DD8
label_3223dc:
    if (ctx->pc == 0x3223DCu) {
        ctx->pc = 0x3223DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3223D8u;
        // 0x3223dc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3223E0u;
        goto label_3223e0;
    }
    ctx->pc = 0x3223D8u;
    SET_GPR_U32(ctx, 31, 0x3223E0u);
    ctx->pc = 0x3223DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3223D8u;
    // 0x3223dc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DD8u, 0x3223D8u, 0x3223E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3223E0u;
label_3223e0:
    // 0x3223e0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3223e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_3223e4:
    // 0x3223e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3223e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3223e8:
    // 0x3223e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3223e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3223ec:
    // 0x3223ec: 0xc0a5922  jal         func_296488
label_3223f0:
    if (ctx->pc == 0x3223F0u) {
        ctx->pc = 0x3223F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3223ECu;
        // 0x3223f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3223F4u;
        goto label_3223f4;
    }
    ctx->pc = 0x3223ECu;
    SET_GPR_U32(ctx, 31, 0x3223F4u);
    ctx->pc = 0x3223F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3223ECu;
    // 0x3223f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296488u, 0x3223ECu, 0x3223F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3223F4u;
label_3223f4:
    // 0x3223f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3223f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3223f8:
    // 0x3223f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3223f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3223fc:
    // 0x3223fc: 0xa2820275  sb          $v0, 0x275($s4)
    ctx->pc = 0x3223fcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 629), (uint8_t)GPR_U32(ctx, 2));
label_322400:
    // 0x322400: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x322400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_322404:
    // 0x322404: 0xc0a55b4  jal         func_2956D0
label_322408:
    if (ctx->pc == 0x322408u) {
        ctx->pc = 0x322408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322404u;
        // 0x322408: 0xa2830274  sb          $v1, 0x274($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 628), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32240Cu;
        goto label_32240c;
    }
    ctx->pc = 0x322404u;
    SET_GPR_U32(ctx, 31, 0x32240Cu);
    ctx->pc = 0x322408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322404u;
    // 0x322408: 0xa2830274  sb          $v1, 0x274($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 628), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2956D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2956D0u, 0x322404u, 0x32240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32240Cu;
label_32240c:
    // 0x32240c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x32240cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_322410:
    // 0x322410: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x322410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_322414:
    // 0x322414: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x322414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_322418:
    // 0x322418: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x322418u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_32241c:
    // 0x32241c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x32241cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_322420:
    // 0x322420: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x322420u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_322424:
    // 0x322424: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x322424u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_322428:
    // 0x322428: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x322428u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32242c:
    // 0x32242c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x32242cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_322430:
    // 0x322430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x322430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_322434:
    // 0x322434: 0x3e00008  jr          $ra
label_322438:
    if (ctx->pc == 0x322438u) {
        ctx->pc = 0x322438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322434u;
        // 0x322438: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32243Cu;
        goto label_32243c;
    }
    ctx->pc = 0x322434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322434u;
        // 0x322438: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32243Cu;
label_32243c:
    // 0x32243c: 0x0  nop
    ctx->pc = 0x32243cu;
    // NOP
    ctx->pc = 0x322440u;
}
