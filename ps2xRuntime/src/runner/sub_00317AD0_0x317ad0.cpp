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

// Function: sub_00317AD0
// Address: 0x317ad0 - 0x317b38
void sub_00317AD0_0x317ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317AD0_0x317ad0");
#endif

    switch (ctx->pc) {
        case 0x317b10u: goto label_317b10;
        case 0x317b24u: goto label_317b24;
        default: break;
    }

    ctx->pc = 0x317ad0u;

    // 0x317ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x317ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x317ad4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x317ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x317ad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x317ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x317adc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x317adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317ae0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x317ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x317ae4: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x317AE4u;
    {
        const bool branch_taken_0x317ae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x317AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317AE4u;
        // 0x317ae8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ae4) {
            ctx->pc = 0x317B1Cu;
            goto label_317b1c;
        }
    }
    ctx->pc = 0x317AECu;
    // 0x317aec: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x317aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x317af0: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x317af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x317af4: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x317af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x317af8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x317AF8u;
    {
        const bool branch_taken_0x317af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317AF8u;
        // 0x317afc: 0x24620bb8  addiu       $v0, $v1, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317af8) {
            ctx->pc = 0x317B1Cu;
            goto label_317b1c;
        }
    }
    ctx->pc = 0x317B00u;
    // 0x317b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x317b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317b04: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x317b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x317b08: 0xc0c5df0  jal         func_3177C0
    ctx->pc = 0x317B08u;
    SET_GPR_U32(ctx, 31, 0x317B10u);
    ctx->pc = 0x317B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317B08u;
    // 0x317b0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3177C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3177C0u, 0x317B08u, 0x317B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317B10u;
label_317b10:
    // 0x317b10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x317b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x317b14: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x317B14u;
    {
        const bool branch_taken_0x317b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x317b14) {
            ctx->pc = 0x317B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317B14u;
            // 0x317b18: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317B1Cu;
            goto label_317b1c;
        }
    }
    ctx->pc = 0x317B1Cu;
label_317b1c:
    // 0x317b1c: 0xc0c5e72  jal         func_3179C8
    ctx->pc = 0x317B1Cu;
    SET_GPR_U32(ctx, 31, 0x317B24u);
    ctx->pc = 0x317B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317B1Cu;
    // 0x317b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3179C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3179C8u, 0x317B1Cu, 0x317B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317B24u;
label_317b24:
    // 0x317b24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317b28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x317b28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317b2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317b30: 0x3e00008  jr          $ra
    ctx->pc = 0x317B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B30u;
        // 0x317b34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317B38u;
}
