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

// Function: sub_004B7998
// Address: 0x4b7998 - 0x4b7a48
void sub_004B7998_0x4b7998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7998_0x4b7998");
#endif

    switch (ctx->pc) {
        case 0x4b79d0u: goto label_4b79d0;
        case 0x4b79f8u: goto label_4b79f8;
        default: break;
    }

    ctx->pc = 0x4b7998u;

    // 0x4b7998: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4b7998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4b799c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4b799cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x4b79a0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4b79a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4b79a4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4b79a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b79a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b79a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4b79ac: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x4b79acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b79b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b79b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b79b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4b79b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b79b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b79b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b79bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b79bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b79c0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4b79c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4b79c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4B79C4u;
    {
        const bool branch_taken_0x4b79c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B79C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B79C4u;
        // 0x4b79c8: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b79c4) {
            ctx->pc = 0x4B79DCu;
            goto label_4b79dc;
        }
    }
    ctx->pc = 0x4B79CCu;
    // 0x4b79cc: 0x0  nop
    ctx->pc = 0x4b79ccu;
    // NOP
label_4b79d0:
    // 0x4b79d0: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x4b79d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4b79d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b79d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b79d8: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x4b79d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4b79dc:
    // 0x4b79dc: 0x5a00000d  blezl       $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B79DCu;
    {
        const bool branch_taken_0x4b79dc = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x4b79dc) {
            ctx->pc = 0x4B79E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B79DCu;
            // 0x4b79e0: 0xde220040  ld          $v0, 0x40($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B7A14u;
            goto label_4b7a14;
        }
    }
    ctx->pc = 0x4B79E4u;
    // 0x4b79e4: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x4b79e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x4b79e8: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x4b79e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
    // 0x4b79ec: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x4b79ecu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x4b79f0: 0xc10f59a  jal         func_43D668
    ctx->pc = 0x4B79F0u;
    SET_GPR_U32(ctx, 31, 0x4B79F8u);
    ctx->pc = 0x4B79F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B79F0u;
    // 0x4b79f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D668u, 0x4B79F0u, 0x4B79F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B79F8u;
label_4b79f8:
    // 0x4b79f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4b79f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b79fc: 0x5474fff4  bnel        $v1, $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x4B79FCu;
    {
        const bool branch_taken_0x4b79fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x4b79fc) {
            ctx->pc = 0x4B7A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B79FCu;
            // 0x4b7a00: 0x203802f  dsubu       $s0, $s0, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B79D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b79d0;
        }
    }
    ctx->pc = 0x4B7A04u;
    // 0x4b7a04: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4b7a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b7a08: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x4b7a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x4b7a0c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4b7a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4b7a10: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x4b7a10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
label_4b7a14:
    // 0x4b7a14: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B7A14u;
    {
        const bool branch_taken_0x4b7a14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B7A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7A14u;
        // 0x4b7a18: 0x270982f  dsubu       $s3, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) - GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7a14) {
            ctx->pc = 0x4B7A24u;
            goto label_4b7a24;
        }
    }
    ctx->pc = 0x4B7A1Cu;
    // 0x4b7a1c: 0x53102d  daddu       $v0, $v0, $s3
    ctx->pc = 0x4b7a1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 19));
    // 0x4b7a20: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x4b7a20u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
label_4b7a24:
    // 0x4b7a24: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4b7a24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7a28: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4b7a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b7a2c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4b7a2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b7a30: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4b7a30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b7a34: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b7a34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b7a38: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b7a38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b7a3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b7a3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b7a40: 0x3e00008  jr          $ra
    ctx->pc = 0x4B7A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7A40u;
        // 0x4b7a44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B7A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B7A48u;
}
