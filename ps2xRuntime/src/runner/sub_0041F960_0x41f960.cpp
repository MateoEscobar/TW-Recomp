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

// Function: sub_0041F960
// Address: 0x41f960 - 0x41fa38
void sub_0041F960_0x41f960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041F960_0x41f960");
#endif

    switch (ctx->pc) {
        case 0x41f97cu: goto label_41f97c;
        case 0x41f990u: goto label_41f990;
        case 0x41f9c0u: goto label_41f9c0;
        case 0x41f9dcu: goto label_41f9dc;
        case 0x41f9f4u: goto label_41f9f4;
        case 0x41fa04u: goto label_41fa04;
        case 0x41fa24u: goto label_41fa24;
        default: break;
    }

    ctx->pc = 0x41f960u;

    // 0x41f960: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x41f960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x41f964: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x41f964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x41f968: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x41f968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x41f96c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x41f96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x41f970: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x41f970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x41f974: 0xc052862  jal         func_14A188
    ctx->pc = 0x41F974u;
    SET_GPR_U32(ctx, 31, 0x41F97Cu);
    ctx->pc = 0x41F978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F974u;
    // 0x41f978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A188u, 0x41F974u, 0x41F97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F97Cu;
label_41f97c:
    // 0x41f97c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41f97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f980: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x41f980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41f984: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41f984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f988: 0xc052910  jal         func_14A440
    ctx->pc = 0x41F988u;
    SET_GPR_U32(ctx, 31, 0x41F990u);
    ctx->pc = 0x41F98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F988u;
    // 0x41f98c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A440u, 0x41F988u, 0x41F990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F990u;
label_41f990:
    // 0x41f990: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x41f990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x41f994: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x41F994u;
    {
        const bool branch_taken_0x41f994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F994u;
        // 0x41f998: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f994) {
            ctx->pc = 0x41FA24u;
            goto label_41fa24;
        }
    }
    ctx->pc = 0x41F99Cu;
    // 0x41f99c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x41F99Cu;
    {
        const bool branch_taken_0x41f99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F99Cu;
        // 0x41f9a0: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f99c) {
            ctx->pc = 0x41FA24u;
            goto label_41fa24;
        }
    }
    ctx->pc = 0x41F9A4u;
    // 0x41f9a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41f9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41f9a8: 0x2451b4d8  addiu       $s1, $v0, -0x4B28
    ctx->pc = 0x41f9a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948056));
    // 0x41f9ac: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x41f9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x41f9b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41f9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f9b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41f9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f9b8: 0xc052caa  jal         func_14B2A8
    ctx->pc = 0x41F9B8u;
    SET_GPR_U32(ctx, 31, 0x41F9C0u);
    ctx->pc = 0x41F9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F9B8u;
    // 0x41f9bc: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B2A8u, 0x41F9B8u, 0x41F9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F9C0u;
label_41f9c0:
    // 0x41f9c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x41f9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x41f9c4: 0x10430017  beq         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x41F9C4u;
    {
        const bool branch_taken_0x41f9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x41F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F9C4u;
        // 0x41f9c8: 0x3c060059  lui         $a2, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f9c4) {
            ctx->pc = 0x41FA24u;
            goto label_41fa24;
        }
    }
    ctx->pc = 0x41F9CCu;
    // 0x41f9cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41f9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f9d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41f9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f9d4: 0xc05292e  jal         func_14A4B8
    ctx->pc = 0x41F9D4u;
    SET_GPR_U32(ctx, 31, 0x41F9DCu);
    ctx->pc = 0x41F9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F9D4u;
    // 0x41f9d8: 0x24c6b500  addiu       $a2, $a2, -0x4B00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A4B8u, 0x41F9D4u, 0x41F9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F9DCu;
label_41f9dc:
    // 0x41f9dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41f9dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f9e0: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x41F9E0u;
    {
        const bool branch_taken_0x41f9e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F9E0u;
        // 0x41f9e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f9e0) {
            ctx->pc = 0x41FA24u;
            goto label_41fa24;
        }
    }
    ctx->pc = 0x41F9E8u;
    // 0x41f9e8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x41f9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x41f9ec: 0xc052a36  jal         func_14A8D8
    ctx->pc = 0x41F9ECu;
    SET_GPR_U32(ctx, 31, 0x41F9F4u);
    ctx->pc = 0x41F9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F9ECu;
    // 0x41f9f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A8D8u, 0x41F9ECu, 0x41F9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F9F4u;
label_41f9f4:
    // 0x41f9f4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x41F9F4u;
    {
        const bool branch_taken_0x41f9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41f9f4) {
            ctx->pc = 0x41F9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41F9F4u;
            // 0x41f9f8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41FA28u;
            goto label_41fa28;
        }
    }
    ctx->pc = 0x41F9FCu;
    // 0x41f9fc: 0xc0529fc  jal         func_14A7F0
    ctx->pc = 0x41F9FCu;
    SET_GPR_U32(ctx, 31, 0x41FA04u);
    ctx->pc = 0x41FA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F9FCu;
    // 0x41fa00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A7F0u, 0x41F9FCu, 0x41FA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FA04u;
label_41fa04:
    // 0x41fa04: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x41FA04u;
    {
        const bool branch_taken_0x41fa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FA04u;
        // 0x41fa08: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fa04) {
            ctx->pc = 0x41FA24u;
            goto label_41fa24;
        }
    }
    ctx->pc = 0x41FA0Cu;
    // 0x41fa0c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x41fa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x41fa10: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x41fa10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x41fa14: 0x24a5b508  addiu       $a1, $a1, -0x4AF8
    ctx->pc = 0x41fa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948104));
    // 0x41fa18: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x41fa18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fa1c: 0xc1062fc  jal         func_418BF0
    ctx->pc = 0x41FA1Cu;
    SET_GPR_U32(ctx, 31, 0x41FA24u);
    ctx->pc = 0x41FA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FA1Cu;
    // 0x41fa20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418BF0u, 0x41FA1Cu, 0x41FA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FA24u;
label_41fa24:
    // 0x41fa24: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x41fa24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41fa28:
    // 0x41fa28: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x41fa28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x41fa2c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x41fa2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x41fa30: 0x3e00008  jr          $ra
    ctx->pc = 0x41FA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FA30u;
        // 0x41fa34: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41FA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41FA38u;
}
