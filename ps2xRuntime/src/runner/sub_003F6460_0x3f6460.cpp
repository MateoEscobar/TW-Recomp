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

// Function: sub_003F6460
// Address: 0x3f6460 - 0x3f66f8
void sub_003F6460_0x3f6460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6460_0x3f6460");
#endif

    switch (ctx->pc) {
        case 0x3f6460u: goto label_3f6460;
        case 0x3f6464u: goto label_3f6464;
        case 0x3f6468u: goto label_3f6468;
        case 0x3f646cu: goto label_3f646c;
        case 0x3f6470u: goto label_3f6470;
        case 0x3f6474u: goto label_3f6474;
        case 0x3f6478u: goto label_3f6478;
        case 0x3f647cu: goto label_3f647c;
        case 0x3f6480u: goto label_3f6480;
        case 0x3f6484u: goto label_3f6484;
        case 0x3f6488u: goto label_3f6488;
        case 0x3f648cu: goto label_3f648c;
        case 0x3f6490u: goto label_3f6490;
        case 0x3f6494u: goto label_3f6494;
        case 0x3f6498u: goto label_3f6498;
        case 0x3f649cu: goto label_3f649c;
        case 0x3f64a0u: goto label_3f64a0;
        case 0x3f64a4u: goto label_3f64a4;
        case 0x3f64a8u: goto label_3f64a8;
        case 0x3f64acu: goto label_3f64ac;
        case 0x3f64b0u: goto label_3f64b0;
        case 0x3f64b4u: goto label_3f64b4;
        case 0x3f64b8u: goto label_3f64b8;
        case 0x3f64bcu: goto label_3f64bc;
        case 0x3f64c0u: goto label_3f64c0;
        case 0x3f64c4u: goto label_3f64c4;
        case 0x3f64c8u: goto label_3f64c8;
        case 0x3f64ccu: goto label_3f64cc;
        case 0x3f64d0u: goto label_3f64d0;
        case 0x3f64d4u: goto label_3f64d4;
        case 0x3f64d8u: goto label_3f64d8;
        case 0x3f64dcu: goto label_3f64dc;
        case 0x3f64e0u: goto label_3f64e0;
        case 0x3f64e4u: goto label_3f64e4;
        case 0x3f64e8u: goto label_3f64e8;
        case 0x3f64ecu: goto label_3f64ec;
        case 0x3f64f0u: goto label_3f64f0;
        case 0x3f64f4u: goto label_3f64f4;
        case 0x3f64f8u: goto label_3f64f8;
        case 0x3f64fcu: goto label_3f64fc;
        case 0x3f6500u: goto label_3f6500;
        case 0x3f6504u: goto label_3f6504;
        case 0x3f6508u: goto label_3f6508;
        case 0x3f650cu: goto label_3f650c;
        case 0x3f6510u: goto label_3f6510;
        case 0x3f6514u: goto label_3f6514;
        case 0x3f6518u: goto label_3f6518;
        case 0x3f651cu: goto label_3f651c;
        case 0x3f6520u: goto label_3f6520;
        case 0x3f6524u: goto label_3f6524;
        case 0x3f6528u: goto label_3f6528;
        case 0x3f652cu: goto label_3f652c;
        case 0x3f6530u: goto label_3f6530;
        case 0x3f6534u: goto label_3f6534;
        case 0x3f6538u: goto label_3f6538;
        case 0x3f653cu: goto label_3f653c;
        case 0x3f6540u: goto label_3f6540;
        case 0x3f6544u: goto label_3f6544;
        case 0x3f6548u: goto label_3f6548;
        case 0x3f654cu: goto label_3f654c;
        case 0x3f6550u: goto label_3f6550;
        case 0x3f6554u: goto label_3f6554;
        case 0x3f6558u: goto label_3f6558;
        case 0x3f655cu: goto label_3f655c;
        case 0x3f6560u: goto label_3f6560;
        case 0x3f6564u: goto label_3f6564;
        case 0x3f6568u: goto label_3f6568;
        case 0x3f656cu: goto label_3f656c;
        case 0x3f6570u: goto label_3f6570;
        case 0x3f6574u: goto label_3f6574;
        case 0x3f6578u: goto label_3f6578;
        case 0x3f657cu: goto label_3f657c;
        case 0x3f6580u: goto label_3f6580;
        case 0x3f6584u: goto label_3f6584;
        case 0x3f6588u: goto label_3f6588;
        case 0x3f658cu: goto label_3f658c;
        case 0x3f6590u: goto label_3f6590;
        case 0x3f6594u: goto label_3f6594;
        case 0x3f6598u: goto label_3f6598;
        case 0x3f659cu: goto label_3f659c;
        case 0x3f65a0u: goto label_3f65a0;
        case 0x3f65a4u: goto label_3f65a4;
        case 0x3f65a8u: goto label_3f65a8;
        case 0x3f65acu: goto label_3f65ac;
        case 0x3f65b0u: goto label_3f65b0;
        case 0x3f65b4u: goto label_3f65b4;
        case 0x3f65b8u: goto label_3f65b8;
        case 0x3f65bcu: goto label_3f65bc;
        case 0x3f65c0u: goto label_3f65c0;
        case 0x3f65c4u: goto label_3f65c4;
        case 0x3f65c8u: goto label_3f65c8;
        case 0x3f65ccu: goto label_3f65cc;
        case 0x3f65d0u: goto label_3f65d0;
        case 0x3f65d4u: goto label_3f65d4;
        case 0x3f65d8u: goto label_3f65d8;
        case 0x3f65dcu: goto label_3f65dc;
        case 0x3f65e0u: goto label_3f65e0;
        case 0x3f65e4u: goto label_3f65e4;
        case 0x3f65e8u: goto label_3f65e8;
        case 0x3f65ecu: goto label_3f65ec;
        case 0x3f65f0u: goto label_3f65f0;
        case 0x3f65f4u: goto label_3f65f4;
        case 0x3f65f8u: goto label_3f65f8;
        case 0x3f65fcu: goto label_3f65fc;
        case 0x3f6600u: goto label_3f6600;
        case 0x3f6604u: goto label_3f6604;
        case 0x3f6608u: goto label_3f6608;
        case 0x3f660cu: goto label_3f660c;
        case 0x3f6610u: goto label_3f6610;
        case 0x3f6614u: goto label_3f6614;
        case 0x3f6618u: goto label_3f6618;
        case 0x3f661cu: goto label_3f661c;
        case 0x3f6620u: goto label_3f6620;
        case 0x3f6624u: goto label_3f6624;
        case 0x3f6628u: goto label_3f6628;
        case 0x3f662cu: goto label_3f662c;
        case 0x3f6630u: goto label_3f6630;
        case 0x3f6634u: goto label_3f6634;
        case 0x3f6638u: goto label_3f6638;
        case 0x3f663cu: goto label_3f663c;
        case 0x3f6640u: goto label_3f6640;
        case 0x3f6644u: goto label_3f6644;
        case 0x3f6648u: goto label_3f6648;
        case 0x3f664cu: goto label_3f664c;
        case 0x3f6650u: goto label_3f6650;
        case 0x3f6654u: goto label_3f6654;
        case 0x3f6658u: goto label_3f6658;
        case 0x3f665cu: goto label_3f665c;
        case 0x3f6660u: goto label_3f6660;
        case 0x3f6664u: goto label_3f6664;
        case 0x3f6668u: goto label_3f6668;
        case 0x3f666cu: goto label_3f666c;
        case 0x3f6670u: goto label_3f6670;
        case 0x3f6674u: goto label_3f6674;
        case 0x3f6678u: goto label_3f6678;
        case 0x3f667cu: goto label_3f667c;
        case 0x3f6680u: goto label_3f6680;
        case 0x3f6684u: goto label_3f6684;
        case 0x3f6688u: goto label_3f6688;
        case 0x3f668cu: goto label_3f668c;
        case 0x3f6690u: goto label_3f6690;
        case 0x3f6694u: goto label_3f6694;
        case 0x3f6698u: goto label_3f6698;
        case 0x3f669cu: goto label_3f669c;
        case 0x3f66a0u: goto label_3f66a0;
        case 0x3f66a4u: goto label_3f66a4;
        case 0x3f66a8u: goto label_3f66a8;
        case 0x3f66acu: goto label_3f66ac;
        case 0x3f66b0u: goto label_3f66b0;
        case 0x3f66b4u: goto label_3f66b4;
        case 0x3f66b8u: goto label_3f66b8;
        case 0x3f66bcu: goto label_3f66bc;
        case 0x3f66c0u: goto label_3f66c0;
        case 0x3f66c4u: goto label_3f66c4;
        case 0x3f66c8u: goto label_3f66c8;
        case 0x3f66ccu: goto label_3f66cc;
        case 0x3f66d0u: goto label_3f66d0;
        case 0x3f66d4u: goto label_3f66d4;
        case 0x3f66d8u: goto label_3f66d8;
        case 0x3f66dcu: goto label_3f66dc;
        case 0x3f66e0u: goto label_3f66e0;
        case 0x3f66e4u: goto label_3f66e4;
        case 0x3f66e8u: goto label_3f66e8;
        case 0x3f66ecu: goto label_3f66ec;
        case 0x3f66f0u: goto label_3f66f0;
        case 0x3f66f4u: goto label_3f66f4;
        default: break;
    }

    ctx->pc = 0x3f6460u;

label_3f6460:
    // 0x3f6460: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3f6460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3f6464:
    // 0x3f6464: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x3f6464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_3f6468:
    // 0x3f6468: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x3f6468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_3f646c:
    // 0x3f646c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x3f646cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_3f6470:
    // 0x3f6470: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f6470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f6474:
    // 0x3f6474: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x3f6474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_3f6478:
    // 0x3f6478: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x3f6478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_3f647c:
    // 0x3f647c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x3f647cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_3f6480:
    // 0x3f6480: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3f6480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3f6484:
    // 0x3f6484: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3f6484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3f6488:
    // 0x3f6488: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x3f6488u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_3f648c:
    // 0x3f648c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f648cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f6490:
    // 0x3f6490: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f6490u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f6494:
    // 0x3f6494: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f6494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f6498:
    // 0x3f6498: 0x40f809  jalr        $v0
label_3f649c:
    if (ctx->pc == 0x3F649Cu) {
        ctx->pc = 0x3F649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6498u;
        // 0x3f649c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F64A0u;
        goto label_3f64a0;
    }
    ctx->pc = 0x3F6498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F64A0u);
        ctx->pc = 0x3F649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6498u;
        // 0x3f649c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6498u, 0x3F64A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F64A0u;
label_3f64a0:
    // 0x3f64a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f64a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f64a4:
    // 0x3f64a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3f64a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f64a8:
    // 0x3f64a8: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x3f64a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3f64ac:
    // 0x3f64ac: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x3f64acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3f64b0:
    // 0x3f64b0: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x3f64b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3f64b4:
    // 0x3f64b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3f64b8:
    if (ctx->pc == 0x3F64B8u) {
        ctx->pc = 0x3F64B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F64B4u;
        // 0x3f64b8: 0xae130000  sw          $s3, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F64BCu;
        goto label_3f64bc;
    }
    ctx->pc = 0x3F64B4u;
    {
        const bool branch_taken_0x3f64b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F64B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F64B4u;
        // 0x3f64b8: 0xae130000  sw          $s3, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f64b4) {
            ctx->pc = 0x3F64C4u;
            goto label_3f64c4;
        }
    }
    ctx->pc = 0x3F64BCu;
label_3f64bc:
    // 0x3f64bc: 0x10000083  b           . + 4 + (0x83 << 2)
label_3f64c0:
    if (ctx->pc == 0x3F64C0u) {
        ctx->pc = 0x3F64C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F64BCu;
        // 0x3f64c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F64C4u;
        goto label_3f64c4;
    }
    ctx->pc = 0x3F64BCu;
    {
        const bool branch_taken_0x3f64bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F64C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F64BCu;
        // 0x3f64c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f64bc) {
            ctx->pc = 0x3F66CCu;
            goto label_3f66cc;
        }
    }
    ctx->pc = 0x3F64C4u;
label_3f64c4:
    // 0x3f64c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f64c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f64c8:
    // 0x3f64c8: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x3f64c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f64cc:
    // 0x3f64cc: 0x244231a0  addiu       $v0, $v0, 0x31A0
    ctx->pc = 0x3f64ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12704));
label_3f64d0:
    // 0x3f64d0: 0xc63400bc  lwc1        $f20, 0xBC($s1)
    ctx->pc = 0x3f64d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f64d4:
    // 0x3f64d4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3f64d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f64d8:
    // 0x3f64d8: 0x44932800  mtc1        $s3, $f5
    ctx->pc = 0x3f64d8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_3f64dc:
    // 0x3f64dc: 0x0  nop
    ctx->pc = 0x3f64dcu;
    // NOP
label_3f64e0:
    // 0x3f64e0: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x3f64e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_3f64e4:
    // 0x3f64e4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3f64e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3f64e8:
    // 0x3f64e8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3f64e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3f64ec:
    // 0x3f64ec: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3f64ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f64f0:
    // 0x3f64f0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3f64f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f64f4:
    // 0x3f64f4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3f64f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3f64f8:
    // 0x3f64f8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3f64f8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_3f64fc:
    // 0x3f64fc: 0x8e150008  lw          $s5, 0x8($s0)
    ctx->pc = 0x3f64fcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3f6500:
    // 0x3f6500: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x3f6500u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3f6504:
    // 0x3f6504: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3f6504u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f6508:
    // 0x3f6508: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3f6508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3f650c:
    // 0x3f650c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3f650cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f6510:
    // 0x3f6510: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3f6510u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f6514:
    // 0x3f6514: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3f6514u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3f6518:
    // 0x3f6518: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x3f6518u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
label_3f651c:
    // 0x3f651c: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x3f651cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
label_3f6520:
    // 0x3f6520: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x3f6520u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6524:
    // 0x3f6524: 0x0  nop
    ctx->pc = 0x3f6524u;
    // NOP
label_3f6528:
    // 0x3f6528: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3f6528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3f652c:
    // 0x3f652c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3f652cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3f6530:
    // 0x3f6530: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3f6530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3f6534:
    // 0x3f6534: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3f6534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3f6538:
    // 0x3f6538: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x3f6538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
label_3f653c:
    // 0x3f653c: 0x0  nop
    ctx->pc = 0x3f653cu;
    // NOP
label_3f6540:
    // 0x3f6540: 0x0  nop
    ctx->pc = 0x3f6540u;
    // NOP
label_3f6544:
    // 0x3f6544: 0x46002943  div.s       $f5, $f5, $f0
    ctx->pc = 0x3f6544u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[5], ctx->f[0]); }
label_3f6548:
    // 0x3f6548: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x3f6548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
label_3f654c:
    // 0x3f654c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3f654cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3f6550:
    // 0x3f6550: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f6550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f6554:
    // 0x3f6554: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3f6554u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_3f6558:
    // 0x3f6558: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f6558u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f655c:
    // 0x3f655c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x3f655cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_3f6560:
    // 0x3f6560: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3f6560u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f6564:
    // 0x3f6564: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3f6564u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f6568:
    // 0x3f6568: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3f6568u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_3f656c:
    // 0x3f656c: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x3f656cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_3f6570:
    // 0x3f6570: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3f6570u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3f6574:
    // 0x3f6574: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f6574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f6578:
    // 0x3f6578: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3f6578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3f657c:
    // 0x3f657c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3f657cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3f6580:
    // 0x3f6580: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x3f6580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f6584:
    // 0x3f6584: 0xc6040010  lwc1        $f4, 0x10($s0)
    ctx->pc = 0x3f6584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3f6588:
    // 0x3f6588: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x3f6588u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_3f658c:
    // 0x3f658c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x3f658cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f6590:
    // 0x3f6590: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x3f6590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
label_3f6594:
    // 0x3f6594: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3f6594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3f6598:
    // 0x3f6598: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3f6598u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_3f659c:
    // 0x3f659c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x3f659cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f65a0:
    // 0x3f65a0: 0x8e3400b0  lw          $s4, 0xB0($s1)
    ctx->pc = 0x3f65a0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_3f65a4:
    // 0x3f65a4: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x3f65a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3f65a8:
    // 0x3f65a8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f65a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3f65ac:
    // 0x3f65ac: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3f65acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3f65b0:
    // 0x3f65b0: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x3f65b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f65b4:
    // 0x3f65b4: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x3f65b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f65b8:
    // 0x3f65b8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x3f65b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_3f65bc:
    // 0x3f65bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3f65bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3f65c0:
    // 0x3f65c0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3f65c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3f65c4:
    // 0x3f65c4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x3f65c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3f65c8:
    // 0x3f65c8: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x3f65c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f65cc:
    // 0x3f65cc: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x3f65ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f65d0:
    // 0x3f65d0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x3f65d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_3f65d4:
    // 0x3f65d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3f65d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3f65d8:
    // 0x3f65d8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x3f65d8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_3f65dc:
    // 0x3f65dc: 0xc0cd508  jal         func_335420
label_3f65e0:
    if (ctx->pc == 0x3F65E0u) {
        ctx->pc = 0x3F65E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F65DCu;
        // 0x3f65e0: 0xe7a30008  swc1        $f3, 0x8($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F65E4u;
        goto label_3f65e4;
    }
    ctx->pc = 0x3F65DCu;
    SET_GPR_U32(ctx, 31, 0x3F65E4u);
    ctx->pc = 0x3F65E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F65DCu;
    // 0x3f65e0: 0xe7a30008  swc1        $f3, 0x8($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F65DCu, 0x3F65E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F65E4u;
label_3f65e4:
    // 0x3f65e4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3f65e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f65e8:
    // 0x3f65e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f65e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f65ec:
    // 0x3f65ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3f65ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3f65f0:
    // 0x3f65f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f65f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f65f4:
    // 0x3f65f4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f65f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f65f8:
    // 0x3f65f8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3f65f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3f65fc:
    // 0x3f65fc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3f65fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3f6600:
    // 0x3f6600: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x3f6600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f6604:
    // 0x3f6604: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3f6604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3f6608:
    // 0x3f6608: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3f6608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3f660c:
    // 0x3f660c: 0x84c40070  lh          $a0, 0x70($a2)
    ctx->pc = 0x3f660cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_3f6610:
    // 0x3f6610: 0x8cc30074  lw          $v1, 0x74($a2)
    ctx->pc = 0x3f6610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_3f6614:
    // 0x3f6614: 0x60f809  jalr        $v1
label_3f6618:
    if (ctx->pc == 0x3F6618u) {
        ctx->pc = 0x3F6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6614u;
        // 0x3f6618: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F661Cu;
        goto label_3f661c;
    }
    ctx->pc = 0x3F6614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3F661Cu);
        ctx->pc = 0x3F6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6614u;
        // 0x3f6618: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6614u, 0x3F661Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F661Cu;
label_3f661c:
    // 0x3f661c: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x3f661cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3f6620:
    // 0x3f6620: 0x52620013  beql        $s3, $v0, . + 4 + (0x13 << 2)
label_3f6624:
    if (ctx->pc == 0x3F6624u) {
        ctx->pc = 0x3F6624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6620u;
        // 0x3f6624: 0xae2000b4  sw          $zero, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6628u;
        goto label_3f6628;
    }
    ctx->pc = 0x3F6620u;
    {
        const bool branch_taken_0x3f6620 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3f6620) {
            ctx->pc = 0x3F6624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F6620u;
            // 0x3f6624: 0xae2000b4  sw          $zero, 0xB4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F6670u;
            goto label_3f6670;
        }
    }
    ctx->pc = 0x3F6628u;
label_3f6628:
    // 0x3f6628: 0xc0e9694  jal         func_3A5A50
label_3f662c:
    if (ctx->pc == 0x3F662Cu) {
        ctx->pc = 0x3F662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6628u;
        // 0x3f662c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6630u;
        goto label_3f6630;
    }
    ctx->pc = 0x3F6628u;
    SET_GPR_U32(ctx, 31, 0x3F6630u);
    ctx->pc = 0x3F662Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6628u;
    // 0x3f662c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3F6628u, 0x3F6630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6630u;
label_3f6630:
    // 0x3f6630: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3f6634:
    if (ctx->pc == 0x3F6634u) {
        ctx->pc = 0x3F6638u;
        goto label_3f6638;
    }
    ctx->pc = 0x3F6630u;
    {
        const bool branch_taken_0x3f6630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f6630) {
            ctx->pc = 0x3F6640u;
            goto label_3f6640;
        }
    }
    ctx->pc = 0x3F6638u;
label_3f6638:
    // 0x3f6638: 0x1000000d  b           . + 4 + (0xD << 2)
label_3f663c:
    if (ctx->pc == 0x3F663Cu) {
        ctx->pc = 0x3F663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6638u;
        // 0x3f663c: 0xae2000b4  sw          $zero, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6640u;
        goto label_3f6640;
    }
    ctx->pc = 0x3F6638u;
    {
        const bool branch_taken_0x3f6638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6638u;
        // 0x3f663c: 0xae2000b4  sw          $zero, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6638) {
            ctx->pc = 0x3F6670u;
            goto label_3f6670;
        }
    }
    ctx->pc = 0x3F6640u;
label_3f6640:
    // 0x3f6640: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
label_3f6644:
    if (ctx->pc == 0x3F6644u) {
        ctx->pc = 0x3F6644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6640u;
        // 0x3f6644: 0x2531823  subu        $v1, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6648u;
        goto label_3f6648;
    }
    ctx->pc = 0x3F6640u;
    {
        const bool branch_taken_0x3f6640 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6640u;
        // 0x3f6644: 0x2531823  subu        $v1, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6640) {
            ctx->pc = 0x3F6678u;
            goto label_3f6678;
        }
    }
    ctx->pc = 0x3F6648u;
label_3f6648:
    // 0x3f6648: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3f6648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3f664c:
    // 0x3f664c: 0x751818  mult        $v1, $v1, $s5
    ctx->pc = 0x3f664cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3f6650:
    // 0x3f6650: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3f6650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3f6654:
    // 0x3f6654: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x3f6654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
label_3f6658:
    // 0x3f6658: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
label_3f665c:
    if (ctx->pc == 0x3F665Cu) {
        ctx->pc = 0x3F665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6658u;
        // 0x3f665c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6660u;
        goto label_3f6660;
    }
    ctx->pc = 0x3F6658u;
    {
        const bool branch_taken_0x3f6658 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6658) {
            ctx->pc = 0x3F665Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F6658u;
            // 0x3f665c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F6660u;
            goto label_3f6660;
        }
    }
    ctx->pc = 0x3F6660u;
label_3f6660:
    // 0x3f6660: 0x72001a  div         $zero, $v1, $s2
    ctx->pc = 0x3f6660u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3f6664:
    // 0x3f6664: 0x1812  mflo        $v1
    ctx->pc = 0x3f6664u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_3f6668:
    // 0x3f6668: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f6668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3f666c:
    // 0x3f666c: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x3f666cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
label_3f6670:
    // 0x3f6670: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
label_3f6674:
    if (ctx->pc == 0x3F6674u) {
        ctx->pc = 0x3F6678u;
        goto label_3f6678;
    }
    ctx->pc = 0x3F6670u;
    {
        const bool branch_taken_0x3f6670 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f6670) {
            ctx->pc = 0x3F6698u;
            goto label_3f6698;
        }
    }
    ctx->pc = 0x3F6678u;
label_3f6678:
    // 0x3f6678: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x3f6678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_3f667c:
    // 0x3f667c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3f667cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3f6680:
    // 0x3f6680: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3f6680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_3f6684:
    // 0x3f6684: 0x2952025  or          $a0, $s4, $s5
    ctx->pc = 0x3f6684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) | GPR_U64(ctx, 21));
label_3f6688:
    // 0x3f6688: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f6688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3f668c:
    // 0x3f668c: 0xae2400b4  sw          $a0, 0xB4($s1)
    ctx->pc = 0x3f668cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 4));
label_3f6690:
    // 0x3f6690: 0x1000000d  b           . + 4 + (0xD << 2)
label_3f6694:
    if (ctx->pc == 0x3F6694u) {
        ctx->pc = 0x3F6694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6690u;
        // 0x3f6694: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6698u;
        goto label_3f6698;
    }
    ctx->pc = 0x3F6690u;
    {
        const bool branch_taken_0x3f6690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6690u;
        // 0x3f6694: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6690) {
            ctx->pc = 0x3F66C8u;
            goto label_3f66c8;
        }
    }
    ctx->pc = 0x3F6698u;
label_3f6698:
    // 0x3f6698: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x3f6698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_3f669c:
    // 0x3f669c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3f669cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3f66a0:
    // 0x3f66a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f66a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f66a4:
    // 0x3f66a4: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x3f66a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_3f66a8:
    // 0x3f66a8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3f66a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3f66ac:
    // 0x3f66ac: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f66acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f66b0:
    // 0x3f66b0: 0xc0cd508  jal         func_335420
label_3f66b4:
    if (ctx->pc == 0x3F66B4u) {
        ctx->pc = 0x3F66B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F66B0u;
        // 0x3f66b4: 0x26c4b8b8  addiu       $a0, $s6, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F66B8u;
        goto label_3f66b8;
    }
    ctx->pc = 0x3F66B0u;
    SET_GPR_U32(ctx, 31, 0x3F66B8u);
    ctx->pc = 0x3F66B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F66B0u;
    // 0x3f66b4: 0x26c4b8b8  addiu       $a0, $s6, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3F66B0u, 0x3F66B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F66B8u;
label_3f66b8:
    // 0x3f66b8: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x3f66b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f66bc:
    // 0x3f66bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3f66bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3f66c0:
    // 0x3f66c0: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x3f66c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_3f66c4:
    // 0x3f66c4: 0xe62100c0  swc1        $f1, 0xC0($s1)
    ctx->pc = 0x3f66c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3f66c8:
    // 0x3f66c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f66c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f66cc:
    // 0x3f66cc: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x3f66ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3f66d0:
    // 0x3f66d0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x3f66d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3f66d4:
    // 0x3f66d4: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x3f66d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3f66d8:
    // 0x3f66d8: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x3f66d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3f66dc:
    // 0x3f66dc: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x3f66dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3f66e0:
    // 0x3f66e0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x3f66e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f66e4:
    // 0x3f66e4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3f66e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f66e8:
    // 0x3f66e8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3f66e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3f66ec:
    // 0x3f66ec: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x3f66ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f66f0:
    // 0x3f66f0: 0x3e00008  jr          $ra
label_3f66f4:
    if (ctx->pc == 0x3F66F4u) {
        ctx->pc = 0x3F66F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F66F0u;
        // 0x3f66f4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F66F8u;
        goto label_fallthrough_0x3f66f0;
    }
    ctx->pc = 0x3F66F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F66F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F66F0u;
        // 0x3f66f4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F66F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f66f0:
    ctx->pc = 0x3F66F8u;
}
