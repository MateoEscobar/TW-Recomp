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

// Function: sub_0046C6C0
// Address: 0x46c6c0 - 0x46c7a8
void sub_0046C6C0_0x46c6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C6C0_0x46c6c0");
#endif

    switch (ctx->pc) {
        case 0x46c6c0u: goto label_46c6c0;
        case 0x46c6c4u: goto label_46c6c4;
        case 0x46c6c8u: goto label_46c6c8;
        case 0x46c6ccu: goto label_46c6cc;
        case 0x46c6d0u: goto label_46c6d0;
        case 0x46c6d4u: goto label_46c6d4;
        case 0x46c6d8u: goto label_46c6d8;
        case 0x46c6dcu: goto label_46c6dc;
        case 0x46c6e0u: goto label_46c6e0;
        case 0x46c6e4u: goto label_46c6e4;
        case 0x46c6e8u: goto label_46c6e8;
        case 0x46c6ecu: goto label_46c6ec;
        case 0x46c6f0u: goto label_46c6f0;
        case 0x46c6f4u: goto label_46c6f4;
        case 0x46c6f8u: goto label_46c6f8;
        case 0x46c6fcu: goto label_46c6fc;
        case 0x46c700u: goto label_46c700;
        case 0x46c704u: goto label_46c704;
        case 0x46c708u: goto label_46c708;
        case 0x46c70cu: goto label_46c70c;
        case 0x46c710u: goto label_46c710;
        case 0x46c714u: goto label_46c714;
        case 0x46c718u: goto label_46c718;
        case 0x46c71cu: goto label_46c71c;
        case 0x46c720u: goto label_46c720;
        case 0x46c724u: goto label_46c724;
        case 0x46c728u: goto label_46c728;
        case 0x46c72cu: goto label_46c72c;
        case 0x46c730u: goto label_46c730;
        case 0x46c734u: goto label_46c734;
        case 0x46c738u: goto label_46c738;
        case 0x46c73cu: goto label_46c73c;
        case 0x46c740u: goto label_46c740;
        case 0x46c744u: goto label_46c744;
        case 0x46c748u: goto label_46c748;
        case 0x46c74cu: goto label_46c74c;
        case 0x46c750u: goto label_46c750;
        case 0x46c754u: goto label_46c754;
        case 0x46c758u: goto label_46c758;
        case 0x46c75cu: goto label_46c75c;
        case 0x46c760u: goto label_46c760;
        case 0x46c764u: goto label_46c764;
        case 0x46c768u: goto label_46c768;
        case 0x46c76cu: goto label_46c76c;
        case 0x46c770u: goto label_46c770;
        case 0x46c774u: goto label_46c774;
        case 0x46c778u: goto label_46c778;
        case 0x46c77cu: goto label_46c77c;
        case 0x46c780u: goto label_46c780;
        case 0x46c784u: goto label_46c784;
        case 0x46c788u: goto label_46c788;
        case 0x46c78cu: goto label_46c78c;
        case 0x46c790u: goto label_46c790;
        case 0x46c794u: goto label_46c794;
        case 0x46c798u: goto label_46c798;
        case 0x46c79cu: goto label_46c79c;
        case 0x46c7a0u: goto label_46c7a0;
        case 0x46c7a4u: goto label_46c7a4;
        default: break;
    }

    ctx->pc = 0x46c6c0u;

label_46c6c0:
    // 0x46c6c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46c6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_46c6c4:
    // 0x46c6c4: 0x8f8388d0  lw          $v1, -0x7730($gp)
    ctx->pc = 0x46c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936784)));
label_46c6c8:
    // 0x46c6c8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x46c6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_46c6cc:
    // 0x46c6cc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x46c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_46c6d0:
    // 0x46c6d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x46c6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_46c6d4:
    // 0x46c6d4: 0x2452ad18  addiu       $s2, $v0, -0x52E8
    ctx->pc = 0x46c6d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_46c6d8:
    // 0x46c6d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x46c6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_46c6dc:
    // 0x46c6dc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x46c6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_46c6e0:
    // 0x46c6e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46c6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_46c6e4:
    // 0x46c6e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x46c6e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46c6e8:
    // 0x46c6e8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46c6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_46c6ec:
    // 0x46c6ec: 0x8e420118  lw          $v0, 0x118($s2)
    ctx->pc = 0x46c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_46c6f0:
    // 0x46c6f0: 0x34a50012  ori         $a1, $a1, 0x12
    ctx->pc = 0x46c6f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)18);
label_46c6f4:
    // 0x46c6f4: 0x40f809  jalr        $v0
label_46c6f8:
    if (ctx->pc == 0x46C6F8u) {
        ctx->pc = 0x46C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C6F4u;
        // 0x46c6f8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46C6FCu;
        goto label_46c6fc;
    }
    ctx->pc = 0x46C6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46C6FCu);
        ctx->pc = 0x46C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C6F4u;
        // 0x46c6f8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C6F4u, 0x46C6FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46C6FCu;
label_46c6fc:
    // 0x46c6fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46c6fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46c700:
    // 0x46c700: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_46c704:
    if (ctx->pc == 0x46C704u) {
        ctx->pc = 0x46C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C700u;
        // 0x46c704: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46C708u;
        goto label_46c708;
    }
    ctx->pc = 0x46C700u;
    {
        const bool branch_taken_0x46c700 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C700u;
        // 0x46c704: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c700) {
            ctx->pc = 0x46C788u;
            goto label_46c788;
        }
    }
    ctx->pc = 0x46C708u;
label_46c708:
    // 0x46c708: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x46c708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_46c70c:
    // 0x46c70c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x46c70cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46c710:
    // 0x46c710: 0x2442c978  addiu       $v0, $v0, -0x3688
    ctx->pc = 0x46c710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953336));
label_46c714:
    // 0x46c714: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x46c714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_46c718:
    // 0x46c718: 0x2606002c  addiu       $a2, $s0, 0x2C
    ctx->pc = 0x46c718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_46c71c:
    // 0x46c71c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46c71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46c720:
    // 0x46c720: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x46c720u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_46c724:
    // 0x46c724: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x46c724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_46c728:
    // 0x46c728: 0xa2110001  sb          $s1, 0x1($s0)
    ctx->pc = 0x46c728u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
label_46c72c:
    // 0x46c72c: 0x2484e6f8  addiu       $a0, $a0, -0x1908
    ctx->pc = 0x46c72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960888));
label_46c730:
    // 0x46c730: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x46c730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_46c734:
    // 0x46c734: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46c734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46c738:
    // 0x46c738: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x46c738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_46c73c:
    // 0x46c73c: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x46c73cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
label_46c740:
    // 0x46c740: 0xae060030  sw          $a2, 0x30($s0)
    ctx->pc = 0x46c740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 6));
label_46c744:
    // 0x46c744: 0xa2070000  sb          $a3, 0x0($s0)
    ctx->pc = 0x46c744u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 7));
label_46c748:
    // 0x46c748: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x46c748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_46c74c:
    // 0x46c74c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x46c74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_46c750:
    // 0x46c750: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x46c750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_46c754:
    // 0x46c754: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x46c754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_46c758:
    // 0x46c758: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x46c758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_46c75c:
    // 0x46c75c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x46c75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_46c760:
    // 0x46c760: 0xae06002c  sw          $a2, 0x2C($s0)
    ctx->pc = 0x46c760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 6));
label_46c764:
    // 0x46c764: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x46c764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_46c768:
    // 0x46c768: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x46c768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_46c76c:
    // 0x46c76c: 0x9642000a  lhu         $v0, 0xA($s2)
    ctx->pc = 0x46c76cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_46c770:
    // 0x46c770: 0xa2070002  sb          $a3, 0x2($s0)
    ctx->pc = 0x46c770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 7));
label_46c774:
    // 0x46c774: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46c774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_46c778:
    // 0x46c778: 0xc11ff8e  jal         func_47FE38
label_46c77c:
    if (ctx->pc == 0x46C77Cu) {
        ctx->pc = 0x46C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C778u;
        // 0x46c77c: 0xa602003c  sh          $v0, 0x3C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 60), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46C780u;
        goto label_46c780;
    }
    ctx->pc = 0x46C778u;
    SET_GPR_U32(ctx, 31, 0x46C780u);
    ctx->pc = 0x46C77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46C778u;
    // 0x46c77c: 0xa602003c  sh          $v0, 0x3C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 60), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FE38u, 0x46C778u, 0x46C780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C780u;
label_46c780:
    // 0x46c780: 0x10000003  b           . + 4 + (0x3 << 2)
label_46c784:
    if (ctx->pc == 0x46C784u) {
        ctx->pc = 0x46C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C780u;
        // 0x46c784: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46C788u;
        goto label_46c788;
    }
    ctx->pc = 0x46C780u;
    {
        const bool branch_taken_0x46c780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C780u;
        // 0x46c784: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c780) {
            ctx->pc = 0x46C790u;
            goto label_46c790;
        }
    }
    ctx->pc = 0x46C788u;
label_46c788:
    // 0x46c788: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46c788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46c78c:
    // 0x46c78c: 0x0  nop
    ctx->pc = 0x46c78cu;
    // NOP
label_46c790:
    // 0x46c790: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x46c790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46c794:
    // 0x46c794: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x46c794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46c798:
    // 0x46c798: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x46c798u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46c79c:
    // 0x46c79c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46c79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_46c7a0:
    // 0x46c7a0: 0x3e00008  jr          $ra
label_46c7a4:
    if (ctx->pc == 0x46C7A4u) {
        ctx->pc = 0x46C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C7A0u;
        // 0x46c7a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46C7A8u;
        goto label_fallthrough_0x46c7a0;
    }
    ctx->pc = 0x46C7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C7A0u;
        // 0x46c7a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x46c7a0:
    ctx->pc = 0x46C7A8u;
}
