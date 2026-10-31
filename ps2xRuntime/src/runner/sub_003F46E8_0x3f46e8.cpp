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

// Function: sub_003F46E8
// Address: 0x3f46e8 - 0x3f4950
void sub_003F46E8_0x3f46e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F46E8_0x3f46e8");
#endif

    switch (ctx->pc) {
        case 0x3f46e8u: goto label_3f46e8;
        case 0x3f46ecu: goto label_3f46ec;
        case 0x3f46f0u: goto label_3f46f0;
        case 0x3f46f4u: goto label_3f46f4;
        case 0x3f46f8u: goto label_3f46f8;
        case 0x3f46fcu: goto label_3f46fc;
        case 0x3f4700u: goto label_3f4700;
        case 0x3f4704u: goto label_3f4704;
        case 0x3f4708u: goto label_3f4708;
        case 0x3f470cu: goto label_3f470c;
        case 0x3f4710u: goto label_3f4710;
        case 0x3f4714u: goto label_3f4714;
        case 0x3f4718u: goto label_3f4718;
        case 0x3f471cu: goto label_3f471c;
        case 0x3f4720u: goto label_3f4720;
        case 0x3f4724u: goto label_3f4724;
        case 0x3f4728u: goto label_3f4728;
        case 0x3f472cu: goto label_3f472c;
        case 0x3f4730u: goto label_3f4730;
        case 0x3f4734u: goto label_3f4734;
        case 0x3f4738u: goto label_3f4738;
        case 0x3f473cu: goto label_3f473c;
        case 0x3f4740u: goto label_3f4740;
        case 0x3f4744u: goto label_3f4744;
        case 0x3f4748u: goto label_3f4748;
        case 0x3f474cu: goto label_3f474c;
        case 0x3f4750u: goto label_3f4750;
        case 0x3f4754u: goto label_3f4754;
        case 0x3f4758u: goto label_3f4758;
        case 0x3f475cu: goto label_3f475c;
        case 0x3f4760u: goto label_3f4760;
        case 0x3f4764u: goto label_3f4764;
        case 0x3f4768u: goto label_3f4768;
        case 0x3f476cu: goto label_3f476c;
        case 0x3f4770u: goto label_3f4770;
        case 0x3f4774u: goto label_3f4774;
        case 0x3f4778u: goto label_3f4778;
        case 0x3f477cu: goto label_3f477c;
        case 0x3f4780u: goto label_3f4780;
        case 0x3f4784u: goto label_3f4784;
        case 0x3f4788u: goto label_3f4788;
        case 0x3f478cu: goto label_3f478c;
        case 0x3f4790u: goto label_3f4790;
        case 0x3f4794u: goto label_3f4794;
        case 0x3f4798u: goto label_3f4798;
        case 0x3f479cu: goto label_3f479c;
        case 0x3f47a0u: goto label_3f47a0;
        case 0x3f47a4u: goto label_3f47a4;
        case 0x3f47a8u: goto label_3f47a8;
        case 0x3f47acu: goto label_3f47ac;
        case 0x3f47b0u: goto label_3f47b0;
        case 0x3f47b4u: goto label_3f47b4;
        case 0x3f47b8u: goto label_3f47b8;
        case 0x3f47bcu: goto label_3f47bc;
        case 0x3f47c0u: goto label_3f47c0;
        case 0x3f47c4u: goto label_3f47c4;
        case 0x3f47c8u: goto label_3f47c8;
        case 0x3f47ccu: goto label_3f47cc;
        case 0x3f47d0u: goto label_3f47d0;
        case 0x3f47d4u: goto label_3f47d4;
        case 0x3f47d8u: goto label_3f47d8;
        case 0x3f47dcu: goto label_3f47dc;
        case 0x3f47e0u: goto label_3f47e0;
        case 0x3f47e4u: goto label_3f47e4;
        case 0x3f47e8u: goto label_3f47e8;
        case 0x3f47ecu: goto label_3f47ec;
        case 0x3f47f0u: goto label_3f47f0;
        case 0x3f47f4u: goto label_3f47f4;
        case 0x3f47f8u: goto label_3f47f8;
        case 0x3f47fcu: goto label_3f47fc;
        case 0x3f4800u: goto label_3f4800;
        case 0x3f4804u: goto label_3f4804;
        case 0x3f4808u: goto label_3f4808;
        case 0x3f480cu: goto label_3f480c;
        case 0x3f4810u: goto label_3f4810;
        case 0x3f4814u: goto label_3f4814;
        case 0x3f4818u: goto label_3f4818;
        case 0x3f481cu: goto label_3f481c;
        case 0x3f4820u: goto label_3f4820;
        case 0x3f4824u: goto label_3f4824;
        case 0x3f4828u: goto label_3f4828;
        case 0x3f482cu: goto label_3f482c;
        case 0x3f4830u: goto label_3f4830;
        case 0x3f4834u: goto label_3f4834;
        case 0x3f4838u: goto label_3f4838;
        case 0x3f483cu: goto label_3f483c;
        case 0x3f4840u: goto label_3f4840;
        case 0x3f4844u: goto label_3f4844;
        case 0x3f4848u: goto label_3f4848;
        case 0x3f484cu: goto label_3f484c;
        case 0x3f4850u: goto label_3f4850;
        case 0x3f4854u: goto label_3f4854;
        case 0x3f4858u: goto label_3f4858;
        case 0x3f485cu: goto label_3f485c;
        case 0x3f4860u: goto label_3f4860;
        case 0x3f4864u: goto label_3f4864;
        case 0x3f4868u: goto label_3f4868;
        case 0x3f486cu: goto label_3f486c;
        case 0x3f4870u: goto label_3f4870;
        case 0x3f4874u: goto label_3f4874;
        case 0x3f4878u: goto label_3f4878;
        case 0x3f487cu: goto label_3f487c;
        case 0x3f4880u: goto label_3f4880;
        case 0x3f4884u: goto label_3f4884;
        case 0x3f4888u: goto label_3f4888;
        case 0x3f488cu: goto label_3f488c;
        case 0x3f4890u: goto label_3f4890;
        case 0x3f4894u: goto label_3f4894;
        case 0x3f4898u: goto label_3f4898;
        case 0x3f489cu: goto label_3f489c;
        case 0x3f48a0u: goto label_3f48a0;
        case 0x3f48a4u: goto label_3f48a4;
        case 0x3f48a8u: goto label_3f48a8;
        case 0x3f48acu: goto label_3f48ac;
        case 0x3f48b0u: goto label_3f48b0;
        case 0x3f48b4u: goto label_3f48b4;
        case 0x3f48b8u: goto label_3f48b8;
        case 0x3f48bcu: goto label_3f48bc;
        case 0x3f48c0u: goto label_3f48c0;
        case 0x3f48c4u: goto label_3f48c4;
        case 0x3f48c8u: goto label_3f48c8;
        case 0x3f48ccu: goto label_3f48cc;
        case 0x3f48d0u: goto label_3f48d0;
        case 0x3f48d4u: goto label_3f48d4;
        case 0x3f48d8u: goto label_3f48d8;
        case 0x3f48dcu: goto label_3f48dc;
        case 0x3f48e0u: goto label_3f48e0;
        case 0x3f48e4u: goto label_3f48e4;
        case 0x3f48e8u: goto label_3f48e8;
        case 0x3f48ecu: goto label_3f48ec;
        case 0x3f48f0u: goto label_3f48f0;
        case 0x3f48f4u: goto label_3f48f4;
        case 0x3f48f8u: goto label_3f48f8;
        case 0x3f48fcu: goto label_3f48fc;
        case 0x3f4900u: goto label_3f4900;
        case 0x3f4904u: goto label_3f4904;
        case 0x3f4908u: goto label_3f4908;
        case 0x3f490cu: goto label_3f490c;
        case 0x3f4910u: goto label_3f4910;
        case 0x3f4914u: goto label_3f4914;
        case 0x3f4918u: goto label_3f4918;
        case 0x3f491cu: goto label_3f491c;
        case 0x3f4920u: goto label_3f4920;
        case 0x3f4924u: goto label_3f4924;
        case 0x3f4928u: goto label_3f4928;
        case 0x3f492cu: goto label_3f492c;
        case 0x3f4930u: goto label_3f4930;
        case 0x3f4934u: goto label_3f4934;
        case 0x3f4938u: goto label_3f4938;
        case 0x3f493cu: goto label_3f493c;
        case 0x3f4940u: goto label_3f4940;
        case 0x3f4944u: goto label_3f4944;
        case 0x3f4948u: goto label_3f4948;
        case 0x3f494cu: goto label_3f494c;
        default: break;
    }

    ctx->pc = 0x3f46e8u;

label_3f46e8:
    // 0x3f46e8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3f46e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3f46ec:
    // 0x3f46ec: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3f46ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_3f46f0:
    // 0x3f46f0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3f46f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_3f46f4:
    // 0x3f46f4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3f46f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_3f46f8:
    // 0x3f46f8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3f46f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f46fc:
    // 0x3f46fc: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3f46fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_3f4700:
    // 0x3f4700: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3f4700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_3f4704:
    // 0x3f4704: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3f4704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_3f4708:
    // 0x3f4708: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3f4708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3f470c:
    // 0x3f470c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3f470cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3f4710:
    // 0x3f4710: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x3f4710u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_3f4714:
    // 0x3f4714: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x3f4714u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_3f4718:
    // 0x3f4718: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x3f4718u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3f471c:
    // 0x3f471c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3f471cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3f4720:
    // 0x3f4720: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f4720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f4724:
    // 0x3f4724: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f4724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f4728:
    // 0x3f4728: 0x40f809  jalr        $v0
label_3f472c:
    if (ctx->pc == 0x3F472Cu) {
        ctx->pc = 0x3F472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4728u;
        // 0x3f472c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4730u;
        goto label_3f4730;
    }
    ctx->pc = 0x3F4728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F4730u);
        ctx->pc = 0x3F472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4728u;
        // 0x3f472c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F4728u, 0x3F4730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F4730u;
label_3f4730:
    // 0x3f4730: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f4730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f4734:
    // 0x3f4734: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f4734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f4738:
    // 0x3f4738: 0x1c40006c  bgtz        $v0, . + 4 + (0x6C << 2)
label_3f473c:
    if (ctx->pc == 0x3F473Cu) {
        ctx->pc = 0x3F473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4738u;
        // 0x3f473c: 0x2842000b  slti        $v0, $v0, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4740u;
        goto label_3f4740;
    }
    ctx->pc = 0x3F4738u;
    {
        const bool branch_taken_0x3f4738 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3F473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4738u;
        // 0x3f473c: 0x2842000b  slti        $v0, $v0, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4738) {
            ctx->pc = 0x3F48ECu;
            goto label_3f48ec;
        }
    }
    ctx->pc = 0x3F4740u;
label_3f4740:
    // 0x3f4740: 0x7aa30010  lq          $v1, 0x10($s5)
    ctx->pc = 0x3f4740u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_3f4744:
    // 0x3f4744: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3f4744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3f4748:
    // 0x3f4748: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x3f4748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3f474c:
    // 0x3f474c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f474cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f4750:
    // 0x3f4750: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3f4750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3f4754:
    // 0x3f4754: 0xc1073cc  jal         func_41CF30
label_3f4758:
    if (ctx->pc == 0x3F4758u) {
        ctx->pc = 0x3F4758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4754u;
        // 0x3f4758: 0x24160008  addiu       $s6, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F475Cu;
        goto label_3f475c;
    }
    ctx->pc = 0x3F4754u;
    SET_GPR_U32(ctx, 31, 0x3F475Cu);
    ctx->pc = 0x3F4758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4754u;
    // 0x3f4758: 0x24160008  addiu       $s6, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3F4754u, 0x3F475Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F475Cu;
label_3f475c:
    // 0x3f475c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3f475cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3f4760:
    // 0x3f4760: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3f4760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f4764:
    // 0x3f4764: 0x62b00b  movn        $s6, $v1, $v0
    ctx->pc = 0x3f4764u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 3));
label_3f4768:
    // 0x3f4768: 0x12c0005b  beqz        $s6, . + 4 + (0x5B << 2)
label_3f476c:
    if (ctx->pc == 0x3F476Cu) {
        ctx->pc = 0x3F476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4768u;
        // 0x3f476c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4770u;
        goto label_3f4770;
    }
    ctx->pc = 0x3F4768u;
    {
        const bool branch_taken_0x3f4768 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4768u;
        // 0x3f476c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4768) {
            ctx->pc = 0x3F48D8u;
            goto label_3f48d8;
        }
    }
    ctx->pc = 0x3F4770u;
label_3f4770:
    // 0x3f4770: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f4770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f4774:
    // 0x3f4774: 0x3c01bf66  lui         $at, 0xBF66
    ctx->pc = 0x3f4774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48998 << 16));
label_3f4778:
    // 0x3f4778: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3f4778u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3f477c:
    // 0x3f477c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3f477cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3f4780:
    // 0x3f4780: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x3f4780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_3f4784:
    // 0x3f4784: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3f4784u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3f4788:
    // 0x3f4788: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3f4788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3f478c:
    // 0x3f478c: 0x2452b8b8  addiu       $s2, $v0, -0x4748
    ctx->pc = 0x3f478cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3f4790:
    // 0x3f4790: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x3f4790u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f4794:
    // 0x3f4794: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x3f4794u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f4798:
    // 0x3f4798: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f4798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f479c:
    // 0x3f479c: 0x0  nop
    ctx->pc = 0x3f479cu;
    // NOP
label_3f47a0:
    // 0x3f47a0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3f47a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3f47a4:
    // 0x3f47a4: 0xc0cd518  jal         func_335460
label_3f47a8:
    if (ctx->pc == 0x3F47A8u) {
        ctx->pc = 0x3F47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F47A4u;
        // 0x3f47a8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F47ACu;
        goto label_3f47ac;
    }
    ctx->pc = 0x3F47A4u;
    SET_GPR_U32(ctx, 31, 0x3F47ACu);
    ctx->pc = 0x3F47A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F47A4u;
    // 0x3f47a8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3F47A4u, 0x3F47ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F47ACu;
label_3f47ac:
    // 0x3f47ac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3f47acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3f47b0:
    // 0x3f47b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f47b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f47b4:
    // 0x3f47b4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3f47b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3f47b8:
    // 0x3f47b8: 0xc0cd518  jal         func_335460
label_3f47bc:
    if (ctx->pc == 0x3F47BCu) {
        ctx->pc = 0x3F47BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F47B8u;
        // 0x3f47bc: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F47C0u;
        goto label_3f47c0;
    }
    ctx->pc = 0x3F47B8u;
    SET_GPR_U32(ctx, 31, 0x3F47C0u);
    ctx->pc = 0x3F47BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F47B8u;
    // 0x3f47bc: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3F47B8u, 0x3F47C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F47C0u;
label_3f47c0:
    // 0x3f47c0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3f47c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3f47c4:
    // 0x3f47c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f47c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f47c8:
    // 0x3f47c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3f47c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3f47cc:
    // 0x3f47cc: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x3f47ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_3f47d0:
    // 0x3f47d0: 0xc0cd55c  jal         func_335570
label_3f47d4:
    if (ctx->pc == 0x3F47D4u) {
        ctx->pc = 0x3F47D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F47D0u;
        // 0x3f47d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F47D8u;
        goto label_3f47d8;
    }
    ctx->pc = 0x3F47D0u;
    SET_GPR_U32(ctx, 31, 0x3F47D8u);
    ctx->pc = 0x3F47D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F47D0u;
    // 0x3f47d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x3F47D0u, 0x3F47D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F47D8u;
label_3f47d8:
    // 0x3f47d8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3f47d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f47dc:
    // 0x3f47dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3f47dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f47e0:
    // 0x3f47e0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f47e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f47e4:
    // 0x3f47e4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3f47e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f47e8:
    // 0x3f47e8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3f47e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f47ec:
    // 0x3f47ec: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3f47ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f47f0:
    // 0x3f47f0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3f47f0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f47f4:
    // 0x3f47f4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3f47f4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_3f47f8:
    // 0x3f47f8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3f47f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3f47fc:
    // 0x3f47fc: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3f47fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3f4800:
    // 0x3f4800: 0xc0e9694  jal         func_3A5A50
label_3f4804:
    if (ctx->pc == 0x3F4804u) {
        ctx->pc = 0x3F4804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4800u;
        // 0x3f4804: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4808u;
        goto label_3f4808;
    }
    ctx->pc = 0x3F4800u;
    SET_GPR_U32(ctx, 31, 0x3F4808u);
    ctx->pc = 0x3F4804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4800u;
    // 0x3f4804: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3F4800u, 0x3F4808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4808u;
label_3f4808:
    // 0x3f4808: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
label_3f480c:
    if (ctx->pc == 0x3F480Cu) {
        ctx->pc = 0x3F480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4808u;
        // 0x3f480c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4810u;
        goto label_3f4810;
    }
    ctx->pc = 0x3F4808u;
    {
        const bool branch_taken_0x3f4808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4808) {
            ctx->pc = 0x3F480Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F4808u;
            // 0x3f480c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F48CCu;
            goto label_3f48cc;
        }
    }
    ctx->pc = 0x3F4810u;
label_3f4810:
    // 0x3f4810: 0x16200018  bnez        $s1, . + 4 + (0x18 << 2)
label_3f4814:
    if (ctx->pc == 0x3F4814u) {
        ctx->pc = 0x3F4818u;
        goto label_3f4818;
    }
    ctx->pc = 0x3F4810u;
    {
        const bool branch_taken_0x3f4810 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4810) {
            ctx->pc = 0x3F4874u;
            goto label_3f4874;
        }
    }
    ctx->pc = 0x3F4818u;
label_3f4818:
    // 0x3f4818: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f4818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f481c:
    // 0x3f481c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f481cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f4820:
    // 0x3f4820: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3f4820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3f4824:
    // 0x3f4824: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f4824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f4828:
    // 0x3f4828: 0xc0cd518  jal         func_335460
label_3f482c:
    if (ctx->pc == 0x3F482Cu) {
        ctx->pc = 0x3F482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4828u;
        // 0x3f482c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4830u;
        goto label_3f4830;
    }
    ctx->pc = 0x3F4828u;
    SET_GPR_U32(ctx, 31, 0x3F4830u);
    ctx->pc = 0x3F482Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4828u;
    // 0x3f482c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3F4828u, 0x3F4830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4830u;
label_3f4830:
    // 0x3f4830: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x3f4830u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_3f4834:
    // 0x3f4834: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f4834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f4838:
    // 0x3f4838: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3f4838u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3f483c:
    // 0x3f483c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f483cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f4840:
    // 0x3f4840: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f4840u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f4844:
    // 0x3f4844: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f4844u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f4848:
    // 0x3f4848: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3f4848u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3f484c:
    // 0x3f484c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3f484cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3f4850:
    // 0x3f4850: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3f4850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3f4854:
    // 0x3f4854: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3f4854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3f4858:
    // 0x3f4858: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3f4858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3f485c:
    // 0x3f485c: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x3f485cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3f4860:
    // 0x3f4860: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x3f4860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3f4864:
    // 0x3f4864: 0xc0f172e  jal         func_3C5CB8
label_3f4868:
    if (ctx->pc == 0x3F4868u) {
        ctx->pc = 0x3F4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4864u;
        // 0x3f4868: 0x8e070018  lw          $a3, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F486Cu;
        goto label_3f486c;
    }
    ctx->pc = 0x3F4864u;
    SET_GPR_U32(ctx, 31, 0x3F486Cu);
    ctx->pc = 0x3F4868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4864u;
    // 0x3f4868: 0x8e070018  lw          $a3, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5CB8u, 0x3F4864u, 0x3F486Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F486Cu;
label_3f486c:
    // 0x3f486c: 0x10000017  b           . + 4 + (0x17 << 2)
label_3f4870:
    if (ctx->pc == 0x3F4870u) {
        ctx->pc = 0x3F4870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F486Cu;
        // 0x3f4870: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4874u;
        goto label_3f4874;
    }
    ctx->pc = 0x3F486Cu;
    {
        const bool branch_taken_0x3f486c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F486Cu;
        // 0x3f4870: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f486c) {
            ctx->pc = 0x3F48CCu;
            goto label_3f48cc;
        }
    }
    ctx->pc = 0x3F4874u;
label_3f4874:
    // 0x3f4874: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f4874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f4878:
    // 0x3f4878: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f4878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f487c:
    // 0x3f487c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3f487cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3f4880:
    // 0x3f4880: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3f4880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f4884:
    // 0x3f4884: 0xc0cd518  jal         func_335460
label_3f4888:
    if (ctx->pc == 0x3F4888u) {
        ctx->pc = 0x3F4888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4884u;
        // 0x3f4888: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F488Cu;
        goto label_3f488c;
    }
    ctx->pc = 0x3F4884u;
    SET_GPR_U32(ctx, 31, 0x3F488Cu);
    ctx->pc = 0x3F4888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4884u;
    // 0x3f4888: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3F4884u, 0x3F488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F488Cu;
label_3f488c:
    // 0x3f488c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x3f488cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_3f4890:
    // 0x3f4890: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f4890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f4894:
    // 0x3f4894: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3f4894u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3f4898:
    // 0x3f4898: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f4898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f489c:
    // 0x3f489c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f489cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f48a0:
    // 0x3f48a0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f48a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f48a4:
    // 0x3f48a4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3f48a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3f48a8:
    // 0x3f48a8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3f48a8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3f48ac:
    // 0x3f48ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f48acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f48b0:
    // 0x3f48b0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3f48b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3f48b4:
    // 0x3f48b4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3f48b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3f48b8:
    // 0x3f48b8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3f48b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3f48bc:
    // 0x3f48bc: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x3f48bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3f48c0:
    // 0x3f48c0: 0xc0f172e  jal         func_3C5CB8
label_3f48c4:
    if (ctx->pc == 0x3F48C4u) {
        ctx->pc = 0x3F48C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F48C0u;
        // 0x3f48c4: 0xc60c001c  lwc1        $f12, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F48C8u;
        goto label_3f48c8;
    }
    ctx->pc = 0x3F48C0u;
    SET_GPR_U32(ctx, 31, 0x3F48C8u);
    ctx->pc = 0x3F48C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F48C0u;
    // 0x3f48c4: 0xc60c001c  lwc1        $f12, 0x1C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5CB8u, 0x3F48C0u, 0x3F48C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F48C8u;
label_3f48c8:
    // 0x3f48c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3f48c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3f48cc:
    // 0x3f48cc: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x3f48ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_3f48d0:
    // 0x3f48d0: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
label_3f48d4:
    if (ctx->pc == 0x3F48D4u) {
        ctx->pc = 0x3F48D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F48D0u;
        // 0x3f48d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F48D8u;
        goto label_3f48d8;
    }
    ctx->pc = 0x3F48D0u;
    {
        const bool branch_taken_0x3f48d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F48D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F48D0u;
        // 0x3f48d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f48d0) {
            ctx->pc = 0x3F47A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f47a0;
        }
    }
    ctx->pc = 0x3F48D8u;
label_3f48d8:
    // 0x3f48d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3f48d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f48dc:
    // 0x3f48dc: 0xc0e858c  jal         func_3A1630
label_3f48e0:
    if (ctx->pc == 0x3F48E0u) {
        ctx->pc = 0x3F48E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F48DCu;
        // 0x3f48e0: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F48E4u;
        goto label_3f48e4;
    }
    ctx->pc = 0x3F48DCu;
    SET_GPR_U32(ctx, 31, 0x3F48E4u);
    ctx->pc = 0x3F48E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F48DCu;
    // 0x3f48e0: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F48DCu, 0x3F48E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F48E4u;
label_3f48e4:
    // 0x3f48e4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f48e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f48e8:
    // 0x3f48e8: 0x2842000b  slti        $v0, $v0, 0xB
    ctx->pc = 0x3f48e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
label_3f48ec:
    // 0x3f48ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3f48f0:
    if (ctx->pc == 0x3F48F0u) {
        ctx->pc = 0x3F48F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F48ECu;
        // 0x3f48f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F48F4u;
        goto label_3f48f4;
    }
    ctx->pc = 0x3F48ECu;
    {
        const bool branch_taken_0x3f48ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F48F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F48ECu;
        // 0x3f48f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f48ec) {
            ctx->pc = 0x3F4918u;
            goto label_3f4918;
        }
    }
    ctx->pc = 0x3F48F4u;
label_3f48f4:
    // 0x3f48f4: 0xc0e9694  jal         func_3A5A50
label_3f48f8:
    if (ctx->pc == 0x3F48F8u) {
        ctx->pc = 0x3F48F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F48F4u;
        // 0x3f48f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F48FCu;
        goto label_3f48fc;
    }
    ctx->pc = 0x3F48F4u;
    SET_GPR_U32(ctx, 31, 0x3F48FCu);
    ctx->pc = 0x3F48F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F48F4u;
    // 0x3f48f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3F48F4u, 0x3F48FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F48FCu;
label_3f48fc:
    // 0x3f48fc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3f4900:
    if (ctx->pc == 0x3F4900u) {
        ctx->pc = 0x3F4900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F48FCu;
        // 0x3f4900: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F4904u;
        goto label_3f4904;
    }
    ctx->pc = 0x3F48FCu;
    {
        const bool branch_taken_0x3f48fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f48fc) {
            ctx->pc = 0x3F4900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F48FCu;
            // 0x3f4900: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F490Cu;
            goto label_3f490c;
        }
    }
    ctx->pc = 0x3F4904u;
label_3f4904:
    // 0x3f4904: 0x10000004  b           . + 4 + (0x4 << 2)
label_3f4908:
    if (ctx->pc == 0x3F4908u) {
        ctx->pc = 0x3F4908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4904u;
        // 0x3f4908: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F490Cu;
        goto label_3f490c;
    }
    ctx->pc = 0x3F4904u;
    {
        const bool branch_taken_0x3f4904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4904u;
        // 0x3f4908: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4904) {
            ctx->pc = 0x3F4918u;
            goto label_3f4918;
        }
    }
    ctx->pc = 0x3F490Cu;
label_3f490c:
    // 0x3f490c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f490cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f4910:
    // 0x3f4910: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f4910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3f4914:
    // 0x3f4914: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x3f4914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_3f4918:
    // 0x3f4918: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3f4918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3f491c:
    // 0x3f491c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3f491cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3f4920:
    // 0x3f4920: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3f4920u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3f4924:
    // 0x3f4924: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3f4924u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3f4928:
    // 0x3f4928: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3f4928u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f492c:
    // 0x3f492c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3f492cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f4930:
    // 0x3f4930: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3f4930u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f4934:
    // 0x3f4934: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3f4934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3f4938:
    // 0x3f4938: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x3f4938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3f493c:
    // 0x3f493c: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x3f493cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3f4940:
    // 0x3f4940: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x3f4940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f4944:
    // 0x3f4944: 0x3e00008  jr          $ra
label_3f4948:
    if (ctx->pc == 0x3F4948u) {
        ctx->pc = 0x3F4948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4944u;
        // 0x3f4948: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F494Cu;
        goto label_3f494c;
    }
    ctx->pc = 0x3F4944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F4948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4944u;
        // 0x3f4948: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F4944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F494Cu;
label_3f494c:
    // 0x3f494c: 0x0  nop
    ctx->pc = 0x3f494cu;
    // NOP
    ctx->pc = 0x3f4950u;
}
