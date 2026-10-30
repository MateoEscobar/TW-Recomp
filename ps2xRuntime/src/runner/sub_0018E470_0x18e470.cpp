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

// Function: sub_0018E470
// Address: 0x18e470 - 0x18e530
void sub_0018E470_0x18e470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E470_0x18e470");
#endif

    switch (ctx->pc) {
        case 0x18e4c8u: goto label_18e4c8;
        case 0x18e4ecu: goto label_18e4ec;
        default: break;
    }

    ctx->pc = 0x18e470u;

    // 0x18e470: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x18e470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x18e474: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x18e474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x18e478: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x18e478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x18e47c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x18e47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x18e480: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18e480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e484: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x18e484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x18e488: 0x2451deb8  addiu       $s1, $v0, -0x2148
    ctx->pc = 0x18e488u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
    // 0x18e48c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x18e48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x18e490: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x18e490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e494: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x18e494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x18e498: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x18e498u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e49c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x18e49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x18e4a0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x18e4a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4a4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x18e4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x18e4a8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x18e4a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4ac: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x18e4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x18e4b0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x18e4b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4b4: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x18e4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x18e4b8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x18e4b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e4c0: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x18e4c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4c4: 0x0  nop
    ctx->pc = 0x18e4c4u;
    // NOP
label_18e4c8:
    // 0x18e4c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18e4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e4cc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x18e4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4d0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x18e4d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4d4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x18e4d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4d8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x18e4d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4dc: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x18e4dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4e0: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x18e4e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4e4: 0xc062d2a  jal         func_18B4A8
    ctx->pc = 0x18E4E4u;
    SET_GPR_U32(ctx, 31, 0x18E4ECu);
    ctx->pc = 0x18E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E4E4u;
    // 0x18e4e8: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B4A8u, 0x18E4E4u, 0x18E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E4ECu;
label_18e4ec:
    // 0x18e4ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18e4ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18e4f0: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x18e4f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x18e4f4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x18E4F4u;
    {
        const bool branch_taken_0x18e4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4F4u;
        // 0x18e4f8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4f4) {
            ctx->pc = 0x18E4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e4c8;
        }
    }
    ctx->pc = 0x18E4FCu;
    // 0x18e4fc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x18e4fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18e500: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x18e500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18e504: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x18e504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18e508: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x18e508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18e50c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x18e50cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e510: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x18e510u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e514: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x18e514u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e518: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x18e518u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e51c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x18e51cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e524: 0x3e00008  jr          $ra
    ctx->pc = 0x18E524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E524u;
        // 0x18e528: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E52Cu;
    // 0x18e52c: 0x0  nop
    ctx->pc = 0x18e52cu;
    // NOP
    ctx->pc = 0x18e530u;
}
