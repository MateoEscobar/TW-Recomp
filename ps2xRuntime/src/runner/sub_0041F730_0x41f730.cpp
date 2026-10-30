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

// Function: sub_0041F730
// Address: 0x41f730 - 0x41f848
void sub_0041F730_0x41f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041F730_0x41f730");
#endif

    switch (ctx->pc) {
        case 0x41f760u: goto label_41f760;
        case 0x41f768u: goto label_41f768;
        default: break;
    }

    ctx->pc = 0x41f730u;

    // 0x41f730: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x41f730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x41f734: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x41f734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x41f738: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41f738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f73c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x41f73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x41f740: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x41f740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x41f744: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x41f744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x41f748: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x41f748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x41f74c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x41f74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x41f750: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x41f750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x41f754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41f754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x41f758: 0xc10f130  jal         func_43C4C0
    ctx->pc = 0x41F758u;
    SET_GPR_U32(ctx, 31, 0x41F760u);
    ctx->pc = 0x41F75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F758u;
    // 0x41f75c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43C4C0u, 0x41F758u, 0x41F760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F760u;
label_41f760:
    // 0x41f760: 0xc13d90a  jal         func_4F6428
    ctx->pc = 0x41F760u;
    SET_GPR_U32(ctx, 31, 0x41F768u);
    ctx->pc = 0x41F764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F760u;
    // 0x41f764: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F6428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F6428u, 0x41F760u, 0x41F768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F768u;
label_41f768:
    // 0x41f768: 0x93ac0003  lbu         $t4, 0x3($sp)
    ctx->pc = 0x41f768u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x41f76c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x41f76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x41f770: 0x93aa0002  lbu         $t2, 0x2($sp)
    ctx->pc = 0x41f770u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x41f774: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41f774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f778: 0x93a90001  lbu         $t1, 0x1($sp)
    ctx->pc = 0x41f778u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x41f77c: 0xc7902  srl         $t7, $t4, 4
    ctx->pc = 0x41f77cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 12), 4));
    // 0x41f780: 0x93a80005  lbu         $t0, 0x5($sp)
    ctx->pc = 0x41f780u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x41f784: 0xa7102  srl         $t6, $t2, 4
    ctx->pc = 0x41f784u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 10), 4));
    // 0x41f788: 0x93a50006  lbu         $a1, 0x6($sp)
    ctx->pc = 0x41f788u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x41f78c: 0x96902  srl         $t5, $t1, 4
    ctx->pc = 0x41f78cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 9), 4));
    // 0x41f790: 0x93a40007  lbu         $a0, 0x7($sp)
    ctx->pc = 0x41f790u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
    // 0x41f794: 0x85902  srl         $t3, $t0, 4
    ctx->pc = 0x41f794u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 8), 4));
    // 0x41f798: 0x53102  srl         $a2, $a1, 4
    ctx->pc = 0x41f798u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x41f79c: 0x1e37818  mult        $t7, $t7, $v1
    ctx->pc = 0x41f79cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x41f7a0: 0x43902  srl         $a3, $a0, 4
    ctx->pc = 0x41f7a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x41f7a4: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x41f7a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x41f7a8: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x41f7a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x41f7ac: 0x318c000f  andi        $t4, $t4, 0xF
    ctx->pc = 0x41f7acu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)15);
    // 0x41f7b0: 0x1a36818  mult        $t5, $t5, $v1
    ctx->pc = 0x41f7b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x41f7b4: 0x314a000f  andi        $t2, $t2, 0xF
    ctx->pc = 0x41f7b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
    // 0x41f7b8: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x41f7b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x41f7bc: 0x3129000f  andi        $t1, $t1, 0xF
    ctx->pc = 0x41f7bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x41f7c0: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x41f7c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x41f7c4: 0x3108000f  andi        $t0, $t0, 0xF
    ctx->pc = 0x41f7c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x41f7c8: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x41f7c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x41f7cc: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x41f7ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x41f7d0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x41f7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x41f7d4: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x41f7d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x41f7d8: 0x14e5021  addu        $t2, $t2, $t6
    ctx->pc = 0x41f7d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x41f7dc: 0x12d4821  addu        $t1, $t1, $t5
    ctx->pc = 0x41f7dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x41f7e0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x41f7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x41f7e4: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x41f7e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x41f7e8: 0xa3ac0010  sb          $t4, 0x10($sp)
    ctx->pc = 0x41f7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 12));
    // 0x41f7ec: 0xa3aa0011  sb          $t2, 0x11($sp)
    ctx->pc = 0x41f7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 10));
    // 0x41f7f0: 0xa3a90012  sb          $t1, 0x12($sp)
    ctx->pc = 0x41f7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 9));
    // 0x41f7f4: 0xa3a80013  sb          $t0, 0x13($sp)
    ctx->pc = 0x41f7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 8));
    // 0x41f7f8: 0xa3a50014  sb          $a1, 0x14($sp)
    ctx->pc = 0x41f7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 5));
    // 0x41f7fc: 0xa3a40015  sb          $a0, 0x15($sp)
    ctx->pc = 0x41f7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 21), (uint8_t)GPR_U32(ctx, 4));
    // 0x41f800: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x41f800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x41f804: 0x8ba30013  lwl         $v1, 0x13($sp)
    ctx->pc = 0x41f804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x41f808: 0x9ba30010  lwr         $v1, 0x10($sp)
    ctx->pc = 0x41f808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x41f80c: 0x83a40014  lb          $a0, 0x14($sp)
    ctx->pc = 0x41f80cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x41f810: 0x83a50015  lb          $a1, 0x15($sp)
    ctx->pc = 0x41f810u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 21)));
    // 0x41f814: 0xaa030003  swl         $v1, 0x3($s0)
    ctx->pc = 0x41f814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x41f818: 0xba030000  swr         $v1, 0x0($s0)
    ctx->pc = 0x41f818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x41f81c: 0xa2040004  sb          $a0, 0x4($s0)
    ctx->pc = 0x41f81cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x41f820: 0xa2050005  sb          $a1, 0x5($s0)
    ctx->pc = 0x41f820u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 5));
    // 0x41f824: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x41f824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x41f828: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x41f828u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x41f82c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x41f82cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x41f830: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x41f830u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x41f834: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x41f834u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x41f838: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x41f838u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41f83c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41f83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41f840: 0x3e00008  jr          $ra
    ctx->pc = 0x41F840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F840u;
        // 0x41f844: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41F848u;
}
