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

// Function: sub_001754E8
// Address: 0x1754e8 - 0x175610
void sub_001754E8_0x1754e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001754E8_0x1754e8");
#endif

    switch (ctx->pc) {
        case 0x1754e8u: goto label_1754e8;
        case 0x1754ecu: goto label_1754ec;
        case 0x1754f0u: goto label_1754f0;
        case 0x1754f4u: goto label_1754f4;
        case 0x1754f8u: goto label_1754f8;
        case 0x1754fcu: goto label_1754fc;
        case 0x175500u: goto label_175500;
        case 0x175504u: goto label_175504;
        case 0x175508u: goto label_175508;
        case 0x17550cu: goto label_17550c;
        case 0x175510u: goto label_175510;
        case 0x175514u: goto label_175514;
        case 0x175518u: goto label_175518;
        case 0x17551cu: goto label_17551c;
        case 0x175520u: goto label_175520;
        case 0x175524u: goto label_175524;
        case 0x175528u: goto label_175528;
        case 0x17552cu: goto label_17552c;
        case 0x175530u: goto label_175530;
        case 0x175534u: goto label_175534;
        case 0x175538u: goto label_175538;
        case 0x17553cu: goto label_17553c;
        case 0x175540u: goto label_175540;
        case 0x175544u: goto label_175544;
        case 0x175548u: goto label_175548;
        case 0x17554cu: goto label_17554c;
        case 0x175550u: goto label_175550;
        case 0x175554u: goto label_175554;
        case 0x175558u: goto label_175558;
        case 0x17555cu: goto label_17555c;
        case 0x175560u: goto label_175560;
        case 0x175564u: goto label_175564;
        case 0x175568u: goto label_175568;
        case 0x17556cu: goto label_17556c;
        case 0x175570u: goto label_175570;
        case 0x175574u: goto label_175574;
        case 0x175578u: goto label_175578;
        case 0x17557cu: goto label_17557c;
        case 0x175580u: goto label_175580;
        case 0x175584u: goto label_175584;
        case 0x175588u: goto label_175588;
        case 0x17558cu: goto label_17558c;
        case 0x175590u: goto label_175590;
        case 0x175594u: goto label_175594;
        case 0x175598u: goto label_175598;
        case 0x17559cu: goto label_17559c;
        case 0x1755a0u: goto label_1755a0;
        case 0x1755a4u: goto label_1755a4;
        case 0x1755a8u: goto label_1755a8;
        case 0x1755acu: goto label_1755ac;
        case 0x1755b0u: goto label_1755b0;
        case 0x1755b4u: goto label_1755b4;
        case 0x1755b8u: goto label_1755b8;
        case 0x1755bcu: goto label_1755bc;
        case 0x1755c0u: goto label_1755c0;
        case 0x1755c4u: goto label_1755c4;
        case 0x1755c8u: goto label_1755c8;
        case 0x1755ccu: goto label_1755cc;
        case 0x1755d0u: goto label_1755d0;
        case 0x1755d4u: goto label_1755d4;
        case 0x1755d8u: goto label_1755d8;
        case 0x1755dcu: goto label_1755dc;
        case 0x1755e0u: goto label_1755e0;
        case 0x1755e4u: goto label_1755e4;
        case 0x1755e8u: goto label_1755e8;
        case 0x1755ecu: goto label_1755ec;
        case 0x1755f0u: goto label_1755f0;
        case 0x1755f4u: goto label_1755f4;
        case 0x1755f8u: goto label_1755f8;
        case 0x1755fcu: goto label_1755fc;
        case 0x175600u: goto label_175600;
        case 0x175604u: goto label_175604;
        case 0x175608u: goto label_175608;
        case 0x17560cu: goto label_17560c;
        default: break;
    }

    ctx->pc = 0x1754e8u;

label_1754e8:
    // 0x1754e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1754e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1754ec:
    // 0x1754ec: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1754ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1754f0:
    // 0x1754f0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1754f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1754f4:
    // 0x1754f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1754f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1754f8:
    // 0x1754f8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1754f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1754fc:
    // 0x1754fc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1754fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_175500:
    // 0x175500: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x175500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_175504:
    // 0x175504: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x175504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_175508:
    // 0x175508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17550c:
    // 0x17550c: 0xc05d45e  jal         func_175178
label_175510:
    if (ctx->pc == 0x175510u) {
        ctx->pc = 0x175510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17550Cu;
        // 0x175510: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x175514u;
        goto label_175514;
    }
    ctx->pc = 0x17550Cu;
    SET_GPR_U32(ctx, 31, 0x175514u);
    ctx->pc = 0x175510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17550Cu;
    // 0x175510: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x17550Cu, 0x175514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175514u;
label_175514:
    // 0x175514: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x175514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_175518:
    // 0x175518: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_17551c:
    if (ctx->pc == 0x17551Cu) {
        ctx->pc = 0x175520u;
        goto label_175520;
    }
    ctx->pc = 0x175518u;
    {
        const bool branch_taken_0x175518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175518) {
            ctx->pc = 0x17557Cu;
            goto label_17557c;
        }
    }
    ctx->pc = 0x175520u;
label_175520:
    // 0x175520: 0xc05dfae  jal         func_177EB8
label_175524:
    if (ctx->pc == 0x175524u) {
        ctx->pc = 0x175524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175520u;
        // 0x175524: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175528u;
        goto label_175528;
    }
    ctx->pc = 0x175520u;
    SET_GPR_U32(ctx, 31, 0x175528u);
    ctx->pc = 0x175524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175520u;
    // 0x175524: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177EB8u, 0x175520u, 0x175528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175528u;
label_175528:
    // 0x175528: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x175528u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17552c:
    // 0x17552c: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
label_175530:
    if (ctx->pc == 0x175530u) {
        ctx->pc = 0x175534u;
        goto label_175534;
    }
    ctx->pc = 0x17552Cu;
    {
        const bool branch_taken_0x17552c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x17552c) {
            ctx->pc = 0x17557Cu;
            goto label_17557c;
        }
    }
    ctx->pc = 0x175534u;
label_175534:
    // 0x175534: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x175534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_175538:
    // 0x175538: 0x84500060  lh          $s0, 0x60($v0)
    ctx->pc = 0x175538u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_17553c:
    // 0x17553c: 0x24510060  addiu       $s1, $v0, 0x60
    ctx->pc = 0x17553cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_175540:
    // 0x175540: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x175540u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_175544:
    // 0x175544: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x175544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_175548:
    // 0x175548: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x175548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_17554c:
    // 0x17554c: 0x60f809  jalr        $v1
label_175550:
    if (ctx->pc == 0x175550u) {
        ctx->pc = 0x175550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17554Cu;
        // 0x175550: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175554u;
        goto label_175554;
    }
    ctx->pc = 0x17554Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x175554u);
        ctx->pc = 0x175550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17554Cu;
        // 0x175550: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17554Cu, 0x175554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x175554u;
label_175554:
    // 0x175554: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x175554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_175558:
    // 0x175558: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x175558u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_17555c:
    // 0x17555c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x17555cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_175560:
    // 0x175560: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x175560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_175564:
    // 0x175564: 0x60f809  jalr        $v1
label_175568:
    if (ctx->pc == 0x175568u) {
        ctx->pc = 0x175568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175564u;
        // 0x175568: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17556Cu;
        goto label_17556c;
    }
    ctx->pc = 0x175564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17556Cu);
        ctx->pc = 0x175568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175564u;
        // 0x175568: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175564u, 0x17556Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17556Cu;
label_17556c:
    // 0x17556c: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x17556cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_175570:
    // 0x175570: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x175570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_175574:
    // 0x175574: 0x40f809  jalr        $v0
label_175578:
    if (ctx->pc == 0x175578u) {
        ctx->pc = 0x175578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175574u;
        // 0x175578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17557Cu;
        goto label_17557c;
    }
    ctx->pc = 0x175574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17557Cu);
        ctx->pc = 0x175578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175574u;
        // 0x175578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175574u, 0x17557Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17557Cu;
label_17557c:
    // 0x17557c: 0xc05d45e  jal         func_175178
label_175580:
    if (ctx->pc == 0x175580u) {
        ctx->pc = 0x175580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17557Cu;
        // 0x175580: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175584u;
        goto label_175584;
    }
    ctx->pc = 0x17557Cu;
    SET_GPR_U32(ctx, 31, 0x175584u);
    ctx->pc = 0x175580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17557Cu;
    // 0x175580: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x17557Cu, 0x175584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175584u;
label_175584:
    // 0x175584: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x175584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175588:
    // 0x175588: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_17558c:
    if (ctx->pc == 0x17558Cu) {
        ctx->pc = 0x17558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175588u;
        // 0x17558c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175590u;
        goto label_175590;
    }
    ctx->pc = 0x175588u;
    {
        const bool branch_taken_0x175588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175588u;
        // 0x17558c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175588) {
            ctx->pc = 0x1755B0u;
            goto label_1755b0;
        }
    }
    ctx->pc = 0x175590u;
label_175590:
    // 0x175590: 0x244202bc  addiu       $v0, $v0, 0x2BC
    ctx->pc = 0x175590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 700));
label_175594:
    // 0x175594: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x175594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_175598:
    // 0x175598: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x175598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_17559c:
    // 0x17559c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x17559cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1755a0:
    // 0x1755a0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1755a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1755a4:
    // 0x1755a4: 0x0  nop
    ctx->pc = 0x1755a4u;
    // NOP
label_1755a8:
    // 0x1755a8: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
label_1755ac:
    if (ctx->pc == 0x1755ACu) {
        ctx->pc = 0x1755ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755A8u;
        // 0x1755ac: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1755B0u;
        goto label_1755b0;
    }
    ctx->pc = 0x1755A8u;
    {
        const bool branch_taken_0x1755a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1755ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755A8u;
        // 0x1755ac: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755a8) {
            ctx->pc = 0x175598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175598;
        }
    }
    ctx->pc = 0x1755B0u;
label_1755b0:
    // 0x1755b0: 0xc05d45e  jal         func_175178
label_1755b4:
    if (ctx->pc == 0x1755B4u) {
        ctx->pc = 0x1755B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755B0u;
        // 0x1755b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1755B8u;
        goto label_1755b8;
    }
    ctx->pc = 0x1755B0u;
    SET_GPR_U32(ctx, 31, 0x1755B8u);
    ctx->pc = 0x1755B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1755B0u;
    // 0x1755b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x1755B0u, 0x1755B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1755B8u;
label_1755b8:
    // 0x1755b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1755b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1755bc:
    // 0x1755bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1755bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1755c0:
    // 0x1755c0: 0xc05d460  jal         func_175180
label_1755c4:
    if (ctx->pc == 0x1755C4u) {
        ctx->pc = 0x1755C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755C0u;
        // 0x1755c4: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1755C8u;
        goto label_1755c8;
    }
    ctx->pc = 0x1755C0u;
    SET_GPR_U32(ctx, 31, 0x1755C8u);
    ctx->pc = 0x1755C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1755C0u;
    // 0x1755c4: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175180u, 0x1755C0u, 0x1755C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1755C8u;
label_1755c8:
    // 0x1755c8: 0xae7402bc  sw          $s4, 0x2BC($s3)
    ctx->pc = 0x1755c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 700), GPR_U32(ctx, 20));
label_1755cc:
    // 0x1755cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1755ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1755d0:
    // 0x1755d0: 0x8e6202b8  lw          $v0, 0x2B8($s3)
    ctx->pc = 0x1755d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 696)));
label_1755d4:
    // 0x1755d4: 0x8c4500d4  lw          $a1, 0xD4($v0)
    ctx->pc = 0x1755d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1755d8:
    // 0x1755d8: 0x24a600c0  addiu       $a2, $a1, 0xC0
    ctx->pc = 0x1755d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
label_1755dc:
    // 0x1755dc: 0xc05d4b2  jal         func_1752C8
label_1755e0:
    if (ctx->pc == 0x1755E0u) {
        ctx->pc = 0x1755E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755DCu;
        // 0x1755e0: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1755E4u;
        goto label_1755e4;
    }
    ctx->pc = 0x1755DCu;
    SET_GPR_U32(ctx, 31, 0x1755E4u);
    ctx->pc = 0x1755E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1755DCu;
    // 0x1755e0: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1752C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1752C8u, 0x1755DCu, 0x1755E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1755E4u;
label_1755e4:
    // 0x1755e4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1755e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1755e8:
    // 0x1755e8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1755e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1755ec:
    // 0x1755ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1755ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1755f0:
    // 0x1755f0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1755f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1755f4:
    // 0x1755f4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1755f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1755f8:
    // 0x1755f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1755f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1755fc:
    // 0x1755fc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1755fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_175600:
    // 0x175600: 0x3e00008  jr          $ra
label_175604:
    if (ctx->pc == 0x175604u) {
        ctx->pc = 0x175604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175600u;
        // 0x175604: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175608u;
        goto label_175608;
    }
    ctx->pc = 0x175600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175600u;
        // 0x175604: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175608u;
label_175608:
    // 0x175608: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x175608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_17560c:
    // 0x17560c: 0x0  nop
    ctx->pc = 0x17560cu;
    // NOP
    ctx->pc = 0x175610u;
}
