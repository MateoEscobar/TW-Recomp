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

// Function: sub_001D35A0
// Address: 0x1d35a0 - 0x1d35f8
void sub_001D35A0_0x1d35a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D35A0_0x1d35a0");
#endif

    switch (ctx->pc) {
        case 0x1d35a0u: goto label_1d35a0;
        case 0x1d35a4u: goto label_1d35a4;
        case 0x1d35a8u: goto label_1d35a8;
        case 0x1d35acu: goto label_1d35ac;
        case 0x1d35b0u: goto label_1d35b0;
        case 0x1d35b4u: goto label_1d35b4;
        case 0x1d35b8u: goto label_1d35b8;
        case 0x1d35bcu: goto label_1d35bc;
        case 0x1d35c0u: goto label_1d35c0;
        case 0x1d35c4u: goto label_1d35c4;
        case 0x1d35c8u: goto label_1d35c8;
        case 0x1d35ccu: goto label_1d35cc;
        case 0x1d35d0u: goto label_1d35d0;
        case 0x1d35d4u: goto label_1d35d4;
        case 0x1d35d8u: goto label_1d35d8;
        case 0x1d35dcu: goto label_1d35dc;
        case 0x1d35e0u: goto label_1d35e0;
        case 0x1d35e4u: goto label_1d35e4;
        case 0x1d35e8u: goto label_1d35e8;
        case 0x1d35ecu: goto label_1d35ec;
        case 0x1d35f0u: goto label_1d35f0;
        case 0x1d35f4u: goto label_1d35f4;
        default: break;
    }

    ctx->pc = 0x1d35a0u;

label_1d35a0:
    // 0x1d35a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d35a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d35a4:
    // 0x1d35a4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d35a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d35a8:
    // 0x1d35a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d35a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1d35ac:
    // 0x1d35ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d35acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d35b0:
    // 0x1d35b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d35b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d35b4:
    // 0x1d35b4: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x1d35b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_1d35b8:
    // 0x1d35b8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1d35b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1d35bc:
    // 0x1d35bc: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1d35bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1d35c0:
    // 0x1d35c0: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1d35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_1d35c4:
    // 0x1d35c4: 0x40f809  jalr        $v0
label_1d35c8:
    if (ctx->pc == 0x1D35C8u) {
        ctx->pc = 0x1D35C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35C4u;
        // 0x1d35c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D35CCu;
        goto label_1d35cc;
    }
    ctx->pc = 0x1D35C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D35CCu);
        ctx->pc = 0x1D35C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35C4u;
        // 0x1d35c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D35C4u, 0x1D35CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D35CCu;
label_1d35cc:
    // 0x1d35cc: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1d35ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d35d0:
    // 0x1d35d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d35d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d35d4:
    // 0x1d35d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d35d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d35d8:
    // 0x1d35d8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d35d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d35dc:
    // 0x1d35dc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1d35dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d35e0:
    // 0x1d35e0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x1d35e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d35e4:
    // 0x1d35e4: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1d35e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_1d35e8:
    // 0x1d35e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d35e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d35ec:
    // 0x1d35ec: 0x3e00008  jr          $ra
label_1d35f0:
    if (ctx->pc == 0x1D35F0u) {
        ctx->pc = 0x1D35F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35ECu;
        // 0x1d35f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D35F4u;
        goto label_1d35f4;
    }
    ctx->pc = 0x1D35ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D35F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35ECu;
        // 0x1d35f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D35ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D35F4u;
label_1d35f4:
    // 0x1d35f4: 0x0  nop
    ctx->pc = 0x1d35f4u;
    // NOP
    ctx->pc = 0x1d35f8u;
}
