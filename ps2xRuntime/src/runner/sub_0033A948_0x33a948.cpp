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

// Function: sub_0033A948
// Address: 0x33a948 - 0x33aa30
void sub_0033A948_0x33a948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A948_0x33a948");
#endif

    switch (ctx->pc) {
        case 0x33a994u: goto label_33a994;
        case 0x33a9a8u: goto label_33a9a8;
        case 0x33a9ccu: goto label_33a9cc;
        case 0x33a9fcu: goto label_33a9fc;
        default: break;
    }

    ctx->pc = 0x33a948u;

    // 0x33a948: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x33a948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x33a94c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x33a94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x33a950: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x33a950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x33a954: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33a954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a958: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x33a958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x33a95c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x33a95cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a960: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x33a960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x33a964: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x33a964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a968: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x33a968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x33a96c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x33a96cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a970: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x33a970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x33a974: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x33a974u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a978: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x33a978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x33a97c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x33a97cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a980: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x33a980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x33a984: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x33a984u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a988: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33a988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33a98c: 0xc0ce9a4  jal         func_33A690
    ctx->pc = 0x33A98Cu;
    SET_GPR_U32(ctx, 31, 0x33A994u);
    ctx->pc = 0x33A990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A98Cu;
    // 0x33a990: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A690u, 0x33A98Cu, 0x33A994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A994u;
label_33a994:
    // 0x33a994: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33A994u;
    {
        const bool branch_taken_0x33a994 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A994u;
        // 0x33a998: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a994) {
            ctx->pc = 0x33A9A8u;
            goto label_33a9a8;
        }
    }
    ctx->pc = 0x33A99Cu;
    // 0x33a99c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33a99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a9a0: 0xc0ce814  jal         func_33A050
    ctx->pc = 0x33A9A0u;
    SET_GPR_U32(ctx, 31, 0x33A9A8u);
    ctx->pc = 0x33A9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A9A0u;
    // 0x33a9a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A050u, 0x33A9A0u, 0x33A9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A9A8u;
label_33a9a8:
    // 0x33a9a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33a9a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a9ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33a9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a9b0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x33a9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a9b4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x33a9b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a9b8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x33a9b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a9bc: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x33a9bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a9c0: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x33a9c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a9c4: 0xc0ce1da  jal         func_338768
    ctx->pc = 0x33A9C4u;
    SET_GPR_U32(ctx, 31, 0x33A9CCu);
    ctx->pc = 0x33A9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A9C4u;
    // 0x33a9c8: 0x2e0582d  daddu       $t3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338768u, 0x33A9C4u, 0x33A9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A9CCu;
label_33a9cc:
    // 0x33a9cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33a9ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a9d0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x33A9D0u;
    {
        const bool branch_taken_0x33a9d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A9D0u;
        // 0x33a9d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a9d0) {
            ctx->pc = 0x33A9FCu;
            goto label_33a9fc;
        }
    }
    ctx->pc = 0x33A9D8u;
    // 0x33a9d8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x33a9d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a9dc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x33a9dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a9e0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x33a9e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a9e4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x33a9e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a9e8: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x33a9e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a9ec: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x33a9ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a9f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x33a9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x33a9f4: 0xc0ce78a  jal         func_339E28
    ctx->pc = 0x33A9F4u;
    SET_GPR_U32(ctx, 31, 0x33A9FCu);
    ctx->pc = 0x33A9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A9F4u;
    // 0x33a9f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339E28u, 0x33A9F4u, 0x33A9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A9FCu;
label_33a9fc:
    // 0x33a9fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33a9fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33aa00: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x33aa00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33aa04: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x33aa04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x33aa08: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x33aa08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33aa0c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x33aa0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33aa10: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x33aa10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33aa14: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x33aa14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33aa18: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x33aa18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33aa1c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x33aa1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33aa20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33aa20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33aa24: 0x3e00008  jr          $ra
    ctx->pc = 0x33AA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA24u;
        // 0x33aa28: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AA2Cu;
    // 0x33aa2c: 0x0  nop
    ctx->pc = 0x33aa2cu;
    // NOP
    ctx->pc = 0x33aa30u;
}
