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

// Function: sub_00357BC8
// Address: 0x357bc8 - 0x357c28
void sub_00357BC8_0x357bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357BC8_0x357bc8");
#endif

    switch (ctx->pc) {
        case 0x357be4u: goto label_357be4;
        case 0x357bf4u: goto label_357bf4;
        case 0x357c04u: goto label_357c04;
        case 0x357c14u: goto label_357c14;
        default: break;
    }

    ctx->pc = 0x357bc8u;

    // 0x357bc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x357bcc: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x357bccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x357bd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x357bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x357bd4: 0x24a590b0  addiu       $a1, $a1, -0x6F50
    ctx->pc = 0x357bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938800));
    // 0x357bd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x357bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x357bdc: 0xc1030a0  jal         func_40C280
    ctx->pc = 0x357BDCu;
    SET_GPR_U32(ctx, 31, 0x357BE4u);
    ctx->pc = 0x357BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357BDCu;
    // 0x357be0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C280u, 0x357BDCu, 0x357BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357BE4u;
label_357be4:
    // 0x357be4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x357be4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x357be8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357bec: 0xc1030a0  jal         func_40C280
    ctx->pc = 0x357BECu;
    SET_GPR_U32(ctx, 31, 0x357BF4u);
    ctx->pc = 0x357BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357BECu;
    // 0x357bf0: 0x24a590c0  addiu       $a1, $a1, -0x6F40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C280u, 0x357BECu, 0x357BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357BF4u;
label_357bf4:
    // 0x357bf4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x357bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x357bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357bfc: 0xc1030a0  jal         func_40C280
    ctx->pc = 0x357BFCu;
    SET_GPR_U32(ctx, 31, 0x357C04u);
    ctx->pc = 0x357C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357BFCu;
    // 0x357c00: 0x24a590c8  addiu       $a1, $a1, -0x6F38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C280u, 0x357BFCu, 0x357C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357C04u;
label_357c04:
    // 0x357c04: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x357c04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x357c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357c0c: 0xc1030a0  jal         func_40C280
    ctx->pc = 0x357C0Cu;
    SET_GPR_U32(ctx, 31, 0x357C14u);
    ctx->pc = 0x357C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357C0Cu;
    // 0x357c10: 0x24a590d8  addiu       $a1, $a1, -0x6F28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C280u, 0x357C0Cu, 0x357C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357C14u;
label_357c14:
    // 0x357c14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x357c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357c18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x357c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x357C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357C1Cu;
        // 0x357c20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357C24u;
    // 0x357c24: 0x0  nop
    ctx->pc = 0x357c24u;
    // NOP
    ctx->pc = 0x357c28u;
}
