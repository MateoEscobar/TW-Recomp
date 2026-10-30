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

// Function: sub_002B5718
// Address: 0x2b5718 - 0x2b5808
void sub_002B5718_0x2b5718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5718_0x2b5718");
#endif

    switch (ctx->pc) {
        case 0x2b5758u: goto label_2b5758;
        case 0x2b5778u: goto label_2b5778;
        case 0x2b579cu: goto label_2b579c;
        case 0x2b57dcu: goto label_2b57dc;
        default: break;
    }

    ctx->pc = 0x2b5718u;

    // 0x2b5718: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b5718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b571c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b571cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b5720: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2b5720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2b5724: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b5724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5728: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b5728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b572c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b572cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b5730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b5734: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b5734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b5738: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x2B5738u;
    {
        const bool branch_taken_0x2b5738 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5738u;
        // 0x2b573c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5738) {
            ctx->pc = 0x2B57E8u;
            goto label_2b57e8;
        }
    }
    ctx->pc = 0x2B5740u;
    // 0x2b5740: 0x92230015  lbu         $v1, 0x15($s1)
    ctx->pc = 0x2b5740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 21)));
    // 0x2b5744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b5744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5748: 0x14620028  bne         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2B5748u;
    {
        const bool branch_taken_0x2b5748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5748u;
        // 0x2b574c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5748) {
            ctx->pc = 0x2B57ECu;
            goto label_2b57ec;
        }
    }
    ctx->pc = 0x2B5750u;
    // 0x2b5750: 0xc088eca  jal         func_223B28
    ctx->pc = 0x2B5750u;
    SET_GPR_U32(ctx, 31, 0x2B5758u);
    ctx->pc = 0x2B5754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5750u;
    // 0x2b5754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B28u, 0x2B5750u, 0x2B5758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5758u;
label_2b5758:
    // 0x2b5758: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2B5758u;
    {
        const bool branch_taken_0x2b5758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5758u;
        // 0x2b575c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5758) {
            ctx->pc = 0x2B57ECu;
            goto label_2b57ec;
        }
    }
    ctx->pc = 0x2B5760u;
    // 0x2b5760: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2b5760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x2b5764: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b5764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b5768: 0x68463fff  ldl         $a2, 0x3FFF($v0)
    ctx->pc = 0x2b5768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2b576c: 0x6c463ff8  ldr         $a2, 0x3FF8($v0)
    ctx->pc = 0x2b576cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2b5770: 0xc0a39c2  jal         func_28E708
    ctx->pc = 0x2B5770u;
    SET_GPR_U32(ctx, 31, 0x2B5778u);
    ctx->pc = 0x2B5774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5770u;
    // 0x2b5774: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2B5770u, 0x2B5778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5778u;
label_2b5778:
    // 0x2b5778: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b5778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b577c: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x2b577cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x2b5780: 0x2402006a  addiu       $v0, $zero, 0x6A
    ctx->pc = 0x2b5780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x2b5784: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B5784u;
    {
        const bool branch_taken_0x2b5784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B5788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5784u;
        // 0x2b5788: 0x24020059  addiu       $v0, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5784) {
            ctx->pc = 0x2B57B4u;
            goto label_2b57b4;
        }
    }
    ctx->pc = 0x2B578Cu;
    // 0x2b578c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2b578cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2b5790: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2b5790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2b5794: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2B5794u;
    SET_GPR_U32(ctx, 31, 0x2B579Cu);
    ctx->pc = 0x2B5798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5794u;
    // 0x2b5798: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2B5794u, 0x2B579Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B579Cu;
label_2b579c:
    // 0x2b579c: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x2b579cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x2b57a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B57A0u;
    {
        const bool branch_taken_0x2b57a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B57A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B57A0u;
        // 0x2b57a4: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b57a0) {
            ctx->pc = 0x2B57ACu;
            goto label_2b57ac;
        }
    }
    ctx->pc = 0x2B57A8u;
    // 0x2b57a8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2b57a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2b57ac:
    // 0x2b57ac: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x2b57acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x2b57b0: 0x24020059  addiu       $v0, $zero, 0x59
    ctx->pc = 0x2b57b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
label_2b57b4:
    // 0x2b57b4: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B57B4u;
    {
        const bool branch_taken_0x2b57b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b57b4) {
            ctx->pc = 0x2B57B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B57B4u;
            // 0x2b57b8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B57BCu;
            goto label_2b57bc;
        }
    }
    ctx->pc = 0x2B57BCu;
label_2b57bc:
    // 0x2b57bc: 0x38c2002d  xori        $v0, $a2, 0x2D
    ctx->pc = 0x2b57bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)45);
    // 0x2b57c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B57C0u;
    {
        const bool branch_taken_0x2b57c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B57C0u;
        // 0x2b57c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b57c0) {
            ctx->pc = 0x2B57E8u;
            goto label_2b57e8;
        }
    }
    ctx->pc = 0x2B57C8u;
    // 0x2b57c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b57c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b57cc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b57ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b57d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b57d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b57d4: 0xc0a3892  jal         func_28E248
    ctx->pc = 0x2B57D4u;
    SET_GPR_U32(ctx, 31, 0x2B57DCu);
    ctx->pc = 0x2B57D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B57D4u;
    // 0x2b57d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2B57D4u, 0x2B57DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B57DCu;
label_2b57dc:
    // 0x2b57dc: 0xa2200016  sb          $zero, 0x16($s1)
    ctx->pc = 0x2b57dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b57e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B57E0u;
    {
        const bool branch_taken_0x2b57e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B57E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B57E0u;
        // 0x2b57e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b57e0) {
            ctx->pc = 0x2B57ECu;
            goto label_2b57ec;
        }
    }
    ctx->pc = 0x2B57E8u;
label_2b57e8:
    // 0x2b57e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b57e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b57ec:
    // 0x2b57ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b57ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b57f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b57f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b57f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2b57f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b57f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b57f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b57fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B57FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B57FCu;
        // 0x2b5800: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B57FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5804u;
    // 0x2b5804: 0x0  nop
    ctx->pc = 0x2b5804u;
    // NOP
    ctx->pc = 0x2b5808u;
}
