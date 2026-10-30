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

// Function: sub_004B3BC8
// Address: 0x4b3bc8 - 0x4b3c28
void sub_004B3BC8_0x4b3bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3BC8_0x4b3bc8");
#endif

    switch (ctx->pc) {
        case 0x4b3bfcu: goto label_4b3bfc;
        default: break;
    }

    ctx->pc = 0x4b3bc8u;

    // 0x4b3bc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b3bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b3bcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b3bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b3bd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b3bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b3bd4: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4b3bd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4b3bd8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b3bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b3bdc: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x4b3bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b3be0: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x4b3be0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x4b3be4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x4b3be4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b3be8: 0x2118804  sllv        $s1, $s1, $s0
    ctx->pc = 0x4b3be8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 16) & 0x1F));
    // 0x4b3bec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b3becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4b3bf0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x4b3bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x4b3bf4: 0xc10ced8  jal         func_433B60
    ctx->pc = 0x4B3BF4u;
    SET_GPR_U32(ctx, 31, 0x4B3BFCu);
    ctx->pc = 0x4B3BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3BF4u;
    // 0x4b3bf8: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433B60u, 0x4B3BF4u, 0x4B3BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3BFCu;
label_4b3bfc:
    // 0x4b3bfc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4b3bfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3c00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b3c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b3c04: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x4b3c04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x4b3c08: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x4b3c08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
    // 0x4b3c0c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b3c0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b3c10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b3c10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3c14: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x4b3c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x4b3c18: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x4b3c18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b3c1c: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x4b3c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b3c20: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3C20u;
        // 0x4b3c24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3C28u;
}
