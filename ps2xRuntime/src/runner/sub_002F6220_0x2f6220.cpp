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

// Function: sub_002F6220
// Address: 0x2f6220 - 0x2f6318
void sub_002F6220_0x2f6220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6220_0x2f6220");
#endif

    switch (ctx->pc) {
        case 0x2f6290u: goto label_2f6290;
        case 0x2f6298u: goto label_2f6298;
        case 0x2f62a0u: goto label_2f62a0;
        case 0x2f62c4u: goto label_2f62c4;
        default: break;
    }

    ctx->pc = 0x2f6220u;

    // 0x2f6220: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2f6220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f6224: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2f6224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2f6228: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f6228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2f622c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f622cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6230: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2f6230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2f6234: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f6234u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6238: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2f6238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2f623c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2f623cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2f6240: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2f6240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2f6244: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2f6244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2f6248: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f6248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f624c: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2f624cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x2f6250: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2f6250u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x2f6254: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f6254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f6258: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f6258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f625c: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2f625cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2f6260: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2f6260u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f6264: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2f6264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
    // 0x2f6268: 0x8c45020c  lw          $a1, 0x20C($v0)
    ctx->pc = 0x2f6268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x2f626c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2f626cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6270: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x2f6270u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x2f6274: 0x24b40048  addiu       $s4, $a1, 0x48
    ctx->pc = 0x2f6274u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
    // 0x2f6278: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f6278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2f627c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f627cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f6280: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2f6280u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f6284: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2f6284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2f6288: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f6288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f628c: 0x0  nop
    ctx->pc = 0x2f628cu;
    // NOP
label_2f6290:
    // 0x2f6290: 0xc137826  jal         func_4DE098
    ctx->pc = 0x2F6290u;
    SET_GPR_U32(ctx, 31, 0x2F6298u);
    ctx->pc = 0x2F6294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6290u;
    // 0x2f6294: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2F6290u, 0x2F6298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6298u;
label_2f6298:
    // 0x2f6298: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2F6298u;
    SET_GPR_U32(ctx, 31, 0x2F62A0u);
    ctx->pc = 0x2F629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6298u;
    // 0x2f629c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F6298u, 0x2F62A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F62A0u;
label_2f62a0:
    // 0x2f62a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f62a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f62a4: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2F62A4u;
    {
        const bool branch_taken_0x2f62a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f62a4) {
            ctx->pc = 0x2F62A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F62A4u;
            // 0x2f62a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F62E0u;
            goto label_2f62e0;
        }
    }
    ctx->pc = 0x2F62ACu;
    // 0x2f62ac: 0x1212000b  beq         $s0, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x2F62ACu;
    {
        const bool branch_taken_0x2f62ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x2F62B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F62ACu;
        // 0x2f62b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f62ac) {
            ctx->pc = 0x2F62DCu;
            goto label_2f62dc;
        }
    }
    ctx->pc = 0x2F62B4u;
    // 0x2f62b4: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x2f62b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2f62b8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2f62b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2f62bc: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2F62BCu;
    SET_GPR_U32(ctx, 31, 0x2F62C4u);
    ctx->pc = 0x2F62C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F62BCu;
    // 0x2f62c0: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2F62BCu, 0x2F62C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F62C4u;
label_2f62c4:
    // 0x2f62c4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2f62c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f62c8: 0x0  nop
    ctx->pc = 0x2f62c8u;
    // NOP
    // 0x2f62cc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2F62CCu;
    {
        const bool branch_taken_0x2f62cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f62cc) {
            ctx->pc = 0x2F62D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F62CCu;
            // 0x2f62d0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F62E0u;
            goto label_2f62e0;
        }
    }
    ctx->pc = 0x2F62D4u;
    // 0x2f62d4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2f62d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2f62d8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2f62d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f62dc:
    // 0x2f62dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f62dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2f62e0:
    // 0x2f62e0: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x2f62e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2f62e4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2F62E4u;
    {
        const bool branch_taken_0x2f62e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F62E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F62E4u;
        // 0x2f62e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f62e4) {
            ctx->pc = 0x2F6290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6290;
        }
    }
    ctx->pc = 0x2F62ECu;
    // 0x2f62ec: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2f62ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f62f0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2f62f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f62f4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2f62f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f62f8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2f62f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f62fc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f62fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f6300: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2f6300u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6304: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2f6304u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6308: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f6308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f630c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2f630cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f6310: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6310u;
        // 0x2f6314: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6318u;
}
