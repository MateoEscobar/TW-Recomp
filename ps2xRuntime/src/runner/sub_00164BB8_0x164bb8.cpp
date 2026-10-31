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

// Function: sub_00164BB8
// Address: 0x164bb8 - 0x164c10
void sub_00164BB8_0x164bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164BB8_0x164bb8");
#endif

    switch (ctx->pc) {
        case 0x164bb8u: goto label_164bb8;
        case 0x164bbcu: goto label_164bbc;
        case 0x164bc0u: goto label_164bc0;
        case 0x164bc4u: goto label_164bc4;
        case 0x164bc8u: goto label_164bc8;
        case 0x164bccu: goto label_164bcc;
        case 0x164bd0u: goto label_164bd0;
        case 0x164bd4u: goto label_164bd4;
        case 0x164bd8u: goto label_164bd8;
        case 0x164bdcu: goto label_164bdc;
        case 0x164be0u: goto label_164be0;
        case 0x164be4u: goto label_164be4;
        case 0x164be8u: goto label_164be8;
        case 0x164becu: goto label_164bec;
        case 0x164bf0u: goto label_164bf0;
        case 0x164bf4u: goto label_164bf4;
        case 0x164bf8u: goto label_164bf8;
        case 0x164bfcu: goto label_164bfc;
        case 0x164c00u: goto label_164c00;
        case 0x164c04u: goto label_164c04;
        case 0x164c08u: goto label_164c08;
        case 0x164c0cu: goto label_164c0c;
        default: break;
    }

    ctx->pc = 0x164bb8u;

label_164bb8:
    // 0x164bb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x164bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_164bbc:
    // 0x164bbc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x164bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_164bc0:
    // 0x164bc0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x164bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_164bc4:
    // 0x164bc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x164bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_164bc8:
    // 0x164bc8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x164bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_164bcc:
    // 0x164bcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_164bd0:
    // 0x164bd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x164bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_164bd4:
    // 0x164bd4: 0x8c472b04  lw          $a3, 0x2B04($v0)
    ctx->pc = 0x164bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_164bd8:
    // 0x164bd8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x164bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_164bdc:
    // 0x164bdc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x164bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_164be0:
    // 0x164be0: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x164be0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_164be4:
    // 0x164be4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x164be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_164be8:
    // 0x164be8: 0x40f809  jalr        $v0
label_164bec:
    if (ctx->pc == 0x164BECu) {
        ctx->pc = 0x164BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164BE8u;
        // 0x164bec: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164BF0u;
        goto label_164bf0;
    }
    ctx->pc = 0x164BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164BF0u);
        ctx->pc = 0x164BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164BE8u;
        // 0x164bec: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164BE8u, 0x164BF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x164BF0u;
label_164bf0:
    // 0x164bf0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x164bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_164bf4:
    // 0x164bf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x164bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_164bf8:
    // 0x164bf8: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x164bf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_164bfc:
    // 0x164bfc: 0xae2200e4  sw          $v0, 0xE4($s1)
    ctx->pc = 0x164bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 2));
label_164c00:
    // 0x164c00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x164c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_164c04:
    // 0x164c04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x164c04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_164c08:
    // 0x164c08: 0x3e00008  jr          $ra
label_164c0c:
    if (ctx->pc == 0x164C0Cu) {
        ctx->pc = 0x164C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C08u;
        // 0x164c0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164C10u;
        goto label_fallthrough_0x164c08;
    }
    ctx->pc = 0x164C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C08u;
        // 0x164c0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x164c08:
    ctx->pc = 0x164C10u;
}
