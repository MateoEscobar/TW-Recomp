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

// Function: sub_002D3940
// Address: 0x2d3940 - 0x2d3a18
void sub_002D3940_0x2d3940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3940_0x2d3940");
#endif

    switch (ctx->pc) {
        case 0x2d3984u: goto label_2d3984;
        case 0x2d398cu: goto label_2d398c;
        case 0x2d399cu: goto label_2d399c;
        case 0x2d39b8u: goto label_2d39b8;
        case 0x2d39e0u: goto label_2d39e0;
        case 0x2d39ecu: goto label_2d39ec;
        default: break;
    }

    ctx->pc = 0x2d3940u;

    // 0x2d3940: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d3940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d3944: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2d3944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2d3948: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2d3948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2d394c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d394cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3950: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2d3950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2d3954: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2d3954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3958: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d3958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d395c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2d395cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3960: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2d3960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2d3964: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2d3964u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3968: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2d3968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2d396c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2d396cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3970: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2d3970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2d3974: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2d3974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2d3978: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d3978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d397c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2D397Cu;
    SET_GPR_U32(ctx, 31, 0x2D3984u);
    ctx->pc = 0x2D3980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D397Cu;
    // 0x2d3980: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2D397Cu, 0x2D3984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3984u;
label_2d3984:
    // 0x2d3984: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2D3984u;
    SET_GPR_U32(ctx, 31, 0x2D398Cu);
    ctx->pc = 0x2D3988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3984u;
    // 0x2d3988: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2D3984u, 0x2D398Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D398Cu;
label_2d398c:
    // 0x2d398c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D398Cu;
    {
        const bool branch_taken_0x2d398c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D398Cu;
        // 0x2d3990: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d398c) {
            ctx->pc = 0x2D39F0u;
            goto label_2d39f0;
        }
    }
    ctx->pc = 0x2D3994u;
    // 0x2d3994: 0xc087502  jal         func_21D408
    ctx->pc = 0x2D3994u;
    SET_GPR_U32(ctx, 31, 0x2D399Cu);
    ctx->pc = 0x2D3998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3994u;
    // 0x2d3998: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D3994u, 0x2D399Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D399Cu;
label_2d399c:
    // 0x2d399c: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D399Cu;
    {
        const bool branch_taken_0x2d399c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D39A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D399Cu;
        // 0x2d39a0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d399c) {
            ctx->pc = 0x2D39ECu;
            goto label_2d39ec;
        }
    }
    ctx->pc = 0x2D39A4u;
    // 0x2d39a4: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x2d39a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d39a8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D39A8u;
    {
        const bool branch_taken_0x2d39a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D39ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D39A8u;
        // 0x2d39ac: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d39a8) {
            ctx->pc = 0x2D39F0u;
            goto label_2d39f0;
        }
    }
    ctx->pc = 0x2D39B0u;
    // 0x2d39b0: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2D39B0u;
    SET_GPR_U32(ctx, 31, 0x2D39B8u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2D39B0u, 0x2D39B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D39B8u;
label_2d39b8:
    // 0x2d39b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d39b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d39bc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D39BCu;
    {
        const bool branch_taken_0x2d39bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D39C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D39BCu;
        // 0x2d39c0: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d39bc) {
            ctx->pc = 0x2D39E0u;
            goto label_2d39e0;
        }
    }
    ctx->pc = 0x2D39C4u;
    // 0x2d39c4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2d39c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d39c8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2d39c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d39cc: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2d39ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d39d0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2d39d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d39d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d39d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d39d8: 0xc0b4e86  jal         func_2D3A18
    ctx->pc = 0x2D39D8u;
    SET_GPR_U32(ctx, 31, 0x2D39E0u);
    ctx->pc = 0x2D39DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D39D8u;
    // 0x2d39dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3A18u, 0x2D39D8u, 0x2D39E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D39E0u;
label_2d39e0:
    // 0x2d39e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d39e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d39e4: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2D39E4u;
    SET_GPR_U32(ctx, 31, 0x2D39ECu);
    ctx->pc = 0x2D39E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D39E4u;
    // 0x2d39e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2D39E4u, 0x2D39ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D39ECu;
label_2d39ec:
    // 0x2d39ec: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2d39ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2d39f0:
    // 0x2d39f0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2d39f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d39f4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2d39f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d39f8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2d39f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d39fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d39fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d3a00: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2d3a00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3a04: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2d3a04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3a08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d3a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3A0Cu;
        // 0x2d3a10: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3A14u;
    // 0x2d3a14: 0x0  nop
    ctx->pc = 0x2d3a14u;
    // NOP
    ctx->pc = 0x2d3a18u;
}
