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

// Function: sub_0049F718
// Address: 0x49f718 - 0x49f8c8
void sub_0049F718_0x49f718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F718_0x49f718");
#endif

    switch (ctx->pc) {
        case 0x49f764u: goto label_49f764;
        default: break;
    }

    ctx->pc = 0x49f718u;

    // 0x49f718: 0x24c2000f  addiu       $v0, $a2, 0xF
    ctx->pc = 0x49f718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x49f71c: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x49f71cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49f720: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x49f720u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x49f724: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49f724u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49f728: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x49f728u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49f72c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49f72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49f730: 0x8f898784  lw          $t1, -0x787C($gp)
    ctx->pc = 0x49f730u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x49f734: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x49f734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f738: 0x24a50009  addiu       $a1, $a1, 0x9
    ctx->pc = 0x49f738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9));
    // 0x49f73c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49f73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x49f740: 0x1314826  xor         $t1, $t1, $s1
    ctx->pc = 0x49f740u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 17));
    // 0x49f744: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x49f744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f748: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x49f748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x49f74c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49f74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49f750: 0x2465000c  addiu       $a1, $v1, 0xC
    ctx->pc = 0x49f750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x49f754: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x49f754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f758: 0x2463000d  addiu       $v1, $v1, 0xD
    ctx->pc = 0x49f758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13));
    // 0x49f75c: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x49F75Cu;
    SET_GPR_U32(ctx, 31, 0x49F764u);
    ctx->pc = 0x49F760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F75Cu;
    // 0x49f760: 0x69280b  movn        $a1, $v1, $t1 (Delay Slot)
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x49F75Cu, 0x49F764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F764u;
label_49f764:
    // 0x49f764: 0x8f87898c  lw          $a3, -0x7674($gp)
    ctx->pc = 0x49f764u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x49f768: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x49f768u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
    // 0x49f76c: 0x24c3f730  addiu       $v1, $a2, -0x8D0
    ctx->pc = 0x49f76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965040));
    // 0x49f770: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x49f770u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F730u));
    // 0x49f774: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x49f774u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x49f778: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x49f778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x49f77c: 0xaf87898c  sw          $a3, -0x7674($gp)
    ctx->pc = 0x49f77cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 7));
    // 0x49f780: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x49f780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x49f784: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x49f784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x49f788: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x49f788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x49f78c: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x49f78cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x49f790: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x49f790u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x49f794: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x49f794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x49f798: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x49f798u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x49f79c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x49f79cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x49f7a0: 0x2463f8c0  addiu       $v1, $v1, -0x740
    ctx->pc = 0x49f7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965440));
    // 0x49f7a4: 0x24e40020  addiu       $a0, $a3, 0x20
    ctx->pc = 0x49f7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x49f7a8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x49f7a8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F8C0u));
    // 0x49f7ac: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x49f7acu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
    // 0x49f7b0: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x49f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
    // 0x49f7b4: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x49f7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x49f7b8: 0x2463f8e0  addiu       $v1, $v1, -0x720
    ctx->pc = 0x49f7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965472));
    // 0x49f7bc: 0x24e40030  addiu       $a0, $a3, 0x30
    ctx->pc = 0x49f7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x49f7c0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x49f7c0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F8E0u));
    // 0x49f7c4: 0x7ce20020  sq          $v0, 0x20($a3)
    ctx->pc = 0x49f7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 2));
    // 0x49f7c8: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x49f7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
    // 0x49f7cc: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x49f7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
    // 0x49f7d0: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x49f7d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x49f7d4: 0xdf828730  ld          $v0, -0x78D0($gp)
    ctx->pc = 0x49f7d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x49f7d8: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x49f7d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x49f7dc: 0x8ca4f754  lw          $a0, -0x8AC($a1)
    ctx->pc = 0x49f7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294965076)));
    // 0x49f7e0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x49f7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x49f7e4: 0x3c03fc00  lui         $v1, 0xFC00
    ctx->pc = 0x49f7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64512 << 16));
    // 0x49f7e8: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x49f7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x49f7ec: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x49f7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x49f7f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x49f7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x49f7f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x49f7f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x49f7f8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x49f7f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x49f7fc: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x49f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x49f800: 0x24a3f754  addiu       $v1, $a1, -0x8AC
    ctx->pc = 0x49f800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965076));
    // 0x49f804: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x49f804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x49f808: 0xaca4f754  sw          $a0, -0x8AC($a1)
    ctx->pc = 0x49f808u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294965076), GPR_U32(ctx, 4));
    // 0x49f80c: 0x7862fffc  lq          $v0, -0x4($v1)
    ctx->pc = 0x49f80cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x49f810: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x49f810u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
    // 0x49f814: 0x24e30040  addiu       $v1, $a3, 0x40
    ctx->pc = 0x49f814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x49f818: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x49f818u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x49f81c: 0xdf828730  ld          $v0, -0x78D0($gp)
    ctx->pc = 0x49f81cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x49f820: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x49f820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x49f824: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49F824u;
    {
        const bool branch_taken_0x49f824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F824u;
        // 0x49f828: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f824) {
            ctx->pc = 0x49F838u;
            goto label_49f838;
        }
    }
    ctx->pc = 0x49F82Cu;
    // 0x49f82c: 0x24e40050  addiu       $a0, $a3, 0x50
    ctx->pc = 0x49f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x49f830: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x49F830u;
    {
        const bool branch_taken_0x49f830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F830u;
        // 0x49f834: 0x2442f8b0  addiu       $v0, $v0, -0x750 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f830) {
            ctx->pc = 0x49F848u;
            goto label_49f848;
        }
    }
    ctx->pc = 0x49F838u;
label_49f838:
    // 0x49f838: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x49f838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x49f83c: 0x24e40050  addiu       $a0, $a3, 0x50
    ctx->pc = 0x49f83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x49f840: 0x2442f8a0  addiu       $v0, $v0, -0x760
    ctx->pc = 0x49f840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965408));
    // 0x49f844: 0x0  nop
    ctx->pc = 0x49f844u;
    // NOP
label_49f848:
    // 0x49f848: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x49f848u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49f84c: 0x7ce30040  sq          $v1, 0x40($a3)
    ctx->pc = 0x49f84cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 64), GPR_VEC(ctx, 3));
    // 0x49f850: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x49f850u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
    // 0x49f854: 0x24c3f730  addiu       $v1, $a2, -0x8D0
    ctx->pc = 0x49f854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965040));
    // 0x49f858: 0x8f85898c  lw          $a1, -0x7674($gp)
    ctx->pc = 0x49f858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x49f85c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x49f85cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49f860: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x49f860u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x49f864: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x49f864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x49f868: 0xaf85898c  sw          $a1, -0x7674($gp)
    ctx->pc = 0x49f868u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 5));
    // 0x49f86c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x49f86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x49f870: 0x2463f870  addiu       $v1, $v1, -0x790
    ctx->pc = 0x49f870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965360));
    // 0x49f874: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x49f874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x49f878: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x49f878u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F870u));
    // 0x49f87c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x49f87cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x49f880: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x49f880u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
    // 0x49f884: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x49f884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x49f888: 0x10510009  beq         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x49F888u;
    {
        const bool branch_taken_0x49f888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x49F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F888u;
        // 0x49f88c: 0x11203c  dsll32      $a0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f888) {
            ctx->pc = 0x49F8B0u;
            goto label_49f8b0;
        }
    }
    ctx->pc = 0x49F890u;
    // 0x49f890: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x49f890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x49f894: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x49f894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x49f898: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x49f898u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f89c: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x49f89cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x49f8a0: 0x7ca40010  sq          $a0, 0x10($a1)
    ctx->pc = 0x49f8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 4));
    // 0x49f8a4: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x49f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x49f8a8: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x49f8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x49f8ac: 0xaf918784  sw          $s1, -0x787C($gp)
    ctx->pc = 0x49f8acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936452), GPR_U32(ctx, 17));
label_49f8b0:
    // 0x49f8b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x49f8b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49f8b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49f8b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49f8b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49f8bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49f8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49f8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x49F8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F8C0u;
        // 0x49f8c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F8C8u;
}
