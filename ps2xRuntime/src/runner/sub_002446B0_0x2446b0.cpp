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

// Function: sub_002446B0
// Address: 0x2446b0 - 0x244770
void sub_002446B0_0x2446b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002446B0_0x2446b0");
#endif

    ctx->pc = 0x2446b0u;

    // 0x2446b0: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2446b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x2446b4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2446b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2446b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2446b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2446bc: 0x2444c778  addiu       $a0, $v0, -0x3888
    ctx->pc = 0x2446bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952824));
    // 0x2446c0: 0x84c301be  lh          $v1, 0x1BE($a2)
    ctx->pc = 0x2446c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 446)));
    // 0x2446c4: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x2446c4u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x55C77Au));
    // 0x2446c8: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2446C8u;
    {
        const bool branch_taken_0x2446c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2446CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446C8u;
        // 0x2446cc: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2446c8) {
            ctx->pc = 0x2446FCu;
            goto label_2446fc;
        }
    }
    ctx->pc = 0x2446D0u;
    // 0x2446d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2446d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2446d4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2446D4u;
    {
        const bool branch_taken_0x2446d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2446D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446D4u;
        // 0x2446d8: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2446d4) {
            ctx->pc = 0x2446ECu;
            goto label_2446ec;
        }
    }
    ctx->pc = 0x2446DCu;
    // 0x2446dc: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x2446dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2446e0: 0x84c201c0  lh          $v0, 0x1C0($a2)
    ctx->pc = 0x2446e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 448)));
    // 0x2446e4: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2446E4u;
    {
        const bool branch_taken_0x2446e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2446E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446E4u;
        // 0x2446e8: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2446e4) {
            ctx->pc = 0x244700u;
            goto label_244700;
        }
    }
    ctx->pc = 0x2446ECu;
label_2446ec:
    // 0x2446ec: 0x8cc301c0  lw          $v1, 0x1C0($a2)
    ctx->pc = 0x2446ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 448)));
    // 0x2446f0: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x2446f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
    // 0x2446f4: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2446F4u;
    {
        const bool branch_taken_0x2446f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2446f4) {
            ctx->pc = 0x244700u;
            goto label_244700;
        }
    }
    ctx->pc = 0x2446FCu;
label_2446fc:
    // 0x2446fc: 0xa0c00256  sb          $zero, 0x256($a2)
    ctx->pc = 0x2446fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 598), (uint8_t)GPR_U32(ctx, 0));
label_244700:
    // 0x244700: 0x24a7c778  addiu       $a3, $a1, -0x3888
    ctx->pc = 0x244700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952824));
    // 0x244704: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x244704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x244708: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x244708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x24470c: 0xb0c201c3  sdl         $v0, 0x1C3($a2)
    ctx->pc = 0x24470cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244710: 0xb4c201bc  sdr         $v0, 0x1BC($a2)
    ctx->pc = 0x244710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x244714: 0x24c50090  addiu       $a1, $a2, 0x90
    ctx->pc = 0x244714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    // 0x244718: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x244718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x24471c: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x24471cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x244720: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x244720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
    // 0x244724: 0x3c013e20  lui         $at, 0x3E20
    ctx->pc = 0x244724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15904 << 16));
    // 0x244728: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x244728u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
    // 0x24472c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24472cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244730: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x244730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x244734: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x244734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x244738: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x244738u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24473c: 0x7cc30610  sq          $v1, 0x610($a2)
    ctx->pc = 0x24473cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 1552), GPR_VEC(ctx, 3));
    // 0x244740: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x244740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x244744: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x244744u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x244748: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x244748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x24474c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24474cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x244750: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x244750u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x244754: 0xe4c00630  swc1        $f0, 0x630($a2)
    ctx->pc = 0x244754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 1584), bits); }
    // 0x244758: 0x7cc30620  sq          $v1, 0x620($a2)
    ctx->pc = 0x244758u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 1568), GPR_VEC(ctx, 3));
    // 0x24475c: 0xacc0063c  sw          $zero, 0x63C($a2)
    ctx->pc = 0x24475cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1596), GPR_U32(ctx, 0));
    // 0x244760: 0xacc00638  sw          $zero, 0x638($a2)
    ctx->pc = 0x244760u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1592), GPR_U32(ctx, 0));
    // 0x244764: 0x3e00008  jr          $ra
    ctx->pc = 0x244764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244764u;
        // 0x244768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24476Cu;
    // 0x24476c: 0x0  nop
    ctx->pc = 0x24476cu;
    // NOP
    ctx->pc = 0x244770u;
}
