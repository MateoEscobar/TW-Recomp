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

// Function: sub_0027B1A0
// Address: 0x27b1a0 - 0x27b2a8
void sub_0027B1A0_0x27b1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B1A0_0x27b1a0");
#endif

    switch (ctx->pc) {
        case 0x27b1c0u: goto label_27b1c0;
        case 0x27b1e0u: goto label_27b1e0;
        case 0x27b228u: goto label_27b228;
        case 0x27b238u: goto label_27b238;
        case 0x27b244u: goto label_27b244;
        case 0x27b260u: goto label_27b260;
        case 0x27b270u: goto label_27b270;
        case 0x27b280u: goto label_27b280;
        default: break;
    }

    ctx->pc = 0x27b1a0u;

    // 0x27b1a0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x27b1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x27b1a4: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x27b1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x27b1a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27b1a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b1ac: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x27b1acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x27b1b0: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x27b1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x27b1b4: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x27b1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x27b1b8: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27B1B8u;
    SET_GPR_U32(ctx, 31, 0x27B1C0u);
    ctx->pc = 0x27B1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B1B8u;
    // 0x27b1bc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27B1B8u, 0x27B1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B1C0u;
label_27b1c0:
    // 0x27b1c0: 0x3c013f71  lui         $at, 0x3F71
    ctx->pc = 0x27b1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16241 << 16));
    // 0x27b1c4: 0x3421463b  ori         $at, $at, 0x463B
    ctx->pc = 0x27b1c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17979);
    // 0x27b1c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27b1c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b1cc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x27b1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x27b1d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27b1d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b1d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b1d8: 0xc087468  jal         func_21D1A0
    ctx->pc = 0x27B1D8u;
    SET_GPR_U32(ctx, 31, 0x27B1E0u);
    ctx->pc = 0x27B1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B1D8u;
    // 0x27b1dc: 0xe460096c  swc1        $f0, 0x96C($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2412), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D1A0u, 0x27B1D8u, 0x27B1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B1E0u;
label_27b1e0:
    // 0x27b1e0: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x27b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27b1e4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x27b1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x27b1e8: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x27b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x27b1ec: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x27b1ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
    // 0x27b1f0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x27b1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x27b1f4: 0x0  nop
    ctx->pc = 0x27b1f4u;
    // NOP
    // 0x27b1f8: 0x0  nop
    ctx->pc = 0x27b1f8u;
    // NOP
    // 0x27b1fc: 0x46140304  c1          0x140304
    ctx->pc = 0x27b1fcu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x27b200: 0x250891b0  addiu       $t0, $t0, -0x6E50
    ctx->pc = 0x27b200u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939056));
    // 0x27b204: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27b204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b208: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x27b208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27b20c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27b20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27b210: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27b210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b214: 0xac4000d8  sw          $zero, 0xD8($v0)
    ctx->pc = 0x27b214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 0));
    // 0x27b218: 0x86070092  lh          $a3, 0x92($s0)
    ctx->pc = 0x27b218u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x27b21c: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x27b21cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x27b220: 0xc089d66  jal         func_227598
    ctx->pc = 0x27B220u;
    SET_GPR_U32(ctx, 31, 0x27B228u);
    ctx->pc = 0x27B224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B220u;
    // 0x27b224: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227598u, 0x27B220u, 0x27B228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B228u;
label_27b228:
    // 0x27b228: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27B228u;
    {
        const bool branch_taken_0x27b228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B228u;
        // 0x27b22c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b228) {
            ctx->pc = 0x27B250u;
            goto label_27b250;
        }
    }
    ctx->pc = 0x27B230u;
    // 0x27b230: 0xc0e1a34  jal         func_3868D0
    ctx->pc = 0x27B230u;
    SET_GPR_U32(ctx, 31, 0x27B238u);
    ctx->pc = 0x27B234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B230u;
    // 0x27b234: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3868D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3868D0u, 0x27B230u, 0x27B238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B238u;
label_27b238:
    // 0x27b238: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x27b238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b23c: 0xc087090  jal         func_21C240
    ctx->pc = 0x27B23Cu;
    SET_GPR_U32(ctx, 31, 0x27B244u);
    ctx->pc = 0x27B240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B23Cu;
    // 0x27b240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C240u, 0x27B23Cu, 0x27B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B244u;
label_27b244:
    // 0x27b244: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27b244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b248: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27B248u;
    {
        const bool branch_taken_0x27b248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B248u;
        // 0x27b24c: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b248) {
            ctx->pc = 0x27B28Cu;
            goto label_27b28c;
        }
    }
    ctx->pc = 0x27B250u;
label_27b250:
    // 0x27b250: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x27B250u;
    {
        const bool branch_taken_0x27b250 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B250u;
        // 0x27b254: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b250) {
            ctx->pc = 0x27B290u;
            goto label_27b290;
        }
    }
    ctx->pc = 0x27B258u;
    // 0x27b258: 0xc089f86  jal         func_227E18
    ctx->pc = 0x27B258u;
    SET_GPR_U32(ctx, 31, 0x27B260u);
    ctx->pc = 0x27B25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B258u;
    // 0x27b25c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x27B258u, 0x27B260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B260u;
label_27b260:
    // 0x27b260: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x27B260u;
    {
        const bool branch_taken_0x27b260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b260) {
            ctx->pc = 0x27B264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B260u;
            // 0x27b264: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B28Cu;
            goto label_27b28c;
        }
    }
    ctx->pc = 0x27B268u;
    // 0x27b268: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x27B268u;
    SET_GPR_U32(ctx, 31, 0x27B270u);
    ctx->pc = 0x27B26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B268u;
    // 0x27b26c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x27B268u, 0x27B270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B270u;
label_27b270:
    // 0x27b270: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27B270u;
    {
        const bool branch_taken_0x27b270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b270) {
            ctx->pc = 0x27B274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B270u;
            // 0x27b274: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B28Cu;
            goto label_27b28c;
        }
    }
    ctx->pc = 0x27B278u;
    // 0x27b278: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x27B278u;
    SET_GPR_U32(ctx, 31, 0x27B280u);
    ctx->pc = 0x27B27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B278u;
    // 0x27b27c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x27B278u, 0x27B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B280u;
label_27b280:
    // 0x27b280: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B280u;
    {
        const bool branch_taken_0x27b280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B280u;
        // 0x27b284: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b280) {
            ctx->pc = 0x27B290u;
            goto label_27b290;
        }
    }
    ctx->pc = 0x27B288u;
    // 0x27b288: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27b288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b28c:
    // 0x27b28c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27b28cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27b290:
    // 0x27b290: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x27b290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x27b294: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x27b294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27b298: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x27b298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x27b29c: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x27b29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27b2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x27B2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B2A0u;
        // 0x27b2a4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B2A8u;
}
