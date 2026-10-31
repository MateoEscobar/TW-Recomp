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

// Function: sub_00230930
// Address: 0x230930 - 0x230d00
void sub_00230930_0x230930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230930_0x230930");
#endif

    switch (ctx->pc) {
        case 0x230964u: goto label_230964;
        case 0x230994u: goto label_230994;
        case 0x2309a4u: goto label_2309a4;
        case 0x2309bcu: goto label_2309bc;
        case 0x230a48u: goto label_230a48;
        case 0x230a74u: goto label_230a74;
        case 0x230a8cu: goto label_230a8c;
        case 0x230b7cu: goto label_230b7c;
        case 0x230bccu: goto label_230bcc;
        case 0x230c18u: goto label_230c18;
        case 0x230c5cu: goto label_230c5c;
        case 0x230c6cu: goto label_230c6c;
        case 0x230cacu: goto label_230cac;
        default: break;
    }

    ctx->pc = 0x230930u;

    // 0x230930: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x230930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x230934: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x230934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x230938: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x230938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x23093c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23093cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230940: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x230940u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x230944: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x230944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230948: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x230948u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23094c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x23094cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x230950: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x230950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x230954: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x230954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x230958: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x230958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x23095c: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x23095Cu;
    SET_GPR_U32(ctx, 31, 0x230964u);
    ctx->pc = 0x230960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23095Cu;
    // 0x230960: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x23095Cu, 0x230964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230964u;
label_230964:
    // 0x230964: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x230964u;
    {
        const bool branch_taken_0x230964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230964u;
        // 0x230968: 0x2e22000a  sltiu       $v0, $s1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230964) {
            ctx->pc = 0x230A40u;
            goto label_230a40;
        }
    }
    ctx->pc = 0x23096Cu;
    // 0x23096c: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x23096Cu;
    {
        const bool branch_taken_0x23096c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23096Cu;
        // 0x230970: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23096c) {
            ctx->pc = 0x230AB0u;
            goto label_230ab0;
        }
    }
    ctx->pc = 0x230974u;
    // 0x230974: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x230974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x230978: 0x2442c050  addiu       $v0, $v0, -0x3FB0
    ctx->pc = 0x230978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950992));
    // 0x23097c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23097cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230980: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x230980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230984: 0x800008  jr          $a0
    ctx->pc = 0x230984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23098Cu: goto label_23098c;
            case 0x2309D4u: goto label_2309d4;
            case 0x2309E0u: goto label_2309e0;
            case 0x2309ECu: goto label_2309ec;
            case 0x2309F8u: goto label_2309f8;
            case 0x230A04u: goto label_230a04;
            case 0x230A10u: goto label_230a10;
            case 0x230A1Cu: goto label_230a1c;
            case 0x230A28u: goto label_230a28;
            case 0x230A34u: goto label_230a34;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230984u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23098Cu;
label_23098c:
    // 0x23098c: 0xc088e98  jal         func_223A60
    ctx->pc = 0x23098Cu;
    SET_GPR_U32(ctx, 31, 0x230994u);
    ctx->pc = 0x230990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23098Cu;
    // 0x230990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x23098Cu, 0x230994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230994u;
label_230994:
    // 0x230994: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x230994u;
    {
        const bool branch_taken_0x230994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230994u;
        // 0x230998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230994) {
            ctx->pc = 0x2309ACu;
            goto label_2309ac;
        }
    }
    ctx->pc = 0x23099Cu;
    // 0x23099c: 0xc088ea6  jal         func_223A98
    ctx->pc = 0x23099Cu;
    SET_GPR_U32(ctx, 31, 0x2309A4u);
    ctx->pc = 0x2309A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23099Cu;
    // 0x2309a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x23099Cu, 0x2309A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2309A4u;
label_2309a4:
    // 0x2309a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2309A4u;
    {
        const bool branch_taken_0x2309a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2309A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2309A4u;
        // 0x2309a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309a4) {
            ctx->pc = 0x2309B4u;
            goto label_2309b4;
        }
    }
    ctx->pc = 0x2309ACu;
label_2309ac:
    // 0x2309ac: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2309ACu;
    {
        const bool branch_taken_0x2309ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2309B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2309ACu;
        // 0x2309b0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309ac) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x2309B4u;
label_2309b4:
    // 0x2309b4: 0xc088e90  jal         func_223A40
    ctx->pc = 0x2309B4u;
    SET_GPR_U32(ctx, 31, 0x2309BCu);
    ctx->pc = 0x2309B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2309B4u;
    // 0x2309b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A40u, 0x2309B4u, 0x2309BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2309BCu;
label_2309bc:
    // 0x2309bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2309BCu;
    {
        const bool branch_taken_0x2309bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2309C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2309BCu;
        // 0x2309c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309bc) {
            ctx->pc = 0x2309CCu;
            goto label_2309cc;
        }
    }
    ctx->pc = 0x2309C4u;
    // 0x2309c4: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x2309C4u;
    {
        const bool branch_taken_0x2309c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2309C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2309C4u;
        // 0x2309c8: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309c4) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x2309CCu;
label_2309cc:
    // 0x2309cc: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x2309CCu;
    {
        const bool branch_taken_0x2309cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2309D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2309CCu;
        // 0x2309d0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309cc) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x2309D4u;
label_2309d4:
    // 0x2309d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2309d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2309d8: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x2309D8u;
    {
        const bool branch_taken_0x2309d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2309DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2309D8u;
        // 0x2309dc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309d8) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x2309E0u;
label_2309e0:
    // 0x2309e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2309e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2309e4: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x2309E4u;
    {
        const bool branch_taken_0x2309e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2309E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2309E4u;
        // 0x2309e8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309e4) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x2309ECu;
label_2309ec:
    // 0x2309ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2309ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2309f0: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x2309F0u;
    {
        const bool branch_taken_0x2309f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2309F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2309F0u;
        // 0x2309f4: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309f0) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x2309F8u;
label_2309f8:
    // 0x2309f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2309f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2309fc: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x2309FCu;
    {
        const bool branch_taken_0x2309fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2309FCu;
        // 0x230a00: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309fc) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230A04u;
label_230a04:
    // 0x230a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a08: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x230A08u;
    {
        const bool branch_taken_0x230a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A08u;
        // 0x230a0c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a08) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230A10u;
label_230a10:
    // 0x230a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a14: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x230A14u;
    {
        const bool branch_taken_0x230a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A14u;
        // 0x230a18: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a14) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230A1Cu;
label_230a1c:
    // 0x230a1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a20: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x230A20u;
    {
        const bool branch_taken_0x230a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A20u;
        // 0x230a24: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a20) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230A28u;
label_230a28:
    // 0x230a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a2c: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x230A2Cu;
    {
        const bool branch_taken_0x230a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A2Cu;
        // 0x230a30: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a2c) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230A34u;
label_230a34:
    // 0x230a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a38: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x230A38u;
    {
        const bool branch_taken_0x230a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A38u;
        // 0x230a3c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a38) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230A40u;
label_230a40:
    // 0x230a40: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x230A40u;
    SET_GPR_U32(ctx, 31, 0x230A48u);
    ctx->pc = 0x230A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230A40u;
    // 0x230a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x230A40u, 0x230A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A48u;
label_230a48:
    // 0x230a48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x230a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230a4c: 0x54430019  bnel        $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x230A4Cu;
    {
        const bool branch_taken_0x230a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230a4c) {
            ctx->pc = 0x230A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230A4Cu;
            // 0x230a50: 0x2623fff6  addiu       $v1, $s1, -0xA (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967286));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230AB4u;
            goto label_230ab4;
        }
    }
    ctx->pc = 0x230A54u;
    // 0x230a54: 0x6200016  bltz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x230A54u;
    {
        const bool branch_taken_0x230a54 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x230A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A54u;
        // 0x230a58: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a54) {
            ctx->pc = 0x230AB0u;
            goto label_230ab0;
        }
    }
    ctx->pc = 0x230A5Cu;
    // 0x230a5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230A5Cu;
    {
        const bool branch_taken_0x230a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A5Cu;
        // 0x230a60: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a5c) {
            ctx->pc = 0x230A6Cu;
            goto label_230a6c;
        }
    }
    ctx->pc = 0x230A64u;
    // 0x230a64: 0x16220013  bne         $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x230A64u;
    {
        const bool branch_taken_0x230a64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x230A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A64u;
        // 0x230a68: 0x2623fff6  addiu       $v1, $s1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a64) {
            ctx->pc = 0x230AB4u;
            goto label_230ab4;
        }
    }
    ctx->pc = 0x230A6Cu;
label_230a6c:
    // 0x230a6c: 0xc087502  jal         func_21D408
    ctx->pc = 0x230A6Cu;
    SET_GPR_U32(ctx, 31, 0x230A74u);
    ctx->pc = 0x230A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230A6Cu;
    // 0x230a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x230A6Cu, 0x230A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A74u;
label_230a74:
    // 0x230a74: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x230a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x230a78: 0x38630005  xori        $v1, $v1, 0x5
    ctx->pc = 0x230a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
    // 0x230a7c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x230A7Cu;
    {
        const bool branch_taken_0x230a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x230A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A7Cu;
        // 0x230a80: 0x2623fff6  addiu       $v1, $s1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a7c) {
            ctx->pc = 0x230AB4u;
            goto label_230ab4;
        }
    }
    ctx->pc = 0x230A84u;
    // 0x230a84: 0xc0a5198  jal         func_294660
    ctx->pc = 0x230A84u;
    SET_GPR_U32(ctx, 31, 0x230A8Cu);
    ctx->pc = 0x294660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294660u, 0x230A84u, 0x230A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A8Cu;
label_230a8c:
    // 0x230a8c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x230a8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x230a90: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x230a90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230a94: 0x0  nop
    ctx->pc = 0x230a94u;
    // NOP
    // 0x230a98: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x230A98u;
    {
        const bool branch_taken_0x230a98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x230A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A98u;
        // 0x230a9c: 0x2623fff6  addiu       $v1, $s1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a98) {
            ctx->pc = 0x230AB4u;
            goto label_230ab4;
        }
    }
    ctx->pc = 0x230AA0u;
label_230aa0:
    // 0x230aa0: 0x3c014310  lui         $at, 0x4310
    ctx->pc = 0x230aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17168 << 16));
    // 0x230aa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x230aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230aa8: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x230AA8u;
    {
        const bool branch_taken_0x230aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230AA8u;
        // 0x230aac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230aa8) {
            ctx->pc = 0x230CE4u;
            goto label_230ce4;
        }
    }
    ctx->pc = 0x230AB0u;
label_230ab0:
    // 0x230ab0: 0x2623fff6  addiu       $v1, $s1, -0xA
    ctx->pc = 0x230ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967286));
label_230ab4:
    // 0x230ab4: 0x2c620017  sltiu       $v0, $v1, 0x17
    ctx->pc = 0x230ab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x230ab8: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x230AB8u;
    {
        const bool branch_taken_0x230ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230AB8u;
        // 0x230abc: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ab8) {
            ctx->pc = 0x230B74u;
            goto label_230b74;
        }
    }
    ctx->pc = 0x230AC0u;
    // 0x230ac0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x230ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x230ac4: 0x2442c080  addiu       $v0, $v0, -0x3F80
    ctx->pc = 0x230ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951040));
    // 0x230ac8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x230ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230acc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x230accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230ad0: 0x800008  jr          $a0
    ctx->pc = 0x230AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230AA0u: goto label_230aa0;
            case 0x230AD8u: goto label_230ad8;
            case 0x230AE4u: goto label_230ae4;
            case 0x230AF0u: goto label_230af0;
            case 0x230AFCu: goto label_230afc;
            case 0x230B08u: goto label_230b08;
            case 0x230B14u: goto label_230b14;
            case 0x230B20u: goto label_230b20;
            case 0x230B2Cu: goto label_230b2c;
            case 0x230B38u: goto label_230b38;
            case 0x230B44u: goto label_230b44;
            case 0x230B50u: goto label_230b50;
            case 0x230B5Cu: goto label_230b5c;
            case 0x230B68u: goto label_230b68;
            case 0x230B74u: goto label_230b74;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230AD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x230AD8u;
label_230ad8:
    // 0x230ad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230adc: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x230ADCu;
    {
        const bool branch_taken_0x230adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230ADCu;
        // 0x230ae0: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230adc) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230AE4u;
label_230ae4:
    // 0x230ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ae8: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x230AE8u;
    {
        const bool branch_taken_0x230ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230AE8u;
        // 0x230aec: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ae8) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230AF0u;
label_230af0:
    // 0x230af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230af4: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x230AF4u;
    {
        const bool branch_taken_0x230af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230AF4u;
        // 0x230af8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230af4) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230AFCu;
label_230afc:
    // 0x230afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b00: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x230B00u;
    {
        const bool branch_taken_0x230b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B00u;
        // 0x230b04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b00) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230B08u;
label_230b08:
    // 0x230b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b0c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x230B0Cu;
    {
        const bool branch_taken_0x230b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B0Cu;
        // 0x230b10: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b0c) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230B14u;
label_230b14:
    // 0x230b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b18: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x230B18u;
    {
        const bool branch_taken_0x230b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B18u;
        // 0x230b1c: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b18) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230B20u;
label_230b20:
    // 0x230b20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b24: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x230B24u;
    {
        const bool branch_taken_0x230b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B24u;
        // 0x230b28: 0x240500c1  addiu       $a1, $zero, 0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b24) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230B2Cu;
label_230b2c:
    // 0x230b2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b30: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x230B30u;
    {
        const bool branch_taken_0x230b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B30u;
        // 0x230b34: 0x240500c2  addiu       $a1, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b30) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230B38u;
label_230b38:
    // 0x230b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b3c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x230B3Cu;
    {
        const bool branch_taken_0x230b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B3Cu;
        // 0x230b40: 0x240500ed  addiu       $a1, $zero, 0xED (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b3c) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230B44u;
label_230b44:
    // 0x230b44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b48: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x230B48u;
    {
        const bool branch_taken_0x230b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B48u;
        // 0x230b4c: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b48) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230B50u;
label_230b50:
    // 0x230b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b54: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x230B54u;
    {
        const bool branch_taken_0x230b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B54u;
        // 0x230b58: 0x24050298  addiu       $a1, $zero, 0x298 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b54) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230B5Cu;
label_230b5c:
    // 0x230b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b60: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x230B60u;
    {
        const bool branch_taken_0x230b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B60u;
        // 0x230b64: 0x2405028d  addiu       $a1, $zero, 0x28D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 653));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b60) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230B68u;
label_230b68:
    // 0x230b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b6c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x230B6Cu;
    {
        const bool branch_taken_0x230b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B6Cu;
        // 0x230b70: 0x24050291  addiu       $a1, $zero, 0x291 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 657));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b6c) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230B74u;
label_230b74:
    // 0x230b74: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x230B74u;
    SET_GPR_U32(ctx, 31, 0x230B7Cu);
    ctx->pc = 0x230B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230B74u;
    // 0x230b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x230B74u, 0x230B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230B7Cu;
label_230b7c:
    // 0x230b7c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x230b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x230b80: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x230B80u;
    {
        const bool branch_taken_0x230b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230b80) {
            ctx->pc = 0x230BC4u;
            goto label_230bc4;
        }
    }
    ctx->pc = 0x230B88u;
    // 0x230b88: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x230B88u;
    {
        const bool branch_taken_0x230b88 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x230B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B88u;
        // 0x230b8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b88) {
            ctx->pc = 0x230B9Cu;
            goto label_230b9c;
        }
    }
    ctx->pc = 0x230B90u;
    // 0x230b90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b94: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x230B94u;
    {
        const bool branch_taken_0x230b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B94u;
        // 0x230b98: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b94) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230B9Cu;
label_230b9c:
    // 0x230b9c: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x230B9Cu;
    {
        const bool branch_taken_0x230b9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x230BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B9Cu;
        // 0x230ba0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b9c) {
            ctx->pc = 0x230BB0u;
            goto label_230bb0;
        }
    }
    ctx->pc = 0x230BA4u;
    // 0x230ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ba8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x230BA8u;
    {
        const bool branch_taken_0x230ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BA8u;
        // 0x230bac: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ba8) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230BB0u;
label_230bb0:
    // 0x230bb0: 0x5622004b  bnel        $s1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x230BB0u;
    {
        const bool branch_taken_0x230bb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x230bb0) {
            ctx->pc = 0x230BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230BB0u;
            // 0x230bb4: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x230CE0u;
            goto label_230ce0;
        }
    }
    ctx->pc = 0x230BB8u;
    // 0x230bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230bbc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x230BBCu;
    {
        const bool branch_taken_0x230bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BBCu;
        // 0x230bc0: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230bbc) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230BC4u;
label_230bc4:
    // 0x230bc4: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x230BC4u;
    SET_GPR_U32(ctx, 31, 0x230BCCu);
    ctx->pc = 0x230BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230BC4u;
    // 0x230bc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x230BC4u, 0x230BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230BCCu;
label_230bcc:
    // 0x230bcc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x230bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x230bd0: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x230BD0u;
    {
        const bool branch_taken_0x230bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230bd0) {
            ctx->pc = 0x230BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230BD0u;
            // 0x230bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230C10u;
            goto label_230c10;
        }
    }
    ctx->pc = 0x230BD8u;
    // 0x230bd8: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x230BD8u;
    {
        const bool branch_taken_0x230bd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x230BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BD8u;
        // 0x230bdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230bd8) {
            ctx->pc = 0x230BECu;
            goto label_230bec;
        }
    }
    ctx->pc = 0x230BE0u;
    // 0x230be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230be4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x230BE4u;
    {
        const bool branch_taken_0x230be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BE4u;
        // 0x230be8: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230be4) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230BECu;
label_230bec:
    // 0x230bec: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x230BECu;
    {
        const bool branch_taken_0x230bec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x230BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BECu;
        // 0x230bf0: 0x2a220006  slti        $v0, $s1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230bec) {
            ctx->pc = 0x230C00u;
            goto label_230c00;
        }
    }
    ctx->pc = 0x230BF4u;
    // 0x230bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230bf8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x230BF8u;
    {
        const bool branch_taken_0x230bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BF8u;
        // 0x230bfc: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230bf8) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230C00u;
label_230c00:
    // 0x230c00: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x230C00u;
    {
        const bool branch_taken_0x230c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C00u;
        // 0x230c04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c00) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230C08u;
    // 0x230c08: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x230C08u;
    {
        const bool branch_taken_0x230c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C08u;
        // 0x230c0c: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c08) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230C10u;
label_230c10:
    // 0x230c10: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x230C10u;
    SET_GPR_U32(ctx, 31, 0x230C18u);
    ctx->pc = 0x230C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230C10u;
    // 0x230c14: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x230C10u, 0x230C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C18u;
label_230c18:
    // 0x230c18: 0x14520012  bne         $v0, $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x230C18u;
    {
        const bool branch_taken_0x230c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x230c18) {
            ctx->pc = 0x230C64u;
            goto label_230c64;
        }
    }
    ctx->pc = 0x230C20u;
    // 0x230c20: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x230C20u;
    {
        const bool branch_taken_0x230c20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x230C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C20u;
        // 0x230c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c20) {
            ctx->pc = 0x230C30u;
            goto label_230c30;
        }
    }
    ctx->pc = 0x230C28u;
    // 0x230c28: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x230C28u;
    {
        const bool branch_taken_0x230c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C28u;
        // 0x230c2c: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c28) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230C30u;
label_230c30:
    // 0x230c30: 0x16320004  bne         $s1, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x230C30u;
    {
        const bool branch_taken_0x230c30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x230C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C30u;
        // 0x230c34: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c30) {
            ctx->pc = 0x230C44u;
            goto label_230c44;
        }
    }
    ctx->pc = 0x230C38u;
    // 0x230c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230c3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x230C3Cu;
    {
        const bool branch_taken_0x230c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C3Cu;
        // 0x230c40: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c3c) {
            ctx->pc = 0x230C54u;
            goto label_230c54;
        }
    }
    ctx->pc = 0x230C44u;
label_230c44:
    // 0x230c44: 0x56220026  bnel        $s1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x230C44u;
    {
        const bool branch_taken_0x230c44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x230c44) {
            ctx->pc = 0x230C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230C44u;
            // 0x230c48: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x230CE0u;
            goto label_230ce0;
        }
    }
    ctx->pc = 0x230C4Cu;
    // 0x230c4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230c50: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x230c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_230c54:
    // 0x230c54: 0xc095142  jal         func_254508
    ctx->pc = 0x230C54u;
    SET_GPR_U32(ctx, 31, 0x230C5Cu);
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x230C54u, 0x230C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C5Cu;
label_230c5c:
    // 0x230c5c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x230C5Cu;
    {
        const bool branch_taken_0x230c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C5Cu;
        // 0x230c60: 0x46000002  mul.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c5c) {
            ctx->pc = 0x230CE0u;
            goto label_230ce0;
        }
    }
    ctx->pc = 0x230C64u;
label_230c64:
    // 0x230c64: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x230C64u;
    SET_GPR_U32(ctx, 31, 0x230C6Cu);
    ctx->pc = 0x230C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230C64u;
    // 0x230c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x230C64u, 0x230C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C6Cu;
label_230c6c:
    // 0x230c6c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x230c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230c70: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x230C70u;
    {
        const bool branch_taken_0x230c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230c70) {
            ctx->pc = 0x230CA4u;
            goto label_230ca4;
        }
    }
    ctx->pc = 0x230C78u;
    // 0x230c78: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x230C78u;
    {
        const bool branch_taken_0x230c78 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x230C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C78u;
        // 0x230c7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c78) {
            ctx->pc = 0x230C8Cu;
            goto label_230c8c;
        }
    }
    ctx->pc = 0x230C80u;
    // 0x230c80: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x230c80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x230c84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x230c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230c88: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x230c88u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_230c8c:
    // 0x230c8c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x230C8Cu;
    {
        const bool branch_taken_0x230c8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C8Cu;
        // 0x230c90: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c8c) {
            ctx->pc = 0x230CDCu;
            goto label_230cdc;
        }
    }
    ctx->pc = 0x230C94u;
    // 0x230c94: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x230c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
    // 0x230c98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x230c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230c9c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x230C9Cu;
    {
        const bool branch_taken_0x230c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C9Cu;
        // 0x230ca0: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c9c) {
            ctx->pc = 0x230CE8u;
            goto label_230ce8;
        }
    }
    ctx->pc = 0x230CA4u;
label_230ca4:
    // 0x230ca4: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x230CA4u;
    SET_GPR_U32(ctx, 31, 0x230CACu);
    ctx->pc = 0x230CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230CA4u;
    // 0x230ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x230CA4u, 0x230CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230CACu;
label_230cac:
    // 0x230cac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x230cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x230cb0: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x230CB0u;
    {
        const bool branch_taken_0x230cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230cb0) {
            ctx->pc = 0x230CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230CB0u;
            // 0x230cb4: 0x4615a802  mul.s       $f0, $f21, $f21 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x230CE0u;
            goto label_230ce0;
        }
    }
    ctx->pc = 0x230CB8u;
    // 0x230cb8: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x230CB8u;
    {
        const bool branch_taken_0x230cb8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x230CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CB8u;
        // 0x230cbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230cb8) {
            ctx->pc = 0x230CCCu;
            goto label_230ccc;
        }
    }
    ctx->pc = 0x230CC0u;
    // 0x230cc0: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x230cc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x230cc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x230cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230cc8: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x230cc8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_230ccc:
    // 0x230ccc: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x230cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
    // 0x230cd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x230cd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230cd4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230CD4u;
    {
        const bool branch_taken_0x230cd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x230CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CD4u;
        // 0x230cd8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230cd4) {
            ctx->pc = 0x230CE4u;
            goto label_230ce4;
        }
    }
    ctx->pc = 0x230CDCu;
label_230cdc:
    // 0x230cdc: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x230cdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
label_230ce0:
    // 0x230ce0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x230ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_230ce4:
    // 0x230ce4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x230ce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_230ce8:
    // 0x230ce8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x230ce8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230cec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x230cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230cf0: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x230cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x230cf4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x230cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x230cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x230CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CF8u;
        // 0x230cfc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230D00u;
}
