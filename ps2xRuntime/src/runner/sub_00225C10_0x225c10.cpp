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

// Function: sub_00225C10
// Address: 0x225c10 - 0x225dc0
void sub_00225C10_0x225c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225C10_0x225c10");
#endif

    switch (ctx->pc) {
        case 0x225c28u: goto label_225c28;
        case 0x225c48u: goto label_225c48;
        case 0x225c58u: goto label_225c58;
        case 0x225c64u: goto label_225c64;
        case 0x225c78u: goto label_225c78;
        case 0x225c9cu: goto label_225c9c;
        case 0x225cccu: goto label_225ccc;
        case 0x225cd4u: goto label_225cd4;
        case 0x225ce8u: goto label_225ce8;
        case 0x225d00u: goto label_225d00;
        case 0x225d24u: goto label_225d24;
        case 0x225d38u: goto label_225d38;
        case 0x225d54u: goto label_225d54;
        case 0x225d6cu: goto label_225d6c;
        case 0x225d94u: goto label_225d94;
        case 0x225da4u: goto label_225da4;
        default: break;
    }

    ctx->pc = 0x225c10u;

    // 0x225c10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225c14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x225c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x225c18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x225c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x225c1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225c20: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x225C20u;
    SET_GPR_U32(ctx, 31, 0x225C28u);
    ctx->pc = 0x225C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C20u;
    // 0x225c24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x225C20u, 0x225C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C28u;
label_225c28:
    // 0x225c28: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x225c28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x225c2c: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x225C2Cu;
    {
        const bool branch_taken_0x225c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C2Cu;
        // 0x225c30: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225c2c) {
            ctx->pc = 0x225D48u;
            goto label_225d48;
        }
    }
    ctx->pc = 0x225C34u;
    // 0x225c34: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x225c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x225c38: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x225C38u;
    {
        const bool branch_taken_0x225c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C38u;
        // 0x225c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225c38) {
            ctx->pc = 0x225C94u;
            goto label_225c94;
        }
    }
    ctx->pc = 0x225C40u;
    // 0x225c40: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x225C40u;
    SET_GPR_U32(ctx, 31, 0x225C48u);
    ctx->pc = 0x225C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C40u;
    // 0x225c44: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x225C40u, 0x225C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C48u;
label_225c48:
    // 0x225c48: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x225C48u;
    {
        const bool branch_taken_0x225c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C48u;
        // 0x225c4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225c48) {
            ctx->pc = 0x225DACu;
            goto label_225dac;
        }
    }
    ctx->pc = 0x225C50u;
    // 0x225c50: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x225C50u;
    SET_GPR_U32(ctx, 31, 0x225C58u);
    ctx->pc = 0x225C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C50u;
    // 0x225c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x225C50u, 0x225C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C58u;
label_225c58:
    // 0x225c58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x225c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c5c: 0xc051fc6  jal         func_147F18
    ctx->pc = 0x225C5Cu;
    SET_GPR_U32(ctx, 31, 0x225C64u);
    ctx->pc = 0x225C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C5Cu;
    // 0x225c60: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147F18u, 0x225C5Cu, 0x225C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C64u;
label_225c64:
    // 0x225c64: 0x2c420065  sltiu       $v0, $v0, 0x65
    ctx->pc = 0x225c64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x225c68: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x225C68u;
    {
        const bool branch_taken_0x225c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C68u;
        // 0x225c6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225c68) {
            ctx->pc = 0x225C8Cu;
            goto label_225c8c;
        }
    }
    ctx->pc = 0x225C70u;
    // 0x225c70: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x225C70u;
    SET_GPR_U32(ctx, 31, 0x225C78u);
    ctx->pc = 0x225C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C70u;
    // 0x225c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x225C70u, 0x225C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C78u;
label_225c78:
    // 0x225c78: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x225C78u;
    {
        const bool branch_taken_0x225c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C78u;
        // 0x225c7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225c78) {
            ctx->pc = 0x225DACu;
            goto label_225dac;
        }
    }
    ctx->pc = 0x225C80u;
    // 0x225c80: 0x3c05efff  lui         $a1, 0xEFFF
    ctx->pc = 0x225c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61439 << 16));
    // 0x225c84: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x225C84u;
    {
        const bool branch_taken_0x225c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C84u;
        // 0x225c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225c84) {
            ctx->pc = 0x225D64u;
            goto label_225d64;
        }
    }
    ctx->pc = 0x225C8Cu;
label_225c8c:
    // 0x225c8c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x225C8Cu;
    {
        const bool branch_taken_0x225c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C8Cu;
        // 0x225c90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225c8c) {
            ctx->pc = 0x225DACu;
            goto label_225dac;
        }
    }
    ctx->pc = 0x225C94u;
label_225c94:
    // 0x225c94: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x225C94u;
    SET_GPR_U32(ctx, 31, 0x225C9Cu);
    ctx->pc = 0x225C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C94u;
    // 0x225c98: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x225C94u, 0x225C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C9Cu;
label_225c9c:
    // 0x225c9c: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x225c9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x225ca0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x225ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x225ca4: 0xc48102e8  lwc1        $f1, 0x2E8($a0)
    ctx->pc = 0x225ca4u;
    { uint32_t bits = FAST_READ32(0x5102E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225ca8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x225ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x225cac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225cb0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x225cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225cb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x225cb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225cb8: 0x0  nop
    ctx->pc = 0x225cb8u;
    // NOP
    // 0x225cbc: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x225CBCu;
    {
        const bool branch_taken_0x225cbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x225CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CBCu;
        // 0x225cc0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225cbc) {
            ctx->pc = 0x225DACu;
            goto label_225dac;
        }
    }
    ctx->pc = 0x225CC4u;
    // 0x225cc4: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x225CC4u;
    SET_GPR_U32(ctx, 31, 0x225CCCu);
    ctx->pc = 0x225CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225CC4u;
    // 0x225cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x225CC4u, 0x225CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225CCCu;
label_225ccc:
    // 0x225ccc: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x225CCCu;
    SET_GPR_U32(ctx, 31, 0x225CD4u);
    ctx->pc = 0x225CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225CCCu;
    // 0x225cd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x225CCCu, 0x225CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225CD4u;
label_225cd4:
    // 0x225cd4: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x225cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x225cd8: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x225CD8u;
    {
        const bool branch_taken_0x225cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CD8u;
        // 0x225cdc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225cd8) {
            ctx->pc = 0x225DACu;
            goto label_225dac;
        }
    }
    ctx->pc = 0x225CE0u;
    // 0x225ce0: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x225CE0u;
    SET_GPR_U32(ctx, 31, 0x225CE8u);
    ctx->pc = 0x225CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225CE0u;
    // 0x225ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x225CE0u, 0x225CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225CE8u;
label_225ce8:
    // 0x225ce8: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x225CE8u;
    {
        const bool branch_taken_0x225ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CE8u;
        // 0x225cec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ce8) {
            ctx->pc = 0x225DACu;
            goto label_225dac;
        }
    }
    ctx->pc = 0x225CF0u;
    // 0x225cf0: 0x3c05efff  lui         $a1, 0xEFFF
    ctx->pc = 0x225cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61439 << 16));
    // 0x225cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225cf8: 0xc089998  jal         func_226660
    ctx->pc = 0x225CF8u;
    SET_GPR_U32(ctx, 31, 0x225D00u);
    ctx->pc = 0x225CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225CF8u;
    // 0x225cfc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x225CF8u, 0x225D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D00u;
label_225d00:
    // 0x225d00: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x225D00u;
    {
        const bool branch_taken_0x225d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D00u;
        // 0x225d04: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d00) {
            ctx->pc = 0x225DACu;
            goto label_225dac;
        }
    }
    ctx->pc = 0x225D08u;
    // 0x225d08: 0x3405e607  ori         $a1, $zero, 0xE607
    ctx->pc = 0x225d08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58887);
    // 0x225d0c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x225d0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x225d10: 0x34a5cffc  ori         $a1, $a1, 0xCFFC
    ctx->pc = 0x225d10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53244);
    // 0x225d14: 0x528b8  dsll        $a1, $a1, 2
    ctx->pc = 0x225d14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 2);
    // 0x225d18: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x225d18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x225d1c: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x225D1Cu;
    SET_GPR_U32(ctx, 31, 0x225D24u);
    ctx->pc = 0x225D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225D1Cu;
    // 0x225d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x225D1Cu, 0x225D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D24u;
label_225d24:
    // 0x225d24: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x225D24u;
    {
        const bool branch_taken_0x225d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D24u;
        // 0x225d28: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d24) {
            ctx->pc = 0x225DACu;
            goto label_225dac;
        }
    }
    ctx->pc = 0x225D2Cu;
    // 0x225d2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225d30: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x225D30u;
    SET_GPR_U32(ctx, 31, 0x225D38u);
    ctx->pc = 0x225D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225D30u;
    // 0x225d34: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x225D30u, 0x225D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D38u;
label_225d38:
    // 0x225d38: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x225D38u;
    {
        const bool branch_taken_0x225d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D38u;
        // 0x225d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d38) {
            ctx->pc = 0x225D9Cu;
            goto label_225d9c;
        }
    }
    ctx->pc = 0x225D40u;
    // 0x225d40: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x225D40u;
    {
        const bool branch_taken_0x225d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D40u;
        // 0x225d44: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d40) {
            ctx->pc = 0x225D8Cu;
            goto label_225d8c;
        }
    }
    ctx->pc = 0x225D48u;
label_225d48:
    // 0x225d48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x225d48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225d4c: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x225D4Cu;
    SET_GPR_U32(ctx, 31, 0x225D54u);
    ctx->pc = 0x225D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225D4Cu;
    // 0x225d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x225D4Cu, 0x225D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D54u;
label_225d54:
    // 0x225d54: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x225D54u;
    {
        const bool branch_taken_0x225d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D54u;
        // 0x225d58: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d54) {
            ctx->pc = 0x225DACu;
            goto label_225dac;
        }
    }
    ctx->pc = 0x225D5Cu;
    // 0x225d5c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x225d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x225d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_225d64:
    // 0x225d64: 0xc089998  jal         func_226660
    ctx->pc = 0x225D64u;
    SET_GPR_U32(ctx, 31, 0x225D6Cu);
    ctx->pc = 0x225D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225D64u;
    // 0x225d68: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x225D64u, 0x225D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D6Cu;
label_225d6c:
    // 0x225d6c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x225D6Cu;
    {
        const bool branch_taken_0x225d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D6Cu;
        // 0x225d70: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d6c) {
            ctx->pc = 0x225DACu;
            goto label_225dac;
        }
    }
    ctx->pc = 0x225D74u;
    // 0x225d74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225d78: 0x3405e607  ori         $a1, $zero, 0xE607
    ctx->pc = 0x225d78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58887);
    // 0x225d7c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x225d7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x225d80: 0x34a5cffc  ori         $a1, $a1, 0xCFFC
    ctx->pc = 0x225d80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53244);
    // 0x225d84: 0x528b8  dsll        $a1, $a1, 2
    ctx->pc = 0x225d84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 2);
    // 0x225d88: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x225d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
label_225d8c:
    // 0x225d8c: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x225D8Cu;
    SET_GPR_U32(ctx, 31, 0x225D94u);
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x225D8Cu, 0x225D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D94u;
label_225d94:
    // 0x225d94: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x225D94u;
    {
        const bool branch_taken_0x225d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D94u;
        // 0x225d98: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d94) {
            ctx->pc = 0x225DACu;
            goto label_225dac;
        }
    }
    ctx->pc = 0x225D9Cu;
label_225d9c:
    // 0x225d9c: 0xc089000  jal         func_224000
    ctx->pc = 0x225D9Cu;
    SET_GPR_U32(ctx, 31, 0x225DA4u);
    ctx->pc = 0x225DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225D9Cu;
    // 0x225da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x225D9Cu, 0x225DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225DA4u;
label_225da4:
    // 0x225da4: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x225da4u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x225da8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x225da8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_225dac:
    // 0x225dac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x225dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225db0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225db4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225db8: 0x3e00008  jr          $ra
    ctx->pc = 0x225DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DB8u;
        // 0x225dbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225DC0u;
}
