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

// Function: sub_004F4098
// Address: 0x4f4098 - 0x4f40e0
void sub_004F4098_0x4f4098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4098_0x4f4098");
#endif

    switch (ctx->pc) {
        case 0x4f4098u: goto label_4f4098;
        case 0x4f409cu: goto label_4f409c;
        case 0x4f40a0u: goto label_4f40a0;
        case 0x4f40a4u: goto label_4f40a4;
        case 0x4f40a8u: goto label_4f40a8;
        case 0x4f40acu: goto label_4f40ac;
        case 0x4f40b0u: goto label_4f40b0;
        case 0x4f40b4u: goto label_4f40b4;
        case 0x4f40b8u: goto label_4f40b8;
        case 0x4f40bcu: goto label_4f40bc;
        case 0x4f40c0u: goto label_4f40c0;
        case 0x4f40c4u: goto label_4f40c4;
        case 0x4f40c8u: goto label_4f40c8;
        case 0x4f40ccu: goto label_4f40cc;
        case 0x4f40d0u: goto label_4f40d0;
        case 0x4f40d4u: goto label_4f40d4;
        case 0x4f40d8u: goto label_4f40d8;
        case 0x4f40dcu: goto label_4f40dc;
        default: break;
    }

    ctx->pc = 0x4f4098u;

label_4f4098:
    // 0x4f4098: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f4098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4f409c:
    // 0x4f409c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4f409cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4f40a0:
    // 0x4f40a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f40a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4f40a4:
    // 0x4f40a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f40a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f40a8:
    // 0x4f40a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4f40a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4f40ac:
    // 0x4f40ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4f40acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4f40b0:
    // 0x4f40b0: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x4f40b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_4f40b4:
    // 0x4f40b4: 0x8c4600ac  lw          $a2, 0xAC($v0)
    ctx->pc = 0x4f40b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_4f40b8:
    // 0x4f40b8: 0xc0f809  jalr        $a2
label_4f40bc:
    if (ctx->pc == 0x4F40BCu) {
        ctx->pc = 0x4F40BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F40B8u;
        // 0x4f40bc: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F40C0u;
        goto label_4f40c0;
    }
    ctx->pc = 0x4F40B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x4F40C0u);
        ctx->pc = 0x4F40BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F40B8u;
        // 0x4f40bc: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F40B8u, 0x4F40C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F40C0u;
label_4f40c0:
    // 0x4f40c0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x4f40c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f40c4:
    // 0x4f40c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f40c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f40c8:
    // 0x4f40c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f40c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4f40cc:
    // 0x4f40cc: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x4f40ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_4f40d0:
    // 0x4f40d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4f40d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f40d4:
    // 0x4f40d4: 0x3e00008  jr          $ra
label_4f40d8:
    if (ctx->pc == 0x4F40D8u) {
        ctx->pc = 0x4F40D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F40D4u;
        // 0x4f40d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F40DCu;
        goto label_4f40dc;
    }
    ctx->pc = 0x4F40D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F40D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F40D4u;
        // 0x4f40d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F40D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F40DCu;
label_4f40dc:
    // 0x4f40dc: 0x0  nop
    ctx->pc = 0x4f40dcu;
    // NOP
    ctx->pc = 0x4f40e0u;
}
