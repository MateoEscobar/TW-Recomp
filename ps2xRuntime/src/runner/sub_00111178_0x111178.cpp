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

// Function: sub_00111178
// Address: 0x111178 - 0x111428
void sub_00111178_0x111178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111178_0x111178");
#endif

    switch (ctx->pc) {
        case 0x111178u: goto label_111178;
        case 0x11117cu: goto label_11117c;
        case 0x111180u: goto label_111180;
        case 0x111184u: goto label_111184;
        case 0x111188u: goto label_111188;
        case 0x11118cu: goto label_11118c;
        case 0x111190u: goto label_111190;
        case 0x111194u: goto label_111194;
        case 0x111198u: goto label_111198;
        case 0x11119cu: goto label_11119c;
        case 0x1111a0u: goto label_1111a0;
        case 0x1111a4u: goto label_1111a4;
        case 0x1111a8u: goto label_1111a8;
        case 0x1111acu: goto label_1111ac;
        case 0x1111b0u: goto label_1111b0;
        case 0x1111b4u: goto label_1111b4;
        case 0x1111b8u: goto label_1111b8;
        case 0x1111bcu: goto label_1111bc;
        case 0x1111c0u: goto label_1111c0;
        case 0x1111c4u: goto label_1111c4;
        case 0x1111c8u: goto label_1111c8;
        case 0x1111ccu: goto label_1111cc;
        case 0x1111d0u: goto label_1111d0;
        case 0x1111d4u: goto label_1111d4;
        case 0x1111d8u: goto label_1111d8;
        case 0x1111dcu: goto label_1111dc;
        case 0x1111e0u: goto label_1111e0;
        case 0x1111e4u: goto label_1111e4;
        case 0x1111e8u: goto label_1111e8;
        case 0x1111ecu: goto label_1111ec;
        case 0x1111f0u: goto label_1111f0;
        case 0x1111f4u: goto label_1111f4;
        case 0x1111f8u: goto label_1111f8;
        case 0x1111fcu: goto label_1111fc;
        case 0x111200u: goto label_111200;
        case 0x111204u: goto label_111204;
        case 0x111208u: goto label_111208;
        case 0x11120cu: goto label_11120c;
        case 0x111210u: goto label_111210;
        case 0x111214u: goto label_111214;
        case 0x111218u: goto label_111218;
        case 0x11121cu: goto label_11121c;
        case 0x111220u: goto label_111220;
        case 0x111224u: goto label_111224;
        case 0x111228u: goto label_111228;
        case 0x11122cu: goto label_11122c;
        case 0x111230u: goto label_111230;
        case 0x111234u: goto label_111234;
        case 0x111238u: goto label_111238;
        case 0x11123cu: goto label_11123c;
        case 0x111240u: goto label_111240;
        case 0x111244u: goto label_111244;
        case 0x111248u: goto label_111248;
        case 0x11124cu: goto label_11124c;
        case 0x111250u: goto label_111250;
        case 0x111254u: goto label_111254;
        case 0x111258u: goto label_111258;
        case 0x11125cu: goto label_11125c;
        case 0x111260u: goto label_111260;
        case 0x111264u: goto label_111264;
        case 0x111268u: goto label_111268;
        case 0x11126cu: goto label_11126c;
        case 0x111270u: goto label_111270;
        case 0x111274u: goto label_111274;
        case 0x111278u: goto label_111278;
        case 0x11127cu: goto label_11127c;
        case 0x111280u: goto label_111280;
        case 0x111284u: goto label_111284;
        case 0x111288u: goto label_111288;
        case 0x11128cu: goto label_11128c;
        case 0x111290u: goto label_111290;
        case 0x111294u: goto label_111294;
        case 0x111298u: goto label_111298;
        case 0x11129cu: goto label_11129c;
        case 0x1112a0u: goto label_1112a0;
        case 0x1112a4u: goto label_1112a4;
        case 0x1112a8u: goto label_1112a8;
        case 0x1112acu: goto label_1112ac;
        case 0x1112b0u: goto label_1112b0;
        case 0x1112b4u: goto label_1112b4;
        case 0x1112b8u: goto label_1112b8;
        case 0x1112bcu: goto label_1112bc;
        case 0x1112c0u: goto label_1112c0;
        case 0x1112c4u: goto label_1112c4;
        case 0x1112c8u: goto label_1112c8;
        case 0x1112ccu: goto label_1112cc;
        case 0x1112d0u: goto label_1112d0;
        case 0x1112d4u: goto label_1112d4;
        case 0x1112d8u: goto label_1112d8;
        case 0x1112dcu: goto label_1112dc;
        case 0x1112e0u: goto label_1112e0;
        case 0x1112e4u: goto label_1112e4;
        case 0x1112e8u: goto label_1112e8;
        case 0x1112ecu: goto label_1112ec;
        case 0x1112f0u: goto label_1112f0;
        case 0x1112f4u: goto label_1112f4;
        case 0x1112f8u: goto label_1112f8;
        case 0x1112fcu: goto label_1112fc;
        case 0x111300u: goto label_111300;
        case 0x111304u: goto label_111304;
        case 0x111308u: goto label_111308;
        case 0x11130cu: goto label_11130c;
        case 0x111310u: goto label_111310;
        case 0x111314u: goto label_111314;
        case 0x111318u: goto label_111318;
        case 0x11131cu: goto label_11131c;
        case 0x111320u: goto label_111320;
        case 0x111324u: goto label_111324;
        case 0x111328u: goto label_111328;
        case 0x11132cu: goto label_11132c;
        case 0x111330u: goto label_111330;
        case 0x111334u: goto label_111334;
        case 0x111338u: goto label_111338;
        case 0x11133cu: goto label_11133c;
        case 0x111340u: goto label_111340;
        case 0x111344u: goto label_111344;
        case 0x111348u: goto label_111348;
        case 0x11134cu: goto label_11134c;
        case 0x111350u: goto label_111350;
        case 0x111354u: goto label_111354;
        case 0x111358u: goto label_111358;
        case 0x11135cu: goto label_11135c;
        case 0x111360u: goto label_111360;
        case 0x111364u: goto label_111364;
        case 0x111368u: goto label_111368;
        case 0x11136cu: goto label_11136c;
        case 0x111370u: goto label_111370;
        case 0x111374u: goto label_111374;
        case 0x111378u: goto label_111378;
        case 0x11137cu: goto label_11137c;
        case 0x111380u: goto label_111380;
        case 0x111384u: goto label_111384;
        case 0x111388u: goto label_111388;
        case 0x11138cu: goto label_11138c;
        case 0x111390u: goto label_111390;
        case 0x111394u: goto label_111394;
        case 0x111398u: goto label_111398;
        case 0x11139cu: goto label_11139c;
        case 0x1113a0u: goto label_1113a0;
        case 0x1113a4u: goto label_1113a4;
        case 0x1113a8u: goto label_1113a8;
        case 0x1113acu: goto label_1113ac;
        case 0x1113b0u: goto label_1113b0;
        case 0x1113b4u: goto label_1113b4;
        case 0x1113b8u: goto label_1113b8;
        case 0x1113bcu: goto label_1113bc;
        case 0x1113c0u: goto label_1113c0;
        case 0x1113c4u: goto label_1113c4;
        case 0x1113c8u: goto label_1113c8;
        case 0x1113ccu: goto label_1113cc;
        case 0x1113d0u: goto label_1113d0;
        case 0x1113d4u: goto label_1113d4;
        case 0x1113d8u: goto label_1113d8;
        case 0x1113dcu: goto label_1113dc;
        case 0x1113e0u: goto label_1113e0;
        case 0x1113e4u: goto label_1113e4;
        case 0x1113e8u: goto label_1113e8;
        case 0x1113ecu: goto label_1113ec;
        case 0x1113f0u: goto label_1113f0;
        case 0x1113f4u: goto label_1113f4;
        case 0x1113f8u: goto label_1113f8;
        case 0x1113fcu: goto label_1113fc;
        case 0x111400u: goto label_111400;
        case 0x111404u: goto label_111404;
        case 0x111408u: goto label_111408;
        case 0x11140cu: goto label_11140c;
        case 0x111410u: goto label_111410;
        case 0x111414u: goto label_111414;
        case 0x111418u: goto label_111418;
        case 0x11141cu: goto label_11141c;
        case 0x111420u: goto label_111420;
        case 0x111424u: goto label_111424;
        default: break;
    }

    ctx->pc = 0x111178u;

label_111178:
    // 0x111178: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x111178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_11117c:
    // 0x11117c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11117cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_111180:
    // 0x111180: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x111180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_111184:
    // 0x111184: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x111184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_111188:
    // 0x111188: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x111188u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11118c:
    // 0x11118c: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x11118cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_111190:
    // 0x111190: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x111190u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_111194:
    // 0x111194: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x111194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_111198:
    // 0x111198: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x111198u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11119c:
    // 0x11119c: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x11119cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_1111a0:
    // 0x1111a0: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x1111a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_1111a4:
    // 0x1111a4: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1111a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_1111a8:
    // 0x1111a8: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x1111a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1111ac:
    // 0x1111ac: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x1111acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1111b0:
    // 0x1111b0: 0x8c46bce4  lw          $a2, -0x431C($v0)
    ctx->pc = 0x1111b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950116)));
label_1111b4:
    // 0x1111b4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1111b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1111b8:
    // 0x1111b8: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x1111b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_1111bc:
    // 0x1111bc: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x1111bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_1111c0:
    // 0x1111c0: 0x60f809  jalr        $v1
label_1111c4:
    if (ctx->pc == 0x1111C4u) {
        ctx->pc = 0x1111C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111C0u;
        // 0x1111c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1111C8u;
        goto label_1111c8;
    }
    ctx->pc = 0x1111C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1111C8u);
        ctx->pc = 0x1111C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111C0u;
        // 0x1111c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1111C0u, 0x1111C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1111C8u;
label_1111c8:
    // 0x1111c8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1111c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1111cc:
    // 0x1111cc: 0xc107444  jal         func_41D110
label_1111d0:
    if (ctx->pc == 0x1111D0u) {
        ctx->pc = 0x1111D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111CCu;
        // 0x1111d0: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1111D4u;
        goto label_1111d4;
    }
    ctx->pc = 0x1111CCu;
    SET_GPR_U32(ctx, 31, 0x1111D4u);
    ctx->pc = 0x1111D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1111CCu;
    // 0x1111d0: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x1111CCu, 0x1111D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111D4u;
label_1111d4:
    // 0x1111d4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1111d8:
    if (ctx->pc == 0x1111D8u) {
        ctx->pc = 0x1111D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111D4u;
        // 0x1111d8: 0x3c060054  lui         $a2, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1111DCu;
        goto label_1111dc;
    }
    ctx->pc = 0x1111D4u;
    {
        const bool branch_taken_0x1111d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1111D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111D4u;
        // 0x1111d8: 0x3c060054  lui         $a2, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111d4) {
            ctx->pc = 0x11123Cu;
            goto label_11123c;
        }
    }
    ctx->pc = 0x1111DCu;
label_1111dc:
    // 0x1111dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1111dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1111e0:
    // 0x1111e0: 0x24c66f78  addiu       $a2, $a2, 0x6F78
    ctx->pc = 0x1111e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28536));
label_1111e4:
    // 0x1111e4: 0xc10ca04  jal         func_432810
label_1111e8:
    if (ctx->pc == 0x1111E8u) {
        ctx->pc = 0x1111E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111E4u;
        // 0x1111e8: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1111ECu;
        goto label_1111ec;
    }
    ctx->pc = 0x1111E4u;
    SET_GPR_U32(ctx, 31, 0x1111ECu);
    ctx->pc = 0x1111E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1111E4u;
    // 0x1111e8: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1111E4u, 0x1111ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111ECu;
label_1111ec:
    // 0x1111ec: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1111ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1111f0:
    // 0x1111f0: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1111f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_1111f4:
    // 0x1111f4: 0x24c66f98  addiu       $a2, $a2, 0x6F98
    ctx->pc = 0x1111f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28568));
label_1111f8:
    // 0x1111f8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1111f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1111fc:
    // 0x1111fc: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x1111fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_111200:
    // 0x111200: 0xc10ca04  jal         func_432810
label_111204:
    if (ctx->pc == 0x111204u) {
        ctx->pc = 0x111204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111200u;
        // 0x111204: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111208u;
        goto label_111208;
    }
    ctx->pc = 0x111200u;
    SET_GPR_U32(ctx, 31, 0x111208u);
    ctx->pc = 0x111204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111200u;
    // 0x111204: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x111200u, 0x111208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111208u;
label_111208:
    // 0x111208: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x111208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_11120c:
    // 0x11120c: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x11120cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_111210:
    // 0x111210: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x111210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_111214:
    // 0x111214: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x111214u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_111218:
    // 0x111218: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x111218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_11121c:
    // 0x11121c: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x11121cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_111220:
    // 0x111220: 0x8c687a28  lw          $t0, 0x7A28($v1)
    ctx->pc = 0x111220u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31272)));
label_111224:
    // 0x111224: 0x24c66fb8  addiu       $a2, $a2, 0x6FB8
    ctx->pc = 0x111224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28600));
label_111228:
    // 0x111228: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x111228u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11122c:
    // 0x11122c: 0xc10ca04  jal         func_432810
label_111230:
    if (ctx->pc == 0x111230u) {
        ctx->pc = 0x111230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11122Cu;
        // 0x111230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111234u;
        goto label_111234;
    }
    ctx->pc = 0x11122Cu;
    SET_GPR_U32(ctx, 31, 0x111234u);
    ctx->pc = 0x111230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11122Cu;
    // 0x111230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x11122Cu, 0x111234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111234u;
label_111234:
    // 0x111234: 0x1000001d  b           . + 4 + (0x1D << 2)
label_111238:
    if (ctx->pc == 0x111238u) {
        ctx->pc = 0x111238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111234u;
        // 0x111238: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11123Cu;
        goto label_11123c;
    }
    ctx->pc = 0x111234u;
    {
        const bool branch_taken_0x111234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111234u;
        // 0x111238: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111234) {
            ctx->pc = 0x1112ACu;
            goto label_1112ac;
        }
    }
    ctx->pc = 0x11123Cu;
label_11123c:
    // 0x11123c: 0x3c100003  lui         $s0, 0x3
    ctx->pc = 0x11123cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)3 << 16));
label_111240:
    // 0x111240: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x111240u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_111244:
    // 0x111244: 0x36108000  ori         $s0, $s0, 0x8000
    ctx->pc = 0x111244u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
label_111248:
    // 0x111248: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x111248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11124c:
    // 0x11124c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x11124cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_111250:
    // 0x111250: 0x24c66fc0  addiu       $a2, $a2, 0x6FC0
    ctx->pc = 0x111250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28608));
label_111254:
    // 0x111254: 0x8e087a28  lw          $t0, 0x7A28($s0)
    ctx->pc = 0x111254u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31272)));
label_111258:
    // 0x111258: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x111258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_11125c:
    // 0x11125c: 0xc10ca04  jal         func_432810
label_111260:
    if (ctx->pc == 0x111260u) {
        ctx->pc = 0x111260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11125Cu;
        // 0x111260: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111264u;
        goto label_111264;
    }
    ctx->pc = 0x11125Cu;
    SET_GPR_U32(ctx, 31, 0x111264u);
    ctx->pc = 0x111260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11125Cu;
    // 0x111260: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x11125Cu, 0x111264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111264u;
label_111264:
    // 0x111264: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x111264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_111268:
    // 0x111268: 0x8e087a28  lw          $t0, 0x7A28($s0)
    ctx->pc = 0x111268u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31272)));
label_11126c:
    // 0x11126c: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x11126cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_111270:
    // 0x111270: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x111270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_111274:
    // 0x111274: 0x24c66fe0  addiu       $a2, $a2, 0x6FE0
    ctx->pc = 0x111274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28640));
label_111278:
    // 0x111278: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x111278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_11127c:
    // 0x11127c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x11127cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_111280:
    // 0x111280: 0xc10ca04  jal         func_432810
label_111284:
    if (ctx->pc == 0x111284u) {
        ctx->pc = 0x111284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111280u;
        // 0x111284: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111288u;
        goto label_111288;
    }
    ctx->pc = 0x111280u;
    SET_GPR_U32(ctx, 31, 0x111288u);
    ctx->pc = 0x111284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111280u;
    // 0x111284: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x111280u, 0x111288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111288u;
label_111288:
    // 0x111288: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x111288u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_11128c:
    // 0x11128c: 0x8e087a28  lw          $t0, 0x7A28($s0)
    ctx->pc = 0x11128cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31272)));
label_111290:
    // 0x111290: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x111290u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_111294:
    // 0x111294: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x111294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_111298:
    // 0x111298: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x111298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11129c:
    // 0x11129c: 0x24c67000  addiu       $a2, $a2, 0x7000
    ctx->pc = 0x11129cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
label_1112a0:
    // 0x1112a0: 0xc10ca04  jal         func_432810
label_1112a4:
    if (ctx->pc == 0x1112A4u) {
        ctx->pc = 0x1112A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112A0u;
        // 0x1112a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1112A8u;
        goto label_1112a8;
    }
    ctx->pc = 0x1112A0u;
    SET_GPR_U32(ctx, 31, 0x1112A8u);
    ctx->pc = 0x1112A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112A0u;
    // 0x1112a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1112A0u, 0x1112A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112A8u;
label_1112a8:
    // 0x1112a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1112a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1112ac:
    // 0x1112ac: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1112acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_1112b0:
    // 0x1112b0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1112b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1112b4:
    // 0x1112b4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1112b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1112b8:
    // 0x1112b8: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x1112b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1112bc:
    // 0x1112bc: 0x8e237a28  lw          $v1, 0x7A28($s1)
    ctx->pc = 0x1112bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31272)));
label_1112c0:
    // 0x1112c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1112c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1112c4:
    // 0x1112c4: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
label_1112c8:
    if (ctx->pc == 0x1112C8u) {
        ctx->pc = 0x1112C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112C4u;
        // 0x1112c8: 0xae237a28  sw          $v1, 0x7A28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 31272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1112CCu;
        goto label_1112cc;
    }
    ctx->pc = 0x1112C4u;
    {
        const bool branch_taken_0x1112c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1112C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112C4u;
        // 0x1112c8: 0xae237a28  sw          $v1, 0x7A28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 31272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112c4) {
            ctx->pc = 0x1112D0u;
            goto label_1112d0;
        }
    }
    ctx->pc = 0x1112CCu;
label_1112cc:
    // 0x1112cc: 0xae207a28  sw          $zero, 0x7A28($s1)
    ctx->pc = 0x1112ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 31272), GPR_U32(ctx, 0));
label_1112d0:
    // 0x1112d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1112d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1112d4:
    // 0x1112d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1112d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1112d8:
    // 0x1112d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1112d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1112dc:
    // 0x1112dc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1112dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1112e0:
    // 0x1112e0: 0xc043e94  jal         func_10FA50
label_1112e4:
    if (ctx->pc == 0x1112E4u) {
        ctx->pc = 0x1112E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112E0u;
        // 0x1112e4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1112E8u;
        goto label_1112e8;
    }
    ctx->pc = 0x1112E0u;
    SET_GPR_U32(ctx, 31, 0x1112E8u);
    ctx->pc = 0x1112E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112E0u;
    // 0x1112e4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA50u, 0x1112E0u, 0x1112E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112E8u;
label_1112e8:
    // 0x1112e8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1112e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1112ec:
    // 0x1112ec: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1112ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1112f0:
    // 0x1112f0: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x1112f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
label_1112f4:
    // 0x1112f4: 0x2429821  addu        $s3, $s2, $v0
    ctx->pc = 0x1112f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1112f8:
    // 0x1112f8: 0x261091e0  addiu       $s0, $s0, -0x6E20
    ctx->pc = 0x1112f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939104));
label_1112fc:
    // 0x1112fc: 0xae604270  sw          $zero, 0x4270($s3)
    ctx->pc = 0x1112fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 17008), GPR_U32(ctx, 0));
label_111300:
    // 0x111300: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x111300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_111304:
    // 0x111304: 0xc050fda  jal         func_143F68
label_111308:
    if (ctx->pc == 0x111308u) {
        ctx->pc = 0x111308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111304u;
        // 0x111308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11130Cu;
        goto label_11130c;
    }
    ctx->pc = 0x111304u;
    SET_GPR_U32(ctx, 31, 0x11130Cu);
    ctx->pc = 0x111308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111304u;
    // 0x111308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x111304u, 0x11130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11130Cu;
label_11130c:
    // 0x11130c: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x11130cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_111310:
    // 0x111310: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x111310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_111314:
    // 0x111314: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x111314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_111318:
    // 0x111318: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11131c:
    // 0x11131c: 0xc043f36  jal         func_10FCD8
label_111320:
    if (ctx->pc == 0x111320u) {
        ctx->pc = 0x111320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11131Cu;
        // 0x111320: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111324u;
        goto label_111324;
    }
    ctx->pc = 0x11131Cu;
    SET_GPR_U32(ctx, 31, 0x111324u);
    ctx->pc = 0x111320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11131Cu;
    // 0x111320: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x11131Cu, 0x111324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111324u;
label_111324:
    // 0x111324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_111328:
    // 0x111328: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x111328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11132c:
    // 0x11132c: 0xc050fda  jal         func_143F68
label_111330:
    if (ctx->pc == 0x111330u) {
        ctx->pc = 0x111330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11132Cu;
        // 0x111330: 0xae227a2c  sw          $v0, 0x7A2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 31276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111334u;
        goto label_111334;
    }
    ctx->pc = 0x11132Cu;
    SET_GPR_U32(ctx, 31, 0x111334u);
    ctx->pc = 0x111330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11132Cu;
    // 0x111330: 0xae227a2c  sw          $v0, 0x7A2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 31276), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x11132Cu, 0x111334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111334u;
label_111334:
    // 0x111334: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x111334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_111338:
    // 0x111338: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x111338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11133c:
    // 0x11133c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x11133cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_111340:
    // 0x111340: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_111344:
    // 0x111344: 0xc043f36  jal         func_10FCD8
label_111348:
    if (ctx->pc == 0x111348u) {
        ctx->pc = 0x111348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111344u;
        // 0x111348: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11134Cu;
        goto label_11134c;
    }
    ctx->pc = 0x111344u;
    SET_GPR_U32(ctx, 31, 0x11134Cu);
    ctx->pc = 0x111348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111344u;
    // 0x111348: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x111344u, 0x11134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11134Cu;
label_11134c:
    // 0x11134c: 0x8e257a2c  lw          $a1, 0x7A2C($s1)
    ctx->pc = 0x11134cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31276)));
label_111350:
    // 0x111350: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x111350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_111354:
    // 0x111354: 0xae227a30  sw          $v0, 0x7A30($s1)
    ctx->pc = 0x111354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 31280), GPR_U32(ctx, 2));
label_111358:
    // 0x111358: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x111358u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_11135c:
    // 0x11135c: 0xc044556  jal         func_111558
label_111360:
    if (ctx->pc == 0x111360u) {
        ctx->pc = 0x111360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11135Cu;
        // 0x111360: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x111364u;
        goto label_111364;
    }
    ctx->pc = 0x11135Cu;
    SET_GPR_U32(ctx, 31, 0x111364u);
    ctx->pc = 0x111360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11135Cu;
    // 0x111360: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x111558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111558u, 0x11135Cu, 0x111364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111364u;
label_111364:
    // 0x111364: 0x8e257a30  lw          $a1, 0x7A30($s1)
    ctx->pc = 0x111364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31280)));
label_111368:
    // 0x111368: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x111368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11136c:
    // 0x11136c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11136cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_111370:
    // 0x111370: 0xc044556  jal         func_111558
label_111374:
    if (ctx->pc == 0x111374u) {
        ctx->pc = 0x111374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111370u;
        // 0x111374: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x111378u;
        goto label_111378;
    }
    ctx->pc = 0x111370u;
    SET_GPR_U32(ctx, 31, 0x111378u);
    ctx->pc = 0x111374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111370u;
    // 0x111374: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x111558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111558u, 0x111370u, 0x111378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111378u;
label_111378:
    // 0x111378: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x111378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_11137c:
    // 0x11137c: 0x3442fa2c  ori         $v0, $v0, 0xFA2C
    ctx->pc = 0x11137cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64044);
label_111380:
    // 0x111380: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x111380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_111384:
    // 0x111384: 0xc043d5e  jal         func_10F578
label_111388:
    if (ctx->pc == 0x111388u) {
        ctx->pc = 0x111388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111384u;
        // 0x111388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11138Cu;
        goto label_11138c;
    }
    ctx->pc = 0x111384u;
    SET_GPR_U32(ctx, 31, 0x11138Cu);
    ctx->pc = 0x111388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111384u;
    // 0x111388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x111384u, 0x11138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11138Cu;
label_11138c:
    // 0x11138c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_111390:
    if (ctx->pc == 0x111390u) {
        ctx->pc = 0x111390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11138Cu;
        // 0x111390: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111394u;
        goto label_111394;
    }
    ctx->pc = 0x11138Cu;
    {
        const bool branch_taken_0x11138c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11138Cu;
        // 0x111390: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11138c) {
            ctx->pc = 0x1113ACu;
            goto label_1113ac;
        }
    }
    ctx->pc = 0x111394u;
label_111394:
    // 0x111394: 0xc043d5e  jal         func_10F578
label_111398:
    if (ctx->pc == 0x111398u) {
        ctx->pc = 0x111398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111394u;
        // 0x111398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11139Cu;
        goto label_11139c;
    }
    ctx->pc = 0x111394u;
    SET_GPR_U32(ctx, 31, 0x11139Cu);
    ctx->pc = 0x111398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111394u;
    // 0x111398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x111394u, 0x11139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11139Cu;
label_11139c:
    // 0x11139c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11139cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1113a0:
    // 0x1113a0: 0xc04685c  jal         func_11A170
label_1113a4:
    if (ctx->pc == 0x1113A4u) {
        ctx->pc = 0x1113A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113A0u;
        // 0x1113a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1113A8u;
        goto label_1113a8;
    }
    ctx->pc = 0x1113A0u;
    SET_GPR_U32(ctx, 31, 0x1113A8u);
    ctx->pc = 0x1113A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113A0u;
    // 0x1113a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A170u, 0x1113A0u, 0x1113A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113A8u;
label_1113a8:
    // 0x1113a8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1113a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_1113ac:
    // 0x1113ac: 0x3442fa30  ori         $v0, $v0, 0xFA30
    ctx->pc = 0x1113acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64048);
label_1113b0:
    // 0x1113b0: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x1113b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1113b4:
    // 0x1113b4: 0xc043d5e  jal         func_10F578
label_1113b8:
    if (ctx->pc == 0x1113B8u) {
        ctx->pc = 0x1113B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113B4u;
        // 0x1113b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1113BCu;
        goto label_1113bc;
    }
    ctx->pc = 0x1113B4u;
    SET_GPR_U32(ctx, 31, 0x1113BCu);
    ctx->pc = 0x1113B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113B4u;
    // 0x1113b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x1113B4u, 0x1113BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113BCu;
label_1113bc:
    // 0x1113bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1113c0:
    if (ctx->pc == 0x1113C0u) {
        ctx->pc = 0x1113C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113BCu;
        // 0x1113c0: 0x8ea5bce4  lw          $a1, -0x431C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1113C4u;
        goto label_1113c4;
    }
    ctx->pc = 0x1113BCu;
    {
        const bool branch_taken_0x1113bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1113C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113BCu;
        // 0x1113c0: 0x8ea5bce4  lw          $a1, -0x431C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113bc) {
            ctx->pc = 0x1113DCu;
            goto label_1113dc;
        }
    }
    ctx->pc = 0x1113C4u;
label_1113c4:
    // 0x1113c4: 0xc043d5e  jal         func_10F578
label_1113c8:
    if (ctx->pc == 0x1113C8u) {
        ctx->pc = 0x1113C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113C4u;
        // 0x1113c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1113CCu;
        goto label_1113cc;
    }
    ctx->pc = 0x1113C4u;
    SET_GPR_U32(ctx, 31, 0x1113CCu);
    ctx->pc = 0x1113C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113C4u;
    // 0x1113c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x1113C4u, 0x1113CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113CCu;
label_1113cc:
    // 0x1113cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1113ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1113d0:
    // 0x1113d0: 0xc04685c  jal         func_11A170
label_1113d4:
    if (ctx->pc == 0x1113D4u) {
        ctx->pc = 0x1113D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113D0u;
        // 0x1113d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1113D8u;
        goto label_1113d8;
    }
    ctx->pc = 0x1113D0u;
    SET_GPR_U32(ctx, 31, 0x1113D8u);
    ctx->pc = 0x1113D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113D0u;
    // 0x1113d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A170u, 0x1113D0u, 0x1113D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113D8u;
label_1113d8:
    // 0x1113d8: 0x8ea5bce4  lw          $a1, -0x431C($s5)
    ctx->pc = 0x1113d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950116)));
label_1113dc:
    // 0x1113dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1113dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1113e0:
    // 0x1113e0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1113e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1113e4:
    // 0x1113e4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1113e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1113e8:
    // 0x1113e8: 0x60f809  jalr        $v1
label_1113ec:
    if (ctx->pc == 0x1113ECu) {
        ctx->pc = 0x1113ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113E8u;
        // 0x1113ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1113F0u;
        goto label_1113f0;
    }
    ctx->pc = 0x1113E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1113F0u);
        ctx->pc = 0x1113ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113E8u;
        // 0x1113ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1113E8u, 0x1113F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1113F0u;
label_1113f0:
    // 0x1113f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1113f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1113f4:
    // 0x1113f4: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1113f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1113f8:
    // 0x1113f8: 0xae624270  sw          $v0, 0x4270($s3)
    ctx->pc = 0x1113f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 17008), GPR_U32(ctx, 2));
label_1113fc:
    // 0x1113fc: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1113fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_111400:
    // 0x111400: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x111400u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_111404:
    // 0x111404: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x111404u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_111408:
    // 0x111408: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x111408u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_11140c:
    // 0x11140c: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x11140cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_111410:
    // 0x111410: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x111410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_111414:
    // 0x111414: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x111414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_111418:
    // 0x111418: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x111418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11141c:
    // 0x11141c: 0x3e00008  jr          $ra
label_111420:
    if (ctx->pc == 0x111420u) {
        ctx->pc = 0x111420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11141Cu;
        // 0x111420: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111424u;
        goto label_111424;
    }
    ctx->pc = 0x11141Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11141Cu;
        // 0x111420: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11141Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111424u;
label_111424:
    // 0x111424: 0x0  nop
    ctx->pc = 0x111424u;
    // NOP
    ctx->pc = 0x111428u;
}
