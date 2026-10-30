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

// Function: sub_003906B8
// Address: 0x3906b8 - 0x390920
void sub_003906B8_0x3906b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003906B8_0x3906b8");
#endif

    switch (ctx->pc) {
        case 0x3906b8u: goto label_3906b8;
        case 0x3906bcu: goto label_3906bc;
        case 0x3906c0u: goto label_3906c0;
        case 0x3906c4u: goto label_3906c4;
        case 0x3906c8u: goto label_3906c8;
        case 0x3906ccu: goto label_3906cc;
        case 0x3906d0u: goto label_3906d0;
        case 0x3906d4u: goto label_3906d4;
        case 0x3906d8u: goto label_3906d8;
        case 0x3906dcu: goto label_3906dc;
        case 0x3906e0u: goto label_3906e0;
        case 0x3906e4u: goto label_3906e4;
        case 0x3906e8u: goto label_3906e8;
        case 0x3906ecu: goto label_3906ec;
        case 0x3906f0u: goto label_3906f0;
        case 0x3906f4u: goto label_3906f4;
        case 0x3906f8u: goto label_3906f8;
        case 0x3906fcu: goto label_3906fc;
        case 0x390700u: goto label_390700;
        case 0x390704u: goto label_390704;
        case 0x390708u: goto label_390708;
        case 0x39070cu: goto label_39070c;
        case 0x390710u: goto label_390710;
        case 0x390714u: goto label_390714;
        case 0x390718u: goto label_390718;
        case 0x39071cu: goto label_39071c;
        case 0x390720u: goto label_390720;
        case 0x390724u: goto label_390724;
        case 0x390728u: goto label_390728;
        case 0x39072cu: goto label_39072c;
        case 0x390730u: goto label_390730;
        case 0x390734u: goto label_390734;
        case 0x390738u: goto label_390738;
        case 0x39073cu: goto label_39073c;
        case 0x390740u: goto label_390740;
        case 0x390744u: goto label_390744;
        case 0x390748u: goto label_390748;
        case 0x39074cu: goto label_39074c;
        case 0x390750u: goto label_390750;
        case 0x390754u: goto label_390754;
        case 0x390758u: goto label_390758;
        case 0x39075cu: goto label_39075c;
        case 0x390760u: goto label_390760;
        case 0x390764u: goto label_390764;
        case 0x390768u: goto label_390768;
        case 0x39076cu: goto label_39076c;
        case 0x390770u: goto label_390770;
        case 0x390774u: goto label_390774;
        case 0x390778u: goto label_390778;
        case 0x39077cu: goto label_39077c;
        case 0x390780u: goto label_390780;
        case 0x390784u: goto label_390784;
        case 0x390788u: goto label_390788;
        case 0x39078cu: goto label_39078c;
        case 0x390790u: goto label_390790;
        case 0x390794u: goto label_390794;
        case 0x390798u: goto label_390798;
        case 0x39079cu: goto label_39079c;
        case 0x3907a0u: goto label_3907a0;
        case 0x3907a4u: goto label_3907a4;
        case 0x3907a8u: goto label_3907a8;
        case 0x3907acu: goto label_3907ac;
        case 0x3907b0u: goto label_3907b0;
        case 0x3907b4u: goto label_3907b4;
        case 0x3907b8u: goto label_3907b8;
        case 0x3907bcu: goto label_3907bc;
        case 0x3907c0u: goto label_3907c0;
        case 0x3907c4u: goto label_3907c4;
        case 0x3907c8u: goto label_3907c8;
        case 0x3907ccu: goto label_3907cc;
        case 0x3907d0u: goto label_3907d0;
        case 0x3907d4u: goto label_3907d4;
        case 0x3907d8u: goto label_3907d8;
        case 0x3907dcu: goto label_3907dc;
        case 0x3907e0u: goto label_3907e0;
        case 0x3907e4u: goto label_3907e4;
        case 0x3907e8u: goto label_3907e8;
        case 0x3907ecu: goto label_3907ec;
        case 0x3907f0u: goto label_3907f0;
        case 0x3907f4u: goto label_3907f4;
        case 0x3907f8u: goto label_3907f8;
        case 0x3907fcu: goto label_3907fc;
        case 0x390800u: goto label_390800;
        case 0x390804u: goto label_390804;
        case 0x390808u: goto label_390808;
        case 0x39080cu: goto label_39080c;
        case 0x390810u: goto label_390810;
        case 0x390814u: goto label_390814;
        case 0x390818u: goto label_390818;
        case 0x39081cu: goto label_39081c;
        case 0x390820u: goto label_390820;
        case 0x390824u: goto label_390824;
        case 0x390828u: goto label_390828;
        case 0x39082cu: goto label_39082c;
        case 0x390830u: goto label_390830;
        case 0x390834u: goto label_390834;
        case 0x390838u: goto label_390838;
        case 0x39083cu: goto label_39083c;
        case 0x390840u: goto label_390840;
        case 0x390844u: goto label_390844;
        case 0x390848u: goto label_390848;
        case 0x39084cu: goto label_39084c;
        case 0x390850u: goto label_390850;
        case 0x390854u: goto label_390854;
        case 0x390858u: goto label_390858;
        case 0x39085cu: goto label_39085c;
        case 0x390860u: goto label_390860;
        case 0x390864u: goto label_390864;
        case 0x390868u: goto label_390868;
        case 0x39086cu: goto label_39086c;
        case 0x390870u: goto label_390870;
        case 0x390874u: goto label_390874;
        case 0x390878u: goto label_390878;
        case 0x39087cu: goto label_39087c;
        case 0x390880u: goto label_390880;
        case 0x390884u: goto label_390884;
        case 0x390888u: goto label_390888;
        case 0x39088cu: goto label_39088c;
        case 0x390890u: goto label_390890;
        case 0x390894u: goto label_390894;
        case 0x390898u: goto label_390898;
        case 0x39089cu: goto label_39089c;
        case 0x3908a0u: goto label_3908a0;
        case 0x3908a4u: goto label_3908a4;
        case 0x3908a8u: goto label_3908a8;
        case 0x3908acu: goto label_3908ac;
        case 0x3908b0u: goto label_3908b0;
        case 0x3908b4u: goto label_3908b4;
        case 0x3908b8u: goto label_3908b8;
        case 0x3908bcu: goto label_3908bc;
        case 0x3908c0u: goto label_3908c0;
        case 0x3908c4u: goto label_3908c4;
        case 0x3908c8u: goto label_3908c8;
        case 0x3908ccu: goto label_3908cc;
        case 0x3908d0u: goto label_3908d0;
        case 0x3908d4u: goto label_3908d4;
        case 0x3908d8u: goto label_3908d8;
        case 0x3908dcu: goto label_3908dc;
        case 0x3908e0u: goto label_3908e0;
        case 0x3908e4u: goto label_3908e4;
        case 0x3908e8u: goto label_3908e8;
        case 0x3908ecu: goto label_3908ec;
        case 0x3908f0u: goto label_3908f0;
        case 0x3908f4u: goto label_3908f4;
        case 0x3908f8u: goto label_3908f8;
        case 0x3908fcu: goto label_3908fc;
        case 0x390900u: goto label_390900;
        case 0x390904u: goto label_390904;
        case 0x390908u: goto label_390908;
        case 0x39090cu: goto label_39090c;
        case 0x390910u: goto label_390910;
        case 0x390914u: goto label_390914;
        case 0x390918u: goto label_390918;
        case 0x39091cu: goto label_39091c;
        default: break;
    }

    ctx->pc = 0x3906b8u;

label_3906b8:
    // 0x3906b8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3906b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_3906bc:
    // 0x3906bc: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3906bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_3906c0:
    // 0x3906c0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3906c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_3906c4:
    // 0x3906c4: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x3906c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_3906c8:
    // 0x3906c8: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x3906c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_3906cc:
    // 0x3906cc: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x3906ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_3906d0:
    // 0x3906d0: 0xc0e85a2  jal         func_3A1688
label_3906d4:
    if (ctx->pc == 0x3906D4u) {
        ctx->pc = 0x3906D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3906D0u;
        // 0x3906d4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3906D8u;
        goto label_3906d8;
    }
    ctx->pc = 0x3906D0u;
    SET_GPR_U32(ctx, 31, 0x3906D8u);
    ctx->pc = 0x3906D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3906D0u;
    // 0x3906d4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1688u, 0x3906D0u, 0x3906D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3906D8u;
label_3906d8:
    // 0x3906d8: 0xc6210064  lwc1        $f1, 0x64($s1)
    ctx->pc = 0x3906d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3906dc:
    // 0x3906dc: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x3906dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3906e0:
    // 0x3906e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3906e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3906e4:
    // 0x3906e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3906e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3906e8:
    // 0x3906e8: 0x0  nop
    ctx->pc = 0x3906e8u;
    // NOP
label_3906ec:
    // 0x3906ec: 0x0  nop
    ctx->pc = 0x3906ecu;
    // NOP
label_3906f0:
    // 0x3906f0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3906f0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_3906f4:
    // 0x3906f4: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x3906f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_3906f8:
    // 0x3906f8: 0x46001529  min.s       $f20, $f2, $f0
    ctx->pc = 0x3906f8u;
    ctx->f[20] = std::min(ctx->f[2], ctx->f[0]);
label_3906fc:
    // 0x3906fc: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x3906fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_390700:
    // 0x390700: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x390700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_390704:
    // 0x390704: 0x46141541  sub.s       $f21, $f2, $f20
    ctx->pc = 0x390704u;
    ctx->f[21] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
label_390708:
    // 0x390708: 0xc05f2a4  jal         func_17CA90
label_39070c:
    if (ctx->pc == 0x39070Cu) {
        ctx->pc = 0x39070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390708u;
        // 0x39070c: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x390710u;
        goto label_390710;
    }
    ctx->pc = 0x390708u;
    SET_GPR_U32(ctx, 31, 0x390710u);
    ctx->pc = 0x39070Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390708u;
    // 0x39070c: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CA90u, 0x390708u, 0x390710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390710u;
label_390710:
    // 0x390710: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x390710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_390714:
    // 0x390714: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x390714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_390718:
    // 0x390718: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x390718u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_39071c:
    // 0x39071c: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x39071cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_390720:
    // 0x390720: 0x60f809  jalr        $v1
label_390724:
    if (ctx->pc == 0x390724u) {
        ctx->pc = 0x390724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390720u;
        // 0x390724: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390728u;
        goto label_390728;
    }
    ctx->pc = 0x390720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x390728u);
        ctx->pc = 0x390724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390720u;
        // 0x390724: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390720u, 0x390728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390728u;
label_390728:
    // 0x390728: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x390728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_39072c:
    // 0x39072c: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x39072cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_390730:
    // 0x390730: 0xc05f1c0  jal         func_17C700
label_390734:
    if (ctx->pc == 0x390734u) {
        ctx->pc = 0x390734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390730u;
        // 0x390734: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390738u;
        goto label_390738;
    }
    ctx->pc = 0x390730u;
    SET_GPR_U32(ctx, 31, 0x390738u);
    ctx->pc = 0x390734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390730u;
    // 0x390734: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C700u, 0x390730u, 0x390738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390738u;
label_390738:
    // 0x390738: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x390738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_39073c:
    // 0x39073c: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x39073cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_390740:
    // 0x390740: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
label_390744:
    if (ctx->pc == 0x390744u) {
        ctx->pc = 0x390744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390740u;
        // 0x390744: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390748u;
        goto label_390748;
    }
    ctx->pc = 0x390740u;
    {
        const bool branch_taken_0x390740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x390744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390740u;
        // 0x390744: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390740) {
            ctx->pc = 0x390844u;
            goto label_390844;
        }
    }
    ctx->pc = 0x390748u;
label_390748:
    // 0x390748: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x390748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_39074c:
    // 0x39074c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x39074cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_390750:
    // 0x390750: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x390750u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_390754:
    // 0x390754: 0x70084688  pextlb      $t0, $zero, $t0
    ctx->pc = 0x390754u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
label_390758:
    // 0x390758: 0x700846c9  prevh       $t0, $t0
    ctx->pc = 0x390758u;
    { __m128i mask = _mm_setr_epi8(14,15, 12,13, 10,11, 8,9, 6,7, 4,5, 2,3, 0,1); SET_GPR_VEC(ctx, 8, PS2_SHUFFLE_EPI8(GPR_VEC(ctx, 8), mask)); }
label_39075c:
    // 0x39075c: 0x70084588  pextlh      $t0, $zero, $t0
    ctx->pc = 0x39075cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
label_390760:
    // 0x390760: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x390760u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
label_390764:
    // 0x390764: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x390764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
label_390768:
    // 0x390768: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x390768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
label_39076c:
    // 0x39076c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x39076cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_390770:
    // 0x390770: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x390770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_390774:
    // 0x390774: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x390774u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_390778:
    // 0x390778: 0x27a500b4  addiu       $a1, $sp, 0xB4
    ctx->pc = 0x390778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_39077c:
    // 0x39077c: 0x4601a802  mul.s       $f0, $f21, $f1
    ctx->pc = 0x39077cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_390780:
    // 0x390780: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x390780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_390784:
    // 0x390784: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x390784u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_390788:
    // 0x390788: 0x4be2093c  vitof0.xyzw $vf2, $vf1
    ctx->pc = 0x390788u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_39078c:
    // 0x39078c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x39078cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_390790:
    // 0x390790: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x390790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_390794:
    // 0x390794: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x390794u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_390798:
    // 0x390798: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x390798u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39079c:
    // 0x39079c: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x39079cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_3907a0:
    // 0x3907a0: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x3907a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3907a4:
    // 0x3907a4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3907a4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_3907a8:
    // 0x3907a8: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3907a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3907ac:
    // 0x3907ac: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3907acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3907b0:
    // 0x3907b0: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x3907b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
label_3907b4:
    // 0x3907b4: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x3907b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_3907b8:
    // 0x3907b8: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x3907b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3907bc:
    // 0x3907bc: 0x70084688  pextlb      $t0, $zero, $t0
    ctx->pc = 0x3907bcu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
label_3907c0:
    // 0x3907c0: 0x700846c9  prevh       $t0, $t0
    ctx->pc = 0x3907c0u;
    { __m128i mask = _mm_setr_epi8(14,15, 12,13, 10,11, 8,9, 6,7, 4,5, 2,3, 0,1); SET_GPR_VEC(ctx, 8, PS2_SHUFFLE_EPI8(GPR_VEC(ctx, 8), mask)); }
label_3907c4:
    // 0x3907c4: 0x70084588  pextlh      $t0, $zero, $t0
    ctx->pc = 0x3907c4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
label_3907c8:
    // 0x3907c8: 0x7cc80000  sq          $t0, 0x0($a2)
    ctx->pc = 0x3907c8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 8));
label_3907cc:
    // 0x3907cc: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x3907ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_3907d0:
    // 0x3907d0: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3907d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3907d4:
    // 0x3907d4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3907d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3907d8:
    // 0x3907d8: 0x4be2093c  vitof0.xyzw $vf2, $vf1
    ctx->pc = 0x3907d8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3907dc:
    // 0x3907dc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3907dcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3907e0:
    // 0x3907e0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3907e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3907e4:
    // 0x3907e4: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3907e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3907e8:
    // 0x3907e8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3907e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3907ec:
    // 0x3907ec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3907ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3907f0:
    // 0x3907f0: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x3907f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_3907f4:
    // 0x3907f4: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x3907f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3907f8:
    // 0x3907f8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3907f8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_3907fc:
    // 0x3907fc: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3907fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_390800:
    // 0x390800: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x390800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_390804:
    // 0x390804: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x390804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_390808:
    // 0x390808: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x390808u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_39080c:
    // 0x39080c: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x39080cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_390810:
    // 0x390810: 0x4be208a8  vadd.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x390810u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_390814:
    // 0x390814: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x390814u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_390818:
    // 0x390818: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x390818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_39081c:
    // 0x39081c: 0x7ba40090  lq          $a0, 0x90($sp)
    ctx->pc = 0x39081cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_390820:
    // 0x390820: 0x246316d0  addiu       $v1, $v1, 0x16D0
    ctx->pc = 0x390820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5840));
label_390824:
    // 0x390824: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x390824u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_390828:
    // 0x390828: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x390828u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39082c:
    // 0x39082c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x39082cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_390830:
    // 0x390830: 0x4bc208af  vmini.xyz   $vf2, $vf1, $vf2
    ctx->pc = 0x390830u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_390834:
    // 0x390834: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x390834u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_390838:
    // 0x390838: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x390838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_39083c:
    // 0x39083c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x39083cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_390840:
    // 0x390840: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x390840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_390844:
    // 0x390844: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x390844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_390848:
    // 0x390848: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x390848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_39084c:
    // 0x39084c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x39084cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_390850:
    // 0x390850: 0xb3a8002b  sdl         $t0, 0x2B($sp)
    ctx->pc = 0x390850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_390854:
    // 0x390854: 0xb7a80024  sdr         $t0, 0x24($sp)
    ctx->pc = 0x390854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_390858:
    // 0x390858: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x390858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_39085c:
    // 0x39085c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39085cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_390860:
    // 0x390860: 0xc621008c  lwc1        $f1, 0x8C($s1)
    ctx->pc = 0x390860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_390864:
    // 0x390864: 0xc6200098  lwc1        $f0, 0x98($s1)
    ctx->pc = 0x390864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_390868:
    // 0x390868: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x390868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_39086c:
    // 0x39086c: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x39086cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_390870:
    // 0x390870: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_390874:
    if (ctx->pc == 0x390874u) {
        ctx->pc = 0x390874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390870u;
        // 0x390874: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x390878u;
        goto label_390878;
    }
    ctx->pc = 0x390870u;
    {
        const bool branch_taken_0x390870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x390874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390870u;
        // 0x390874: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x390870) {
            ctx->pc = 0x390884u;
            goto label_390884;
        }
    }
    ctx->pc = 0x390878u;
label_390878:
    // 0x390878: 0x24020081  addiu       $v0, $zero, 0x81
    ctx->pc = 0x390878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_39087c:
    // 0x39087c: 0x5462001f  bnel        $v1, $v0, . + 4 + (0x1F << 2)
label_390880:
    if (ctx->pc == 0x390880u) {
        ctx->pc = 0x390880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39087Cu;
        // 0x390880: 0x8e24009c  lw          $a0, 0x9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390884u;
        goto label_390884;
    }
    ctx->pc = 0x39087Cu;
    {
        const bool branch_taken_0x39087c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39087c) {
            ctx->pc = 0x390880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39087Cu;
            // 0x390880: 0x8e24009c  lw          $a0, 0x9C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3908FCu;
            goto label_3908fc;
        }
    }
    ctx->pc = 0x390884u;
label_390884:
    // 0x390884: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x390884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_390888:
    // 0x390888: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x390888u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39088c:
    // 0x39088c: 0x24421730  addiu       $v0, $v0, 0x1730
    ctx->pc = 0x39088cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5936));
label_390890:
    // 0x390890: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x390890u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_390894:
    // 0x390894: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x390894u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_390898:
    // 0x390898: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x390898u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_39089c:
    // 0x39089c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x39089cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3908a0:
    // 0x3908a0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3908a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3908a4:
    // 0x3908a4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3908a4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3908a8:
    // 0x3908a8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3908a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3908ac:
    // 0x3908ac: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3908acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3908b0:
    // 0x3908b0: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3908b0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3908b4:
    // 0x3908b4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3908b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3908b8:
    // 0x3908b8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3908b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3908bc:
    // 0x3908bc: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3908bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3908c0:
    // 0x3908c0: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3908c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3908c4:
    // 0x3908c4: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3908c4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3908c8:
    // 0x3908c8: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3908c8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3908cc:
    // 0x3908cc: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3908ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3908d0:
    // 0x3908d0: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3908d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3908d4:
    // 0x3908d4: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3908d4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3908d8:
    // 0x3908d8: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3908d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3908dc:
    // 0x3908dc: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x3908dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_3908e0:
    // 0x3908e0: 0x6ba50077  ldl         $a1, 0x77($sp)
    ctx->pc = 0x3908e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_3908e4:
    // 0x3908e4: 0x6fa50070  ldr         $a1, 0x70($sp)
    ctx->pc = 0x3908e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3908e8:
    // 0x3908e8: 0x8fa80078  lw          $t0, 0x78($sp)
    ctx->pc = 0x3908e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_3908ec:
    // 0x3908ec: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x3908ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3908f0:
    // 0x3908f0: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x3908f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3908f4:
    // 0x3908f4: 0xafa80038  sw          $t0, 0x38($sp)
    ctx->pc = 0x3908f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 8));
label_3908f8:
    // 0x3908f8: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x3908f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_3908fc:
    // 0x3908fc: 0xc05f210  jal         func_17C840
label_390900:
    if (ctx->pc == 0x390900u) {
        ctx->pc = 0x390900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3908FCu;
        // 0x390900: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390904u;
        goto label_390904;
    }
    ctx->pc = 0x3908FCu;
    SET_GPR_U32(ctx, 31, 0x390904u);
    ctx->pc = 0x390900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3908FCu;
    // 0x390900: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C840u, 0x3908FCu, 0x390904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390904u;
label_390904:
    // 0x390904: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x390904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_390908:
    // 0x390908: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x390908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_39090c:
    // 0x39090c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x39090cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_390910:
    // 0x390910: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x390910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_390914:
    // 0x390914: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x390914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_390918:
    // 0x390918: 0x3e00008  jr          $ra
label_39091c:
    if (ctx->pc == 0x39091Cu) {
        ctx->pc = 0x39091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390918u;
        // 0x39091c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390920u;
        goto label_fallthrough_0x390918;
    }
    ctx->pc = 0x390918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390918u;
        // 0x39091c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x390918:
    ctx->pc = 0x390920u;
}
