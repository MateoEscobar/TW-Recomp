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

// Function: sub_0014DD78
// Address: 0x14dd78 - 0x14de28
void sub_0014DD78_0x14dd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DD78_0x14dd78");
#endif

    switch (ctx->pc) {
        case 0x14ddc4u: goto label_14ddc4;
        case 0x14ddccu: goto label_14ddcc;
        case 0x14de00u: goto label_14de00;
        case 0x14de0cu: goto label_14de0c;
        default: break;
    }

    ctx->pc = 0x14dd78u;

    // 0x14dd78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14dd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14dd7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14dd80: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14dd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14dd84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14dd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14dd88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14dd88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd8c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14dd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14dd90: 0x8444c238  lh          $a0, -0x3DC8($v0)
    ctx->pc = 0x14dd90u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x50C238u));
    // 0x14dd94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14dd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14dd98: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x14DD98u;
    {
        const bool branch_taken_0x14dd98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x14DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD98u;
        // 0x14dd9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd98) {
            ctx->pc = 0x14DDF4u;
            goto label_14ddf4;
        }
    }
    ctx->pc = 0x14DDA0u;
    // 0x14dda0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x14dda0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x14dda4: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x14dda4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x14dda8: 0x8e22c4f8  lw          $v0, -0x3B08($s1)
    ctx->pc = 0x14dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50C4F8u));
    // 0x14ddac: 0x26101dc0  addiu       $s0, $s0, 0x1DC0
    ctx->pc = 0x14ddacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7616));
    // 0x14ddb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14ddb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ddb4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x14ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x14ddb8: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x14ddb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14ddbc: 0xc10c366  jal         func_430D98
    ctx->pc = 0x14DDBCu;
    SET_GPR_U32(ctx, 31, 0x14DDC4u);
    ctx->pc = 0x14DDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DDBCu;
    // 0x14ddc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430D98u, 0x14DDBCu, 0x14DDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DDC4u;
label_14ddc4:
    // 0x14ddc4: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x14DDC4u;
    SET_GPR_U32(ctx, 31, 0x14DDCCu);
    ctx->pc = 0x14DDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DDC4u;
    // 0x14ddc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x14DDC4u, 0x14DDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DDCCu;
label_14ddcc:
    // 0x14ddcc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x14ddccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14ddd0: 0x8e24c4f8  lw          $a0, -0x3B08($s1)
    ctx->pc = 0x14ddd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952184)));
    // 0x14ddd4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x14ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x14ddd8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x14ddd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14dddc: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x14dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x14dde0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14dde4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x14dde4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x14dde8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14dde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14ddec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14DDECu;
    {
        const bool branch_taken_0x14ddec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DDECu;
        // 0x14ddf0: 0xae24c4f8  sw          $a0, -0x3B08($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294952184), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ddec) {
            ctx->pc = 0x14DE10u;
            goto label_14de10;
        }
    }
    ctx->pc = 0x14DDF4u;
label_14ddf4:
    // 0x14ddf4: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14ddf8: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14DDF8u;
    SET_GPR_U32(ctx, 31, 0x14DE00u);
    ctx->pc = 0x14DDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DDF8u;
    // 0x14ddfc: 0x2484b9c8  addiu       $a0, $a0, -0x4638 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14DDF8u, 0x14DE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DE00u;
label_14de00:
    // 0x14de00: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14de00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14de04: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14DE04u;
    SET_GPR_U32(ctx, 31, 0x14DE0Cu);
    ctx->pc = 0x14DE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DE04u;
    // 0x14de08: 0x2484b978  addiu       $a0, $a0, -0x4688 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14DE04u, 0x14DE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DE0Cu;
label_14de0c:
    // 0x14de0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14de0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14de10:
    // 0x14de10: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14de10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14de14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14de14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14de18: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14de18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14de1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14de1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14de20: 0x3e00008  jr          $ra
    ctx->pc = 0x14DE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE20u;
        // 0x14de24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DE28u;
}
