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

// Function: sub_0026D8C8
// Address: 0x26d8c8 - 0x26d998
void sub_0026D8C8_0x26d8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D8C8_0x26d8c8");
#endif

    switch (ctx->pc) {
        case 0x26d8e4u: goto label_26d8e4;
        case 0x26d8f8u: goto label_26d8f8;
        case 0x26d91cu: goto label_26d91c;
        case 0x26d934u: goto label_26d934;
        case 0x26d940u: goto label_26d940;
        case 0x26d97cu: goto label_26d97c;
        default: break;
    }

    ctx->pc = 0x26d8c8u;

    // 0x26d8c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26d8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26d8cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x26d8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x26d8d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26d8d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d8d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26d8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26d8d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26d8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26d8dc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x26D8DCu;
    SET_GPR_U32(ctx, 31, 0x26D8E4u);
    ctx->pc = 0x26D8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D8DCu;
    // 0x26d8e0: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x26D8DCu, 0x26D8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D8E4u;
label_26d8e4:
    // 0x26d8e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26D8E4u;
    {
        const bool branch_taken_0x26d8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D8E4u;
        // 0x26d8e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d8e4) {
            ctx->pc = 0x26D900u;
            goto label_26d900;
        }
    }
    ctx->pc = 0x26D8ECu;
    // 0x26d8ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d8f0: 0xc08b2c0  jal         func_22CB00
    ctx->pc = 0x26D8F0u;
    SET_GPR_U32(ctx, 31, 0x26D8F8u);
    ctx->pc = 0x26D8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D8F0u;
    // 0x26d8f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB00u, 0x26D8F0u, 0x26D8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D8F8u;
label_26d8f8:
    // 0x26d8f8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x26D8F8u;
    {
        const bool branch_taken_0x26d8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D8F8u;
        // 0x26d8fc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d8f8) {
            ctx->pc = 0x26D988u;
            goto label_26d988;
        }
    }
    ctx->pc = 0x26D900u;
label_26d900:
    // 0x26d900: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x26d900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x26d904: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x26d904u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x26d908: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26d908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26d90c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d910: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x26d910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x26d914: 0xc09db66  jal         func_276D98
    ctx->pc = 0x26D914u;
    SET_GPR_U32(ctx, 31, 0x26D91Cu);
    ctx->pc = 0x26D918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D914u;
    // 0x26d918: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276D98u, 0x26D914u, 0x26D91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D91Cu;
label_26d91c:
    // 0x26d91c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x26d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x26d920: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x26d920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x26d924: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x26D924u;
    {
        const bool branch_taken_0x26d924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d924) {
            ctx->pc = 0x26D928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D924u;
            // 0x26d928: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D988u;
            goto label_26d988;
        }
    }
    ctx->pc = 0x26D92Cu;
    // 0x26d92c: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x26D92Cu;
    SET_GPR_U32(ctx, 31, 0x26D934u);
    ctx->pc = 0x26D930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D92Cu;
    // 0x26d930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x26D92Cu, 0x26D934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D934u;
label_26d934:
    // 0x26d934: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26d934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d938: 0xc0a0348  jal         func_280D20
    ctx->pc = 0x26D938u;
    SET_GPR_U32(ctx, 31, 0x26D940u);
    ctx->pc = 0x26D93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D938u;
    // 0x26d93c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D20u, 0x26D938u, 0x26D940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D940u;
label_26d940:
    // 0x26d940: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x26d940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x26d944: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x26D944u;
    {
        const bool branch_taken_0x26d944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d944) {
            ctx->pc = 0x26D948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D944u;
            // 0x26d948: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D980u;
            goto label_26d980;
        }
    }
    ctx->pc = 0x26D94Cu;
    // 0x26d94c: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x26d94cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x26d950: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x26d950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x26d954: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26d954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26d958: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26d958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26d95c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x26d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x26d960: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x26d960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d964: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26d964u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d968: 0x0  nop
    ctx->pc = 0x26d968u;
    // NOP
    // 0x26d96c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x26D96Cu;
    {
        const bool branch_taken_0x26d96c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d96c) {
            ctx->pc = 0x26D970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D96Cu;
            // 0x26d970: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D980u;
            goto label_26d980;
        }
    }
    ctx->pc = 0x26D974u;
    // 0x26d974: 0xc09b742  jal         func_26DD08
    ctx->pc = 0x26D974u;
    SET_GPR_U32(ctx, 31, 0x26D97Cu);
    ctx->pc = 0x26D978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D974u;
    // 0x26d978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DD08u, 0x26D974u, 0x26D97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D97Cu;
label_26d97c:
    // 0x26d97c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x26d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_26d980:
    // 0x26d980: 0xac4000b8  sw          $zero, 0xB8($v0)
    ctx->pc = 0x26d980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 0));
    // 0x26d984: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x26d984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26d988:
    // 0x26d988: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26d988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d98c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26d98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d990: 0x3e00008  jr          $ra
    ctx->pc = 0x26D990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D990u;
        // 0x26d994: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D998u;
}
