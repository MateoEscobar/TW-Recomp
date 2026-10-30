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

// Function: sub_001C7730
// Address: 0x1c7730 - 0x1c7860
void sub_001C7730_0x1c7730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7730_0x1c7730");
#endif

    switch (ctx->pc) {
        case 0x1c77b4u: goto label_1c77b4;
        case 0x1c77e0u: goto label_1c77e0;
        default: break;
    }

    ctx->pc = 0x1c7730u;

    // 0x1c7730: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c7730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c7734: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c7734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c7738: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c7738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c773c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1c773cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1c7740: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1c7740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1c7744: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c7744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7748: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1c7748u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c774c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1c774cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1c7750: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1c7750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1c7754: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1c7754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7758: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c7758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c775c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c775cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7760: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1c7760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1c7764: 0x26150040  addiu       $s5, $s0, 0x40
    ctx->pc = 0x1c7764u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1c7768: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1c7768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x1c776c: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x1c776cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7770: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1c7770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x1c7774: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1c7774u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7778: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1c7778u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c777c: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x1c777cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7780: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1c7780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1c7784: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1c7784u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1c7788: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c7788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c778c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c778cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7790: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c7790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c7794: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c7794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7798: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c7798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c779c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1c779cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c77a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77a4: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1c77a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c77a8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c77a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77ac: 0xc06e424  jal         func_1B9090
    ctx->pc = 0x1C77ACu;
    SET_GPR_U32(ctx, 31, 0x1C77B4u);
    ctx->pc = 0x1C77B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77ACu;
    // 0x1c77b0: 0x26110230  addiu       $s1, $s0, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1C77ACu, 0x1C77B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77B4u;
label_1c77b4:
    // 0x1c77b4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1c77b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c77b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c77bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c77bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c77c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77c4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1c77c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1c77c8: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x1c77c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77cc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1c77ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77d0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c77d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77d4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1c77d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77d8: 0xc073418  jal         func_1CD060
    ctx->pc = 0x1C77D8u;
    SET_GPR_U32(ctx, 31, 0x1C77E0u);
    ctx->pc = 0x1C77DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77D8u;
    // 0x1c77dc: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD060u, 0x1C77D8u, 0x1C77E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77E0u;
label_1c77e0:
    // 0x1c77e0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1c77e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c77e4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1c77e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c77e8: 0xa2a2018c  sb          $v0, 0x18C($s5)
    ctx->pc = 0x1c77e8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 396), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c77ec: 0xa22200c4  sb          $v0, 0xC4($s1)
    ctx->pc = 0x1c77ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 196), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c77f0: 0xae1e0360  sw          $fp, 0x360($s0)
    ctx->pc = 0x1c77f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 30));
    // 0x1c77f4: 0xae000368  sw          $zero, 0x368($s0)
    ctx->pc = 0x1c77f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 0));
    // 0x1c77f8: 0xae00036c  sw          $zero, 0x36C($s0)
    ctx->pc = 0x1c77f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
    // 0x1c77fc: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x1c77fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
    // 0x1c7800: 0xae000370  sw          $zero, 0x370($s0)
    ctx->pc = 0x1c7800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 0));
    // 0x1c7804: 0xae000374  sw          $zero, 0x374($s0)
    ctx->pc = 0x1c7804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 884), GPR_U32(ctx, 0));
    // 0x1c7808: 0xae000378  sw          $zero, 0x378($s0)
    ctx->pc = 0x1c7808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 888), GPR_U32(ctx, 0));
    // 0x1c780c: 0x6ae20007  ldl         $v0, 0x7($s7)
    ctx->pc = 0x1c780cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1c7810: 0x6ee20000  ldr         $v0, 0x0($s7)
    ctx->pc = 0x1c7810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1c7814: 0x6ae3000f  ldl         $v1, 0xF($s7)
    ctx->pc = 0x1c7814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1c7818: 0x6ee30008  ldr         $v1, 0x8($s7)
    ctx->pc = 0x1c7818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1c781c: 0xb2020383  sdl         $v0, 0x383($s0)
    ctx->pc = 0x1c781cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 899); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7820: 0xb602037c  sdr         $v0, 0x37C($s0)
    ctx->pc = 0x1c7820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 892); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7824: 0xb203038b  sdl         $v1, 0x38B($s0)
    ctx->pc = 0x1c7824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 907); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c7828: 0xb6030384  sdr         $v1, 0x384($s0)
    ctx->pc = 0x1c7828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 900); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c782c: 0xae13038c  sw          $s3, 0x38C($s0)
    ctx->pc = 0x1c782cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 908), GPR_U32(ctx, 19));
    // 0x1c7830: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1c7830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c7834: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1c7834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c7838: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1c7838u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c783c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1c783cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c7840: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c7840u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c7844: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1c7844u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c7848: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1c7848u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c784c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1c784cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c7850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7854: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7854u;
        // 0x1c7858: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C785Cu;
    // 0x1c785c: 0x0  nop
    ctx->pc = 0x1c785cu;
    // NOP
    ctx->pc = 0x1c7860u;
}
