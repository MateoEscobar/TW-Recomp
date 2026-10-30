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

// Function: sub_004838D8
// Address: 0x4838d8 - 0x483910
void sub_004838D8_0x4838d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004838D8_0x4838d8");
#endif

    switch (ctx->pc) {
        case 0x4838d8u: goto label_4838d8;
        case 0x4838dcu: goto label_4838dc;
        case 0x4838e0u: goto label_4838e0;
        case 0x4838e4u: goto label_4838e4;
        case 0x4838e8u: goto label_4838e8;
        case 0x4838ecu: goto label_4838ec;
        case 0x4838f0u: goto label_4838f0;
        case 0x4838f4u: goto label_4838f4;
        case 0x4838f8u: goto label_4838f8;
        case 0x4838fcu: goto label_4838fc;
        case 0x483900u: goto label_483900;
        case 0x483904u: goto label_483904;
        case 0x483908u: goto label_483908;
        case 0x48390cu: goto label_48390c;
        default: break;
    }

    ctx->pc = 0x4838d8u;

label_4838d8:
    // 0x4838d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4838d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4838dc:
    // 0x4838dc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4838dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4838e0:
    // 0x4838e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4838e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4838e4:
    // 0x4838e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4838e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4838e8:
    // 0x4838e8: 0x8c43ae24  lw          $v1, -0x51DC($v0)
    ctx->pc = 0x4838e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946340)));
label_4838ec:
    // 0x4838ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4838ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4838f0:
    // 0x4838f0: 0x60f809  jalr        $v1
label_4838f4:
    if (ctx->pc == 0x4838F4u) {
        ctx->pc = 0x4838F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4838F0u;
        // 0x4838f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4838F8u;
        goto label_4838f8;
    }
    ctx->pc = 0x4838F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4838F8u);
        ctx->pc = 0x4838F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4838F0u;
        // 0x4838f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4838F0u, 0x4838F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4838F8u;
label_4838f8:
    // 0x4838f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4838f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4838fc:
    // 0x4838fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4838fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_483900:
    // 0x483900: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x483900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_483904:
    // 0x483904: 0x3e00008  jr          $ra
label_483908:
    if (ctx->pc == 0x483908u) {
        ctx->pc = 0x483908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483904u;
        // 0x483908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48390Cu;
        goto label_48390c;
    }
    ctx->pc = 0x483904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x483908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483904u;
        // 0x483908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48390Cu;
label_48390c:
    // 0x48390c: 0x0  nop
    ctx->pc = 0x48390cu;
    // NOP
    ctx->pc = 0x483910u;
}
