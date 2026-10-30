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

// Function: sub_002CC908
// Address: 0x2cc908 - 0x2cc990
void sub_002CC908_0x2cc908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC908_0x2cc908");
#endif

    switch (ctx->pc) {
        case 0x2cc94cu: goto label_2cc94c;
        default: break;
    }

    ctx->pc = 0x2cc908u;

    // 0x2cc908: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cc908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cc90c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2cc90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2cc910: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cc910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cc914: 0x240561a8  addiu       $a1, $zero, 0x61A8
    ctx->pc = 0x2cc914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25000));
    // 0x2cc918: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2cc918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2cc91c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cc91cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc924: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2cc924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2cc928: 0x8c47b734  lw          $a3, -0x48CC($v0)
    ctx->pc = 0x2cc928u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x50B734u));
    // 0x2cc92c: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2cc92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2cc930: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2cc930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cc934: 0x24066590  addiu       $a2, $zero, 0x6590
    ctx->pc = 0x2cc934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26000));
    // 0x2cc938: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x2cc938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
    // 0x2cc93c: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x2cc93cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x2cc940: 0xac60021c  sw          $zero, 0x21C($v1)
    ctx->pc = 0x2cc940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 0));
    // 0x2cc944: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2CC944u;
    SET_GPR_U32(ctx, 31, 0x2CC94Cu);
    ctx->pc = 0x2CC948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC944u;
    // 0x2cc948: 0x8cf00048  lw          $s0, 0x48($a3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2CC944u, 0x2CC94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC94Cu;
label_2cc94c:
    // 0x2cc94c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2cc94cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2cc950: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2cc950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cc954: 0xae300038  sw          $s0, 0x38($s1)
    ctx->pc = 0x2cc954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 16));
    // 0x2cc958: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2cc958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cc95c: 0x246600e0  addiu       $a2, $v1, 0xE0
    ctx->pc = 0x2cc95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x2cc960: 0x94c50014  lhu         $a1, 0x14($a2)
    ctx->pc = 0x2cc960u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2cc964: 0xa625003c  sh          $a1, 0x3C($s1)
    ctx->pc = 0x2cc964u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 5));
    // 0x2cc968: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2cc968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2cc96c: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC96Cu;
    {
        const bool branch_taken_0x2cc96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2CC970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC96Cu;
        // 0x2cc970: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc96c) {
            ctx->pc = 0x2CC97Cu;
            goto label_2cc97c;
        }
    }
    ctx->pc = 0x2CC974u;
    // 0x2cc974: 0x34a20100  ori         $v0, $a1, 0x100
    ctx->pc = 0x2cc974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x2cc978: 0xa4c20014  sh          $v0, 0x14($a2)
    ctx->pc = 0x2cc978u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 20), (uint16_t)GPR_U32(ctx, 2));
label_2cc97c:
    // 0x2cc97c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cc97cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc984: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC984u;
        // 0x2cc988: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC98Cu;
    // 0x2cc98c: 0x0  nop
    ctx->pc = 0x2cc98cu;
    // NOP
    ctx->pc = 0x2cc990u;
}
