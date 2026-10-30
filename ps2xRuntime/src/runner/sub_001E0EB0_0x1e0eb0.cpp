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

// Function: sub_001E0EB0
// Address: 0x1e0eb0 - 0x1e0f18
void sub_001E0EB0_0x1e0eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0EB0_0x1e0eb0");
#endif

    switch (ctx->pc) {
        case 0x1e0eb0u: goto label_1e0eb0;
        case 0x1e0eb4u: goto label_1e0eb4;
        case 0x1e0eb8u: goto label_1e0eb8;
        case 0x1e0ebcu: goto label_1e0ebc;
        case 0x1e0ec0u: goto label_1e0ec0;
        case 0x1e0ec4u: goto label_1e0ec4;
        case 0x1e0ec8u: goto label_1e0ec8;
        case 0x1e0eccu: goto label_1e0ecc;
        case 0x1e0ed0u: goto label_1e0ed0;
        case 0x1e0ed4u: goto label_1e0ed4;
        case 0x1e0ed8u: goto label_1e0ed8;
        case 0x1e0edcu: goto label_1e0edc;
        case 0x1e0ee0u: goto label_1e0ee0;
        case 0x1e0ee4u: goto label_1e0ee4;
        case 0x1e0ee8u: goto label_1e0ee8;
        case 0x1e0eecu: goto label_1e0eec;
        case 0x1e0ef0u: goto label_1e0ef0;
        case 0x1e0ef4u: goto label_1e0ef4;
        case 0x1e0ef8u: goto label_1e0ef8;
        case 0x1e0efcu: goto label_1e0efc;
        case 0x1e0f00u: goto label_1e0f00;
        case 0x1e0f04u: goto label_1e0f04;
        case 0x1e0f08u: goto label_1e0f08;
        case 0x1e0f0cu: goto label_1e0f0c;
        case 0x1e0f10u: goto label_1e0f10;
        case 0x1e0f14u: goto label_1e0f14;
        default: break;
    }

    ctx->pc = 0x1e0eb0u;

label_1e0eb0:
    // 0x1e0eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e0eb4:
    // 0x1e0eb4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e0eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e0eb8:
    // 0x1e0eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e0ebc:
    // 0x1e0ebc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e0ec0:
    // 0x1e0ec0: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x1e0ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1e0ec4:
    // 0x1e0ec4: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_1e0ec8:
    if (ctx->pc == 0x1E0EC8u) {
        ctx->pc = 0x1E0EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EC4u;
        // 0x1e0ec8: 0x8e050064  lw          $a1, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0ECCu;
        goto label_1e0ecc;
    }
    ctx->pc = 0x1E0EC4u;
    {
        const bool branch_taken_0x1e0ec4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0ec4) {
            ctx->pc = 0x1E0EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0EC4u;
            // 0x1e0ec8: 0x8e050064  lw          $a1, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0EE4u;
            goto label_1e0ee4;
        }
    }
    ctx->pc = 0x1E0ECCu;
label_1e0ecc:
    // 0x1e0ecc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e0eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e0ed0:
    // 0x1e0ed0: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1e0ed0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1e0ed4:
    // 0x1e0ed4: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1e0ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1e0ed8:
    // 0x1e0ed8: 0x60f809  jalr        $v1
label_1e0edc:
    if (ctx->pc == 0x1E0EDCu) {
        ctx->pc = 0x1E0EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0ED8u;
        // 0x1e0edc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0EE0u;
        goto label_1e0ee0;
    }
    ctx->pc = 0x1E0ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E0EE0u);
        ctx->pc = 0x1E0EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0ED8u;
        // 0x1e0edc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0ED8u, 0x1E0EE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0EE0u;
label_1e0ee0:
    // 0x1e0ee0: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x1e0ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_1e0ee4:
    // 0x1e0ee4: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_1e0ee8:
    if (ctx->pc == 0x1E0EE8u) {
        ctx->pc = 0x1E0EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EE4u;
        // 0x1e0ee8: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0EECu;
        goto label_1e0eec;
    }
    ctx->pc = 0x1E0EE4u;
    {
        const bool branch_taken_0x1e0ee4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0ee4) {
            ctx->pc = 0x1E0EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0EE4u;
            // 0x1e0ee8: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0F04u;
            goto label_1e0f04;
        }
    }
    ctx->pc = 0x1E0EECu;
label_1e0eec:
    // 0x1e0eec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e0ef0:
    // 0x1e0ef0: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1e0ef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1e0ef4:
    // 0x1e0ef4: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1e0ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1e0ef8:
    // 0x1e0ef8: 0x60f809  jalr        $v1
label_1e0efc:
    if (ctx->pc == 0x1E0EFCu) {
        ctx->pc = 0x1E0EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EF8u;
        // 0x1e0efc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0F00u;
        goto label_1e0f00;
    }
    ctx->pc = 0x1E0EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E0F00u);
        ctx->pc = 0x1E0EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0EF8u;
        // 0x1e0efc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0EF8u, 0x1E0F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0F00u;
label_1e0f00:
    // 0x1e0f00: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1e0f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_1e0f04:
    // 0x1e0f04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e0f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0f08:
    // 0x1e0f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0f0c:
    // 0x1e0f0c: 0x3e00008  jr          $ra
label_1e0f10:
    if (ctx->pc == 0x1E0F10u) {
        ctx->pc = 0x1E0F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F0Cu;
        // 0x1e0f10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0F14u;
        goto label_1e0f14;
    }
    ctx->pc = 0x1E0F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F0Cu;
        // 0x1e0f10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0F14u;
label_1e0f14:
    // 0x1e0f14: 0x0  nop
    ctx->pc = 0x1e0f14u;
    // NOP
    ctx->pc = 0x1e0f18u;
}
