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

// Function: sub_001886D8
// Address: 0x1886d8 - 0x1887b8
void sub_001886D8_0x1886d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001886D8_0x1886d8");
#endif

    switch (ctx->pc) {
        case 0x1886d8u: goto label_1886d8;
        case 0x1886dcu: goto label_1886dc;
        case 0x1886e0u: goto label_1886e0;
        case 0x1886e4u: goto label_1886e4;
        case 0x1886e8u: goto label_1886e8;
        case 0x1886ecu: goto label_1886ec;
        case 0x1886f0u: goto label_1886f0;
        case 0x1886f4u: goto label_1886f4;
        case 0x1886f8u: goto label_1886f8;
        case 0x1886fcu: goto label_1886fc;
        case 0x188700u: goto label_188700;
        case 0x188704u: goto label_188704;
        case 0x188708u: goto label_188708;
        case 0x18870cu: goto label_18870c;
        case 0x188710u: goto label_188710;
        case 0x188714u: goto label_188714;
        case 0x188718u: goto label_188718;
        case 0x18871cu: goto label_18871c;
        case 0x188720u: goto label_188720;
        case 0x188724u: goto label_188724;
        case 0x188728u: goto label_188728;
        case 0x18872cu: goto label_18872c;
        case 0x188730u: goto label_188730;
        case 0x188734u: goto label_188734;
        case 0x188738u: goto label_188738;
        case 0x18873cu: goto label_18873c;
        case 0x188740u: goto label_188740;
        case 0x188744u: goto label_188744;
        case 0x188748u: goto label_188748;
        case 0x18874cu: goto label_18874c;
        case 0x188750u: goto label_188750;
        case 0x188754u: goto label_188754;
        case 0x188758u: goto label_188758;
        case 0x18875cu: goto label_18875c;
        case 0x188760u: goto label_188760;
        case 0x188764u: goto label_188764;
        case 0x188768u: goto label_188768;
        case 0x18876cu: goto label_18876c;
        case 0x188770u: goto label_188770;
        case 0x188774u: goto label_188774;
        case 0x188778u: goto label_188778;
        case 0x18877cu: goto label_18877c;
        case 0x188780u: goto label_188780;
        case 0x188784u: goto label_188784;
        case 0x188788u: goto label_188788;
        case 0x18878cu: goto label_18878c;
        case 0x188790u: goto label_188790;
        case 0x188794u: goto label_188794;
        case 0x188798u: goto label_188798;
        case 0x18879cu: goto label_18879c;
        case 0x1887a0u: goto label_1887a0;
        case 0x1887a4u: goto label_1887a4;
        case 0x1887a8u: goto label_1887a8;
        case 0x1887acu: goto label_1887ac;
        case 0x1887b0u: goto label_1887b0;
        case 0x1887b4u: goto label_1887b4;
        default: break;
    }

    ctx->pc = 0x1886d8u;

label_1886d8:
    // 0x1886d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1886d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1886dc:
    // 0x1886dc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1886dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1886e0:
    // 0x1886e0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1886e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1886e4:
    // 0x1886e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1886e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1886e8:
    // 0x1886e8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1886e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1886ec:
    // 0x1886ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1886ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1886f0:
    // 0x1886f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1886f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1886f4:
    // 0x1886f4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1886f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1886f8:
    // 0x1886f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1886f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1886fc:
    // 0x1886fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1886fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_188700:
    // 0x188700: 0xc061e6e  jal         func_1879B8
label_188704:
    if (ctx->pc == 0x188704u) {
        ctx->pc = 0x188704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188700u;
        // 0x188704: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188708u;
        goto label_188708;
    }
    ctx->pc = 0x188700u;
    SET_GPR_U32(ctx, 31, 0x188708u);
    ctx->pc = 0x188704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188700u;
    // 0x188704: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x188700u, 0x188708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188708u;
label_188708:
    // 0x188708: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18870c:
    // 0x18870c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x18870cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_188710:
    // 0x188710: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x188710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_188714:
    // 0x188714: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x188714u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_188718:
    // 0x188718: 0x8c67007c  lw          $a3, 0x7C($v1)
    ctx->pc = 0x188718u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_18871c:
    // 0x18871c: 0xe0f809  jalr        $a3
label_188720:
    if (ctx->pc == 0x188720u) {
        ctx->pc = 0x188720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18871Cu;
        // 0x188720: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188724u;
        goto label_188724;
    }
    ctx->pc = 0x18871Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x188724u);
        ctx->pc = 0x188720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18871Cu;
        // 0x188720: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18871Cu, 0x188724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188724u;
label_188724:
    // 0x188724: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x188724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_188728:
    // 0x188728: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x188728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18872c:
    // 0x18872c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x18872cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_188730:
    // 0x188730: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x188730u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_188734:
    // 0x188734: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
label_188738:
    if (ctx->pc == 0x188738u) {
        ctx->pc = 0x188738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188734u;
        // 0x188738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18873Cu;
        goto label_18873c;
    }
    ctx->pc = 0x188734u;
    {
        const bool branch_taken_0x188734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x188738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188734u;
        // 0x188738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188734) {
            ctx->pc = 0x18879Cu;
            goto label_18879c;
        }
    }
    ctx->pc = 0x18873Cu;
label_18873c:
    // 0x18873c: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x18873cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
label_188740:
    // 0x188740: 0x26040c18  addiu       $a0, $s0, 0xC18
    ctx->pc = 0x188740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3096));
label_188744:
    // 0x188744: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x188744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
label_188748:
    // 0x188748: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x188748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_18874c:
    // 0x18874c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x18874cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_188750:
    // 0x188750: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x188750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_188754:
    // 0x188754: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x188754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_188758:
    // 0x188758: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_18875c:
    if (ctx->pc == 0x18875Cu) {
        ctx->pc = 0x188760u;
        goto label_188760;
    }
    ctx->pc = 0x188758u;
    {
        const bool branch_taken_0x188758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x188758) {
            ctx->pc = 0x188790u;
            goto label_188790;
        }
    }
    ctx->pc = 0x188760u;
label_188760:
    // 0x188760: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_188764:
    if (ctx->pc == 0x188764u) {
        ctx->pc = 0x188764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188760u;
        // 0x188764: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188768u;
        goto label_188768;
    }
    ctx->pc = 0x188760u;
    {
        const bool branch_taken_0x188760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188760) {
            ctx->pc = 0x188764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188760u;
            // 0x188764: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188784u;
            goto label_188784;
        }
    }
    ctx->pc = 0x188768u;
label_188768:
    // 0x188768: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x188768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_18876c:
    // 0x18876c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x18876cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_188770:
    // 0x188770: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x188770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_188774:
    // 0x188774: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x188774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_188778:
    // 0x188778: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x188778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18877c:
    // 0x18877c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x18877cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_188780:
    // 0x188780: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x188780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_188784:
    // 0x188784: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x188784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_188788:
    // 0x188788: 0x10000003  b           . + 4 + (0x3 << 2)
label_18878c:
    if (ctx->pc == 0x18878Cu) {
        ctx->pc = 0x18878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188788u;
        // 0x18878c: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188790u;
        goto label_188790;
    }
    ctx->pc = 0x188788u;
    {
        const bool branch_taken_0x188788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188788u;
        // 0x18878c: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188788) {
            ctx->pc = 0x188798u;
            goto label_188798;
        }
    }
    ctx->pc = 0x188790u;
label_188790:
    // 0x188790: 0xc138c70  jal         func_4E31C0
label_188794:
    if (ctx->pc == 0x188794u) {
        ctx->pc = 0x188794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188790u;
        // 0x188794: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188798u;
        goto label_188798;
    }
    ctx->pc = 0x188790u;
    SET_GPR_U32(ctx, 31, 0x188798u);
    ctx->pc = 0x188794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188790u;
    // 0x188794: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E31C0u, 0x188790u, 0x188798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188798u;
label_188798:
    // 0x188798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18879c:
    // 0x18879c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x18879cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1887a0:
    // 0x1887a0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1887a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1887a4:
    // 0x1887a4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1887a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1887a8:
    // 0x1887a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1887a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1887ac:
    // 0x1887ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1887acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1887b0:
    // 0x1887b0: 0x3e00008  jr          $ra
label_1887b4:
    if (ctx->pc == 0x1887B4u) {
        ctx->pc = 0x1887B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1887B0u;
        // 0x1887b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1887B8u;
        goto label_fallthrough_0x1887b0;
    }
    ctx->pc = 0x1887B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1887B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1887B0u;
        // 0x1887b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1887B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1887b0:
    ctx->pc = 0x1887B8u;
}
