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

// Function: sub_00200FA8
// Address: 0x200fa8 - 0x201280
void sub_00200FA8_0x200fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200FA8_0x200fa8");
#endif

    switch (ctx->pc) {
        case 0x200fa8u: goto label_200fa8;
        case 0x200facu: goto label_200fac;
        case 0x200fb0u: goto label_200fb0;
        case 0x200fb4u: goto label_200fb4;
        case 0x200fb8u: goto label_200fb8;
        case 0x200fbcu: goto label_200fbc;
        case 0x200fc0u: goto label_200fc0;
        case 0x200fc4u: goto label_200fc4;
        case 0x200fc8u: goto label_200fc8;
        case 0x200fccu: goto label_200fcc;
        case 0x200fd0u: goto label_200fd0;
        case 0x200fd4u: goto label_200fd4;
        case 0x200fd8u: goto label_200fd8;
        case 0x200fdcu: goto label_200fdc;
        case 0x200fe0u: goto label_200fe0;
        case 0x200fe4u: goto label_200fe4;
        case 0x200fe8u: goto label_200fe8;
        case 0x200fecu: goto label_200fec;
        case 0x200ff0u: goto label_200ff0;
        case 0x200ff4u: goto label_200ff4;
        case 0x200ff8u: goto label_200ff8;
        case 0x200ffcu: goto label_200ffc;
        case 0x201000u: goto label_201000;
        case 0x201004u: goto label_201004;
        case 0x201008u: goto label_201008;
        case 0x20100cu: goto label_20100c;
        case 0x201010u: goto label_201010;
        case 0x201014u: goto label_201014;
        case 0x201018u: goto label_201018;
        case 0x20101cu: goto label_20101c;
        case 0x201020u: goto label_201020;
        case 0x201024u: goto label_201024;
        case 0x201028u: goto label_201028;
        case 0x20102cu: goto label_20102c;
        case 0x201030u: goto label_201030;
        case 0x201034u: goto label_201034;
        case 0x201038u: goto label_201038;
        case 0x20103cu: goto label_20103c;
        case 0x201040u: goto label_201040;
        case 0x201044u: goto label_201044;
        case 0x201048u: goto label_201048;
        case 0x20104cu: goto label_20104c;
        case 0x201050u: goto label_201050;
        case 0x201054u: goto label_201054;
        case 0x201058u: goto label_201058;
        case 0x20105cu: goto label_20105c;
        case 0x201060u: goto label_201060;
        case 0x201064u: goto label_201064;
        case 0x201068u: goto label_201068;
        case 0x20106cu: goto label_20106c;
        case 0x201070u: goto label_201070;
        case 0x201074u: goto label_201074;
        case 0x201078u: goto label_201078;
        case 0x20107cu: goto label_20107c;
        case 0x201080u: goto label_201080;
        case 0x201084u: goto label_201084;
        case 0x201088u: goto label_201088;
        case 0x20108cu: goto label_20108c;
        case 0x201090u: goto label_201090;
        case 0x201094u: goto label_201094;
        case 0x201098u: goto label_201098;
        case 0x20109cu: goto label_20109c;
        case 0x2010a0u: goto label_2010a0;
        case 0x2010a4u: goto label_2010a4;
        case 0x2010a8u: goto label_2010a8;
        case 0x2010acu: goto label_2010ac;
        case 0x2010b0u: goto label_2010b0;
        case 0x2010b4u: goto label_2010b4;
        case 0x2010b8u: goto label_2010b8;
        case 0x2010bcu: goto label_2010bc;
        case 0x2010c0u: goto label_2010c0;
        case 0x2010c4u: goto label_2010c4;
        case 0x2010c8u: goto label_2010c8;
        case 0x2010ccu: goto label_2010cc;
        case 0x2010d0u: goto label_2010d0;
        case 0x2010d4u: goto label_2010d4;
        case 0x2010d8u: goto label_2010d8;
        case 0x2010dcu: goto label_2010dc;
        case 0x2010e0u: goto label_2010e0;
        case 0x2010e4u: goto label_2010e4;
        case 0x2010e8u: goto label_2010e8;
        case 0x2010ecu: goto label_2010ec;
        case 0x2010f0u: goto label_2010f0;
        case 0x2010f4u: goto label_2010f4;
        case 0x2010f8u: goto label_2010f8;
        case 0x2010fcu: goto label_2010fc;
        case 0x201100u: goto label_201100;
        case 0x201104u: goto label_201104;
        case 0x201108u: goto label_201108;
        case 0x20110cu: goto label_20110c;
        case 0x201110u: goto label_201110;
        case 0x201114u: goto label_201114;
        case 0x201118u: goto label_201118;
        case 0x20111cu: goto label_20111c;
        case 0x201120u: goto label_201120;
        case 0x201124u: goto label_201124;
        case 0x201128u: goto label_201128;
        case 0x20112cu: goto label_20112c;
        case 0x201130u: goto label_201130;
        case 0x201134u: goto label_201134;
        case 0x201138u: goto label_201138;
        case 0x20113cu: goto label_20113c;
        case 0x201140u: goto label_201140;
        case 0x201144u: goto label_201144;
        case 0x201148u: goto label_201148;
        case 0x20114cu: goto label_20114c;
        case 0x201150u: goto label_201150;
        case 0x201154u: goto label_201154;
        case 0x201158u: goto label_201158;
        case 0x20115cu: goto label_20115c;
        case 0x201160u: goto label_201160;
        case 0x201164u: goto label_201164;
        case 0x201168u: goto label_201168;
        case 0x20116cu: goto label_20116c;
        case 0x201170u: goto label_201170;
        case 0x201174u: goto label_201174;
        case 0x201178u: goto label_201178;
        case 0x20117cu: goto label_20117c;
        case 0x201180u: goto label_201180;
        case 0x201184u: goto label_201184;
        case 0x201188u: goto label_201188;
        case 0x20118cu: goto label_20118c;
        case 0x201190u: goto label_201190;
        case 0x201194u: goto label_201194;
        case 0x201198u: goto label_201198;
        case 0x20119cu: goto label_20119c;
        case 0x2011a0u: goto label_2011a0;
        case 0x2011a4u: goto label_2011a4;
        case 0x2011a8u: goto label_2011a8;
        case 0x2011acu: goto label_2011ac;
        case 0x2011b0u: goto label_2011b0;
        case 0x2011b4u: goto label_2011b4;
        case 0x2011b8u: goto label_2011b8;
        case 0x2011bcu: goto label_2011bc;
        case 0x2011c0u: goto label_2011c0;
        case 0x2011c4u: goto label_2011c4;
        case 0x2011c8u: goto label_2011c8;
        case 0x2011ccu: goto label_2011cc;
        case 0x2011d0u: goto label_2011d0;
        case 0x2011d4u: goto label_2011d4;
        case 0x2011d8u: goto label_2011d8;
        case 0x2011dcu: goto label_2011dc;
        case 0x2011e0u: goto label_2011e0;
        case 0x2011e4u: goto label_2011e4;
        case 0x2011e8u: goto label_2011e8;
        case 0x2011ecu: goto label_2011ec;
        case 0x2011f0u: goto label_2011f0;
        case 0x2011f4u: goto label_2011f4;
        case 0x2011f8u: goto label_2011f8;
        case 0x2011fcu: goto label_2011fc;
        case 0x201200u: goto label_201200;
        case 0x201204u: goto label_201204;
        case 0x201208u: goto label_201208;
        case 0x20120cu: goto label_20120c;
        case 0x201210u: goto label_201210;
        case 0x201214u: goto label_201214;
        case 0x201218u: goto label_201218;
        case 0x20121cu: goto label_20121c;
        case 0x201220u: goto label_201220;
        case 0x201224u: goto label_201224;
        case 0x201228u: goto label_201228;
        case 0x20122cu: goto label_20122c;
        case 0x201230u: goto label_201230;
        case 0x201234u: goto label_201234;
        case 0x201238u: goto label_201238;
        case 0x20123cu: goto label_20123c;
        case 0x201240u: goto label_201240;
        case 0x201244u: goto label_201244;
        case 0x201248u: goto label_201248;
        case 0x20124cu: goto label_20124c;
        case 0x201250u: goto label_201250;
        case 0x201254u: goto label_201254;
        case 0x201258u: goto label_201258;
        case 0x20125cu: goto label_20125c;
        case 0x201260u: goto label_201260;
        case 0x201264u: goto label_201264;
        case 0x201268u: goto label_201268;
        case 0x20126cu: goto label_20126c;
        case 0x201270u: goto label_201270;
        case 0x201274u: goto label_201274;
        case 0x201278u: goto label_201278;
        case 0x20127cu: goto label_20127c;
        default: break;
    }

    ctx->pc = 0x200fa8u;

label_200fa8:
    // 0x200fa8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x200fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_200fac:
    // 0x200fac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x200facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_200fb0:
    // 0x200fb0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x200fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_200fb4:
    // 0x200fb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x200fb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_200fb8:
    // 0x200fb8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x200fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_200fbc:
    // 0x200fbc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x200fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_200fc0:
    // 0x200fc0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x200fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_200fc4:
    // 0x200fc4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x200fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_200fc8:
    // 0x200fc8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x200fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_200fcc:
    // 0x200fcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_200fd0:
    // 0x200fd0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x200fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_200fd4:
    // 0x200fd4: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
label_200fd8:
    if (ctx->pc == 0x200FD8u) {
        ctx->pc = 0x200FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200FD4u;
        // 0x200fd8: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200FDCu;
        goto label_200fdc;
    }
    ctx->pc = 0x200FD4u;
    {
        const bool branch_taken_0x200fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200FD4u;
        // 0x200fd8: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200fd4) {
            ctx->pc = 0x201254u;
            goto label_201254;
        }
    }
    ctx->pc = 0x200FDCu;
label_200fdc:
    // 0x200fdc: 0x8e6400b4  lw          $a0, 0xB4($s3)
    ctx->pc = 0x200fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_200fe0:
    // 0x200fe0: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x200fe0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200fe4:
    // 0x200fe4: 0xc073462  jal         func_1CD188
label_200fe8:
    if (ctx->pc == 0x200FE8u) {
        ctx->pc = 0x200FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200FE4u;
        // 0x200fe8: 0x267200c8  addiu       $s2, $s3, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200FECu;
        goto label_200fec;
    }
    ctx->pc = 0x200FE4u;
    SET_GPR_U32(ctx, 31, 0x200FECu);
    ctx->pc = 0x200FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200FE4u;
    // 0x200fe8: 0x267200c8  addiu       $s2, $s3, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x200FE4u, 0x200FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200FECu;
label_200fec:
    // 0x200fec: 0x26108298  addiu       $s0, $s0, -0x7D68
    ctx->pc = 0x200fecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935192));
label_200ff0:
    // 0x200ff0: 0x8e6400b4  lw          $a0, 0xB4($s3)
    ctx->pc = 0x200ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_200ff4:
    // 0x200ff4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200ff8:
    // 0x200ff8: 0xc139138  jal         func_4E44E0
label_200ffc:
    if (ctx->pc == 0x200FFCu) {
        ctx->pc = 0x200FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200FF8u;
        // 0x200ffc: 0x24060244  addiu       $a2, $zero, 0x244 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 580));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201000u;
        goto label_201000;
    }
    ctx->pc = 0x200FF8u;
    SET_GPR_U32(ctx, 31, 0x201000u);
    ctx->pc = 0x200FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200FF8u;
    // 0x200ffc: 0x24060244  addiu       $a2, $zero, 0x244 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 580));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x200FF8u, 0x201000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201000u;
label_201000:
    // 0x201000: 0x8e6500c0  lw          $a1, 0xC0($s3)
    ctx->pc = 0x201000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_201004:
    // 0x201004: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x201004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201008:
    // 0x201008: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x201008u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_20100c:
    // 0x20100c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x20100cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_201010:
    // 0x201010: 0x60f809  jalr        $v1
label_201014:
    if (ctx->pc == 0x201014u) {
        ctx->pc = 0x201014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201010u;
        // 0x201014: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201018u;
        goto label_201018;
    }
    ctx->pc = 0x201010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201018u);
        ctx->pc = 0x201014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201010u;
        // 0x201014: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201010u, 0x201018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201018u;
label_201018:
    // 0x201018: 0x8e6400c0  lw          $a0, 0xC0($s3)
    ctx->pc = 0x201018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_20101c:
    // 0x20101c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20101cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201020:
    // 0x201020: 0xc13a580  jal         func_4E9600
label_201024:
    if (ctx->pc == 0x201024u) {
        ctx->pc = 0x201024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201020u;
        // 0x201024: 0x24060247  addiu       $a2, $zero, 0x247 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 583));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201028u;
        goto label_201028;
    }
    ctx->pc = 0x201020u;
    SET_GPR_U32(ctx, 31, 0x201028u);
    ctx->pc = 0x201024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201020u;
    // 0x201024: 0x24060247  addiu       $a2, $zero, 0x247 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 583));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9600u, 0x201020u, 0x201028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201028u;
label_201028:
    // 0x201028: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x201028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_20102c:
    // 0x20102c: 0x8e6500c4  lw          $a1, 0xC4($s3)
    ctx->pc = 0x20102cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_201030:
    // 0x201030: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x201030u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_201034:
    // 0x201034: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x201034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201038:
    // 0x201038: 0x24070248  addiu       $a3, $zero, 0x248
    ctx->pc = 0x201038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 584));
label_20103c:
    // 0x20103c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x20103cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_201040:
    // 0x201040: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x201040u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_201044:
    // 0x201044: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x201044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_201048:
    // 0x201048: 0x60f809  jalr        $v1
label_20104c:
    if (ctx->pc == 0x20104Cu) {
        ctx->pc = 0x20104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201048u;
        // 0x20104c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201050u;
        goto label_201050;
    }
    ctx->pc = 0x201048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201050u);
        ctx->pc = 0x20104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201048u;
        // 0x20104c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201048u, 0x201050u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201050u;
label_201050:
    // 0x201050: 0x8e6500b8  lw          $a1, 0xB8($s3)
    ctx->pc = 0x201050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_201054:
    // 0x201054: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x201054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201058:
    // 0x201058: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x201058u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_20105c:
    // 0x20105c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x20105cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_201060:
    // 0x201060: 0x60f809  jalr        $v1
label_201064:
    if (ctx->pc == 0x201064u) {
        ctx->pc = 0x201064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201060u;
        // 0x201064: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201068u;
        goto label_201068;
    }
    ctx->pc = 0x201060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201068u);
        ctx->pc = 0x201064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201060u;
        // 0x201064: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201060u, 0x201068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201068u;
label_201068:
    // 0x201068: 0x8e6400b8  lw          $a0, 0xB8($s3)
    ctx->pc = 0x201068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_20106c:
    // 0x20106c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20106cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201070:
    // 0x201070: 0xc13a4ae  jal         func_4E92B8
label_201074:
    if (ctx->pc == 0x201074u) {
        ctx->pc = 0x201074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201070u;
        // 0x201074: 0x2406024c  addiu       $a2, $zero, 0x24C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 588));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201078u;
        goto label_201078;
    }
    ctx->pc = 0x201070u;
    SET_GPR_U32(ctx, 31, 0x201078u);
    ctx->pc = 0x201074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201070u;
    // 0x201074: 0x2406024c  addiu       $a2, $zero, 0x24C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 588));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E92B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E92B8u, 0x201070u, 0x201078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201078u;
label_201078:
    // 0x201078: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x201078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_20107c:
    // 0x20107c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x20107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_201080:
    // 0x201080: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x201080u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_201084:
    // 0x201084: 0x5203000b  beql        $s0, $v1, . + 4 + (0xB << 2)
label_201088:
    if (ctx->pc == 0x201088u) {
        ctx->pc = 0x201088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201084u;
        // 0x201088: 0x8e71008c  lw          $s1, 0x8C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20108Cu;
        goto label_20108c;
    }
    ctx->pc = 0x201084u;
    {
        const bool branch_taken_0x201084 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x201084) {
            ctx->pc = 0x201088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201084u;
            // 0x201088: 0x8e71008c  lw          $s1, 0x8C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2010B4u;
            goto label_2010b4;
        }
    }
    ctx->pc = 0x20108Cu;
label_20108c:
    // 0x20108c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x20108cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_201090:
    // 0x201090: 0x26c58298  addiu       $a1, $s6, -0x7D68
    ctx->pc = 0x201090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935192));
label_201094:
    // 0x201094: 0x24060250  addiu       $a2, $zero, 0x250
    ctx->pc = 0x201094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
label_201098:
    // 0x201098: 0xc13ae3c  jal         func_4EB8F0
label_20109c:
    if (ctx->pc == 0x20109Cu) {
        ctx->pc = 0x20109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201098u;
        // 0x20109c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2010A0u;
        goto label_2010a0;
    }
    ctx->pc = 0x201098u;
    SET_GPR_U32(ctx, 31, 0x2010A0u);
    ctx->pc = 0x20109Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201098u;
    // 0x20109c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EB8F0u, 0x201098u, 0x2010A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2010A0u;
label_2010a0:
    // 0x2010a0: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x2010a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_2010a4:
    // 0x2010a4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2010a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2010a8:
    // 0x2010a8: 0x5603fff9  bnel        $s0, $v1, . + 4 + (-0x7 << 2)
label_2010ac:
    if (ctx->pc == 0x2010ACu) {
        ctx->pc = 0x2010ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010A8u;
        // 0x2010ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2010B0u;
        goto label_2010b0;
    }
    ctx->pc = 0x2010A8u;
    {
        const bool branch_taken_0x2010a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x2010a8) {
            ctx->pc = 0x2010ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2010A8u;
            // 0x2010ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201090;
        }
    }
    ctx->pc = 0x2010B0u;
label_2010b0:
    // 0x2010b0: 0x8e71008c  lw          $s1, 0x8C($s3)
    ctx->pc = 0x2010b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_2010b4:
    // 0x2010b4: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x2010b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2010b8:
    // 0x2010b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2010b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2010bc:
    // 0x2010bc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2010bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2010c0:
    // 0x2010c0: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x2010c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2010c4:
    // 0x2010c4: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x2010c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2010c8:
    // 0x2010c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2010c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2010cc:
    // 0x2010cc: 0xc10c1bb  jal         func_4306EC
label_2010d0:
    if (ctx->pc == 0x2010D0u) {
        ctx->pc = 0x2010D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010CCu;
        // 0x2010d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2010D4u;
        goto label_2010d4;
    }
    ctx->pc = 0x2010CCu;
    SET_GPR_U32(ctx, 31, 0x2010D4u);
    ctx->pc = 0x2010D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2010CCu;
    // 0x2010d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x2010CCu, 0x2010D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2010D4u;
label_2010d4:
    // 0x2010d4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2010d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2010d8:
    // 0x2010d8: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x2010d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2010dc:
    // 0x2010dc: 0x26c58298  addiu       $a1, $s6, -0x7D68
    ctx->pc = 0x2010dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935192));
label_2010e0:
    // 0x2010e0: 0x24060254  addiu       $a2, $zero, 0x254
    ctx->pc = 0x2010e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 596));
label_2010e4:
    // 0x2010e4: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2010e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2010e8:
    // 0x2010e8: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2010e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_2010ec:
    // 0x2010ec: 0xc13ae62  jal         func_4EB988
label_2010f0:
    if (ctx->pc == 0x2010F0u) {
        ctx->pc = 0x2010F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010ECu;
        // 0x2010f0: 0x8e64008c  lw          $a0, 0x8C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2010F4u;
        goto label_2010f4;
    }
    ctx->pc = 0x2010ECu;
    SET_GPR_U32(ctx, 31, 0x2010F4u);
    ctx->pc = 0x2010F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2010ECu;
    // 0x2010f0: 0x8e64008c  lw          $a0, 0x8C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EB988u, 0x2010ECu, 0x2010F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2010F4u;
label_2010f4:
    // 0x2010f4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2010f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2010f8:
    // 0x2010f8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2010f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2010fc:
    // 0x2010fc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2010fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201100:
    // 0x201100: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x201100u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_201104:
    // 0x201104: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x201104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_201108:
    // 0x201108: 0x60f809  jalr        $v1
label_20110c:
    if (ctx->pc == 0x20110Cu) {
        ctx->pc = 0x20110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201108u;
        // 0x20110c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201110u;
        goto label_201110;
    }
    ctx->pc = 0x201108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201110u);
        ctx->pc = 0x20110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201108u;
        // 0x20110c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201108u, 0x201110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201110u;
label_201110:
    // 0x201110: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x201110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_201114:
    // 0x201114: 0x26c58298  addiu       $a1, $s6, -0x7D68
    ctx->pc = 0x201114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935192));
label_201118:
    // 0x201118: 0x24060258  addiu       $a2, $zero, 0x258
    ctx->pc = 0x201118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_20111c:
    // 0x20111c: 0xc138e72  jal         func_4E39C8
label_201120:
    if (ctx->pc == 0x201120u) {
        ctx->pc = 0x201120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20111Cu;
        // 0x201120: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201124u;
        goto label_201124;
    }
    ctx->pc = 0x20111Cu;
    SET_GPR_U32(ctx, 31, 0x201124u);
    ctx->pc = 0x201120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20111Cu;
    // 0x201120: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x20111Cu, 0x201124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201124u;
label_201124:
    // 0x201124: 0x2ea20002  sltiu       $v0, $s5, 0x2
    ctx->pc = 0x201124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_201128:
    // 0x201128: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_20112c:
    if (ctx->pc == 0x20112Cu) {
        ctx->pc = 0x20112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201128u;
        // 0x20112c: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201130u;
        goto label_201130;
    }
    ctx->pc = 0x201128u;
    {
        const bool branch_taken_0x201128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201128) {
            ctx->pc = 0x20112Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201128u;
            // 0x20112c: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2010F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2010f8;
        }
    }
    ctx->pc = 0x201130u;
label_201130:
    // 0x201130: 0x8e6500d0  lw          $a1, 0xD0($s3)
    ctx->pc = 0x201130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
label_201134:
    // 0x201134: 0x26d08298  addiu       $s0, $s6, -0x7D68
    ctx->pc = 0x201134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935192));
label_201138:
    // 0x201138: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x201138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20113c:
    // 0x20113c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x20113cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_201140:
    // 0x201140: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x201140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_201144:
    // 0x201144: 0x60f809  jalr        $v1
label_201148:
    if (ctx->pc == 0x201148u) {
        ctx->pc = 0x201148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201144u;
        // 0x201148: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20114Cu;
        goto label_20114c;
    }
    ctx->pc = 0x201144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20114Cu);
        ctx->pc = 0x201148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201144u;
        // 0x201148: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201144u, 0x20114Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20114Cu;
label_20114c:
    // 0x20114c: 0x8e6400d0  lw          $a0, 0xD0($s3)
    ctx->pc = 0x20114cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
label_201150:
    // 0x201150: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x201150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201154:
    // 0x201154: 0xc13a560  jal         func_4E9580
label_201158:
    if (ctx->pc == 0x201158u) {
        ctx->pc = 0x201158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201154u;
        // 0x201158: 0x2406025c  addiu       $a2, $zero, 0x25C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20115Cu;
        goto label_20115c;
    }
    ctx->pc = 0x201154u;
    SET_GPR_U32(ctx, 31, 0x20115Cu);
    ctx->pc = 0x201158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201154u;
    // 0x201158: 0x2406025c  addiu       $a2, $zero, 0x25C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9580u, 0x201154u, 0x20115Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20115Cu;
label_20115c:
    // 0x20115c: 0x8e6500d4  lw          $a1, 0xD4($s3)
    ctx->pc = 0x20115cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_201160:
    // 0x201160: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x201160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201164:
    // 0x201164: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x201164u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_201168:
    // 0x201168: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x201168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_20116c:
    // 0x20116c: 0x60f809  jalr        $v1
label_201170:
    if (ctx->pc == 0x201170u) {
        ctx->pc = 0x201170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20116Cu;
        // 0x201170: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201174u;
        goto label_201174;
    }
    ctx->pc = 0x20116Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201174u);
        ctx->pc = 0x201170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20116Cu;
        // 0x201170: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20116Cu, 0x201174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201174u;
label_201174:
    // 0x201174: 0x8e6400d4  lw          $a0, 0xD4($s3)
    ctx->pc = 0x201174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_201178:
    // 0x201178: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x201178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20117c:
    // 0x20117c: 0xc13a560  jal         func_4E9580
label_201180:
    if (ctx->pc == 0x201180u) {
        ctx->pc = 0x201180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20117Cu;
        // 0x201180: 0x2406025f  addiu       $a2, $zero, 0x25F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 607));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201184u;
        goto label_201184;
    }
    ctx->pc = 0x20117Cu;
    SET_GPR_U32(ctx, 31, 0x201184u);
    ctx->pc = 0x201180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20117Cu;
    // 0x201180: 0x2406025f  addiu       $a2, $zero, 0x25F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 607));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9580u, 0x20117Cu, 0x201184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201184u;
label_201184:
    // 0x201184: 0x8e6500a0  lw          $a1, 0xA0($s3)
    ctx->pc = 0x201184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_201188:
    // 0x201188: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x201188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20118c:
    // 0x20118c: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x20118cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_201190:
    // 0x201190: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x201190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_201194:
    // 0x201194: 0x60f809  jalr        $v1
label_201198:
    if (ctx->pc == 0x201198u) {
        ctx->pc = 0x201198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201194u;
        // 0x201198: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20119Cu;
        goto label_20119c;
    }
    ctx->pc = 0x201194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20119Cu);
        ctx->pc = 0x201198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201194u;
        // 0x201198: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201194u, 0x20119Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20119Cu;
label_20119c:
    // 0x20119c: 0x8e6400a0  lw          $a0, 0xA0($s3)
    ctx->pc = 0x20119cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_2011a0:
    // 0x2011a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2011a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2011a4:
    // 0x2011a4: 0xc138e72  jal         func_4E39C8
label_2011a8:
    if (ctx->pc == 0x2011A8u) {
        ctx->pc = 0x2011A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011A4u;
        // 0x2011a8: 0x24060262  addiu       $a2, $zero, 0x262 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 610));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2011ACu;
        goto label_2011ac;
    }
    ctx->pc = 0x2011A4u;
    SET_GPR_U32(ctx, 31, 0x2011ACu);
    ctx->pc = 0x2011A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2011A4u;
    // 0x2011a8: 0x24060262  addiu       $a2, $zero, 0x262 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 610));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x2011A4u, 0x2011ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2011ACu;
label_2011ac:
    // 0x2011ac: 0x8e6500a4  lw          $a1, 0xA4($s3)
    ctx->pc = 0x2011acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
label_2011b0:
    // 0x2011b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2011b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2011b4:
    // 0x2011b4: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x2011b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_2011b8:
    // 0x2011b8: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x2011b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_2011bc:
    // 0x2011bc: 0x60f809  jalr        $v1
label_2011c0:
    if (ctx->pc == 0x2011C0u) {
        ctx->pc = 0x2011C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011BCu;
        // 0x2011c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2011C4u;
        goto label_2011c4;
    }
    ctx->pc = 0x2011BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2011C4u);
        ctx->pc = 0x2011C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011BCu;
        // 0x2011c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2011BCu, 0x2011C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2011C4u;
label_2011c4:
    // 0x2011c4: 0x8e6400a4  lw          $a0, 0xA4($s3)
    ctx->pc = 0x2011c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
label_2011c8:
    // 0x2011c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2011c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2011cc:
    // 0x2011cc: 0xc138e72  jal         func_4E39C8
label_2011d0:
    if (ctx->pc == 0x2011D0u) {
        ctx->pc = 0x2011D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011CCu;
        // 0x2011d0: 0x24060265  addiu       $a2, $zero, 0x265 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2011D4u;
        goto label_2011d4;
    }
    ctx->pc = 0x2011CCu;
    SET_GPR_U32(ctx, 31, 0x2011D4u);
    ctx->pc = 0x2011D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2011CCu;
    // 0x2011d0: 0x24060265  addiu       $a2, $zero, 0x265 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x2011CCu, 0x2011D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2011D4u;
label_2011d4:
    // 0x2011d4: 0xc073462  jal         func_1CD188
label_2011d8:
    if (ctx->pc == 0x2011D8u) {
        ctx->pc = 0x2011D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011D4u;
        // 0x2011d8: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2011DCu;
        goto label_2011dc;
    }
    ctx->pc = 0x2011D4u;
    SET_GPR_U32(ctx, 31, 0x2011DCu);
    ctx->pc = 0x2011D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2011D4u;
    // 0x2011d8: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x2011D4u, 0x2011DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2011DCu;
label_2011dc:
    // 0x2011dc: 0x8e6400d8  lw          $a0, 0xD8($s3)
    ctx->pc = 0x2011dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_2011e0:
    // 0x2011e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2011e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2011e4:
    // 0x2011e4: 0xc139138  jal         func_4E44E0
label_2011e8:
    if (ctx->pc == 0x2011E8u) {
        ctx->pc = 0x2011E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011E4u;
        // 0x2011e8: 0x24060268  addiu       $a2, $zero, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2011ECu;
        goto label_2011ec;
    }
    ctx->pc = 0x2011E4u;
    SET_GPR_U32(ctx, 31, 0x2011ECu);
    ctx->pc = 0x2011E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2011E4u;
    // 0x2011e8: 0x24060268  addiu       $a2, $zero, 0x268 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x2011E4u, 0x2011ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2011ECu;
label_2011ec:
    // 0x2011ec: 0xc073462  jal         func_1CD188
label_2011f0:
    if (ctx->pc == 0x2011F0u) {
        ctx->pc = 0x2011F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011ECu;
        // 0x2011f0: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2011F4u;
        goto label_2011f4;
    }
    ctx->pc = 0x2011ECu;
    SET_GPR_U32(ctx, 31, 0x2011F4u);
    ctx->pc = 0x2011F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2011ECu;
    // 0x2011f0: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x2011ECu, 0x2011F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2011F4u;
label_2011f4:
    // 0x2011f4: 0x8e6400dc  lw          $a0, 0xDC($s3)
    ctx->pc = 0x2011f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_2011f8:
    // 0x2011f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2011f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2011fc:
    // 0x2011fc: 0xc139138  jal         func_4E44E0
label_201200:
    if (ctx->pc == 0x201200u) {
        ctx->pc = 0x201200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011FCu;
        // 0x201200: 0x2406026b  addiu       $a2, $zero, 0x26B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 619));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201204u;
        goto label_201204;
    }
    ctx->pc = 0x2011FCu;
    SET_GPR_U32(ctx, 31, 0x201204u);
    ctx->pc = 0x201200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2011FCu;
    // 0x201200: 0x2406026b  addiu       $a2, $zero, 0x26B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 619));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x2011FCu, 0x201204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201204u;
label_201204:
    // 0x201204: 0x8e6400e0  lw          $a0, 0xE0($s3)
    ctx->pc = 0x201204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
label_201208:
    // 0x201208: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x201208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20120c:
    // 0x20120c: 0xc13a5a0  jal         func_4E9680
label_201210:
    if (ctx->pc == 0x201210u) {
        ctx->pc = 0x201210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20120Cu;
        // 0x201210: 0x2406026d  addiu       $a2, $zero, 0x26D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201214u;
        goto label_201214;
    }
    ctx->pc = 0x20120Cu;
    SET_GPR_U32(ctx, 31, 0x201214u);
    ctx->pc = 0x201210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20120Cu;
    // 0x201210: 0x2406026d  addiu       $a2, $zero, 0x26D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9680u, 0x20120Cu, 0x201214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201214u;
label_201214:
    // 0x201214: 0x8e6400e4  lw          $a0, 0xE4($s3)
    ctx->pc = 0x201214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
label_201218:
    // 0x201218: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x201218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20121c:
    // 0x20121c: 0xc13a5a0  jal         func_4E9680
label_201220:
    if (ctx->pc == 0x201220u) {
        ctx->pc = 0x201220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20121Cu;
        // 0x201220: 0x2406026e  addiu       $a2, $zero, 0x26E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 622));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201224u;
        goto label_201224;
    }
    ctx->pc = 0x20121Cu;
    SET_GPR_U32(ctx, 31, 0x201224u);
    ctx->pc = 0x201220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20121Cu;
    // 0x201220: 0x2406026e  addiu       $a2, $zero, 0x26E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 622));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9680u, 0x20121Cu, 0x201224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201224u;
label_201224:
    // 0x201224: 0x8e6500bc  lw          $a1, 0xBC($s3)
    ctx->pc = 0x201224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_201228:
    // 0x201228: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x201228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20122c:
    // 0x20122c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x20122cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_201230:
    // 0x201230: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x201230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_201234:
    // 0x201234: 0x60f809  jalr        $v1
label_201238:
    if (ctx->pc == 0x201238u) {
        ctx->pc = 0x201238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201234u;
        // 0x201238: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20123Cu;
        goto label_20123c;
    }
    ctx->pc = 0x201234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20123Cu);
        ctx->pc = 0x201238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201234u;
        // 0x201238: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201234u, 0x20123Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20123Cu;
label_20123c:
    // 0x20123c: 0x8e6400bc  lw          $a0, 0xBC($s3)
    ctx->pc = 0x20123cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_201240:
    // 0x201240: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x201240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201244:
    // 0x201244: 0xc139fe8  jal         func_4E7FA0
label_201248:
    if (ctx->pc == 0x201248u) {
        ctx->pc = 0x201248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201244u;
        // 0x201248: 0x24060271  addiu       $a2, $zero, 0x271 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20124Cu;
        goto label_20124c;
    }
    ctx->pc = 0x201244u;
    SET_GPR_U32(ctx, 31, 0x20124Cu);
    ctx->pc = 0x201248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201244u;
    // 0x201248: 0x24060271  addiu       $a2, $zero, 0x271 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7FA0u, 0x201244u, 0x20124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20124Cu;
label_20124c:
    // 0x20124c: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x20124cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_201250:
    // 0x201250: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x201250u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_201254:
    // 0x201254: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x201254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_201258:
    // 0x201258: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x201258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20125c:
    // 0x20125c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x20125cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_201260:
    // 0x201260: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x201260u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_201264:
    // 0x201264: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x201264u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_201268:
    // 0x201268: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x201268u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20126c:
    // 0x20126c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x20126cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_201270:
    // 0x201270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_201274:
    // 0x201274: 0x3e00008  jr          $ra
label_201278:
    if (ctx->pc == 0x201278u) {
        ctx->pc = 0x201278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201274u;
        // 0x201278: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20127Cu;
        goto label_20127c;
    }
    ctx->pc = 0x201274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201274u;
        // 0x201278: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20127Cu;
label_20127c:
    // 0x20127c: 0x0  nop
    ctx->pc = 0x20127cu;
    // NOP
    ctx->pc = 0x201280u;
}
