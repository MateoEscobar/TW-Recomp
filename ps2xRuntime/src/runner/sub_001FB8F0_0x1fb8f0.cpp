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

// Function: sub_001FB8F0
// Address: 0x1fb8f0 - 0x1fba78
void sub_001FB8F0_0x1fb8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB8F0_0x1fb8f0");
#endif

    switch (ctx->pc) {
        case 0x1fb8f0u: goto label_1fb8f0;
        case 0x1fb8f4u: goto label_1fb8f4;
        case 0x1fb8f8u: goto label_1fb8f8;
        case 0x1fb8fcu: goto label_1fb8fc;
        case 0x1fb900u: goto label_1fb900;
        case 0x1fb904u: goto label_1fb904;
        case 0x1fb908u: goto label_1fb908;
        case 0x1fb90cu: goto label_1fb90c;
        case 0x1fb910u: goto label_1fb910;
        case 0x1fb914u: goto label_1fb914;
        case 0x1fb918u: goto label_1fb918;
        case 0x1fb91cu: goto label_1fb91c;
        case 0x1fb920u: goto label_1fb920;
        case 0x1fb924u: goto label_1fb924;
        case 0x1fb928u: goto label_1fb928;
        case 0x1fb92cu: goto label_1fb92c;
        case 0x1fb930u: goto label_1fb930;
        case 0x1fb934u: goto label_1fb934;
        case 0x1fb938u: goto label_1fb938;
        case 0x1fb93cu: goto label_1fb93c;
        case 0x1fb940u: goto label_1fb940;
        case 0x1fb944u: goto label_1fb944;
        case 0x1fb948u: goto label_1fb948;
        case 0x1fb94cu: goto label_1fb94c;
        case 0x1fb950u: goto label_1fb950;
        case 0x1fb954u: goto label_1fb954;
        case 0x1fb958u: goto label_1fb958;
        case 0x1fb95cu: goto label_1fb95c;
        case 0x1fb960u: goto label_1fb960;
        case 0x1fb964u: goto label_1fb964;
        case 0x1fb968u: goto label_1fb968;
        case 0x1fb96cu: goto label_1fb96c;
        case 0x1fb970u: goto label_1fb970;
        case 0x1fb974u: goto label_1fb974;
        case 0x1fb978u: goto label_1fb978;
        case 0x1fb97cu: goto label_1fb97c;
        case 0x1fb980u: goto label_1fb980;
        case 0x1fb984u: goto label_1fb984;
        case 0x1fb988u: goto label_1fb988;
        case 0x1fb98cu: goto label_1fb98c;
        case 0x1fb990u: goto label_1fb990;
        case 0x1fb994u: goto label_1fb994;
        case 0x1fb998u: goto label_1fb998;
        case 0x1fb99cu: goto label_1fb99c;
        case 0x1fb9a0u: goto label_1fb9a0;
        case 0x1fb9a4u: goto label_1fb9a4;
        case 0x1fb9a8u: goto label_1fb9a8;
        case 0x1fb9acu: goto label_1fb9ac;
        case 0x1fb9b0u: goto label_1fb9b0;
        case 0x1fb9b4u: goto label_1fb9b4;
        case 0x1fb9b8u: goto label_1fb9b8;
        case 0x1fb9bcu: goto label_1fb9bc;
        case 0x1fb9c0u: goto label_1fb9c0;
        case 0x1fb9c4u: goto label_1fb9c4;
        case 0x1fb9c8u: goto label_1fb9c8;
        case 0x1fb9ccu: goto label_1fb9cc;
        case 0x1fb9d0u: goto label_1fb9d0;
        case 0x1fb9d4u: goto label_1fb9d4;
        case 0x1fb9d8u: goto label_1fb9d8;
        case 0x1fb9dcu: goto label_1fb9dc;
        case 0x1fb9e0u: goto label_1fb9e0;
        case 0x1fb9e4u: goto label_1fb9e4;
        case 0x1fb9e8u: goto label_1fb9e8;
        case 0x1fb9ecu: goto label_1fb9ec;
        case 0x1fb9f0u: goto label_1fb9f0;
        case 0x1fb9f4u: goto label_1fb9f4;
        case 0x1fb9f8u: goto label_1fb9f8;
        case 0x1fb9fcu: goto label_1fb9fc;
        case 0x1fba00u: goto label_1fba00;
        case 0x1fba04u: goto label_1fba04;
        case 0x1fba08u: goto label_1fba08;
        case 0x1fba0cu: goto label_1fba0c;
        case 0x1fba10u: goto label_1fba10;
        case 0x1fba14u: goto label_1fba14;
        case 0x1fba18u: goto label_1fba18;
        case 0x1fba1cu: goto label_1fba1c;
        case 0x1fba20u: goto label_1fba20;
        case 0x1fba24u: goto label_1fba24;
        case 0x1fba28u: goto label_1fba28;
        case 0x1fba2cu: goto label_1fba2c;
        case 0x1fba30u: goto label_1fba30;
        case 0x1fba34u: goto label_1fba34;
        case 0x1fba38u: goto label_1fba38;
        case 0x1fba3cu: goto label_1fba3c;
        case 0x1fba40u: goto label_1fba40;
        case 0x1fba44u: goto label_1fba44;
        case 0x1fba48u: goto label_1fba48;
        case 0x1fba4cu: goto label_1fba4c;
        case 0x1fba50u: goto label_1fba50;
        case 0x1fba54u: goto label_1fba54;
        case 0x1fba58u: goto label_1fba58;
        case 0x1fba5cu: goto label_1fba5c;
        case 0x1fba60u: goto label_1fba60;
        case 0x1fba64u: goto label_1fba64;
        case 0x1fba68u: goto label_1fba68;
        case 0x1fba6cu: goto label_1fba6c;
        case 0x1fba70u: goto label_1fba70;
        case 0x1fba74u: goto label_1fba74;
        default: break;
    }

    ctx->pc = 0x1fb8f0u;

label_1fb8f0:
    // 0x1fb8f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fb8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1fb8f4:
    // 0x1fb8f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fb8f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb8f8:
    // 0x1fb8f8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fb8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1fb8fc:
    // 0x1fb8fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fb8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1fb900:
    // 0x1fb900: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fb900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fb904:
    // 0x1fb904: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1fb904u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1fb908:
    // 0x1fb908: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fb908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fb90c:
    // 0x1fb90c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1fb90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1fb910:
    // 0x1fb910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fb910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb914:
    // 0x1fb914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fb914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fb918:
    // 0x1fb918: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1fb918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_1fb91c:
    // 0x1fb91c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1fb91cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1fb920:
    // 0x1fb920: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1fb920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1fb924:
    // 0x1fb924: 0x8e070090  lw          $a3, 0x90($s0)
    ctx->pc = 0x1fb924u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1fb928:
    // 0x1fb928: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1fb928u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1fb92c:
    // 0x1fb92c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1fb92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1fb930:
    // 0x1fb930: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1fb930u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_1fb934:
    // 0x1fb934: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x1fb934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1fb938:
    // 0x1fb938: 0x60f809  jalr        $v1
label_1fb93c:
    if (ctx->pc == 0x1FB93Cu) {
        ctx->pc = 0x1FB93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB938u;
        // 0x1fb93c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB940u;
        goto label_1fb940;
    }
    ctx->pc = 0x1FB938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FB940u);
        ctx->pc = 0x1FB93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB938u;
        // 0x1fb93c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB938u, 0x1FB940u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB940u;
label_1fb940:
    // 0x1fb940: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1fb940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1fb944:
    // 0x1fb944: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
label_1fb948:
    if (ctx->pc == 0x1FB948u) {
        ctx->pc = 0x1FB948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB944u;
        // 0x1fb948: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB94Cu;
        goto label_1fb94c;
    }
    ctx->pc = 0x1FB944u;
    {
        const bool branch_taken_0x1fb944 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fb944) {
            ctx->pc = 0x1FB948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB944u;
            // 0x1fb948: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB960u;
            goto label_1fb960;
        }
    }
    ctx->pc = 0x1FB94Cu;
label_1fb94c:
    // 0x1fb94c: 0xc07f87e  jal         func_1FE1F8
label_1fb950:
    if (ctx->pc == 0x1FB950u) {
        ctx->pc = 0x1FB950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB94Cu;
        // 0x1fb950: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB954u;
        goto label_1fb954;
    }
    ctx->pc = 0x1FB94Cu;
    SET_GPR_U32(ctx, 31, 0x1FB954u);
    ctx->pc = 0x1FB950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB94Cu;
    // 0x1fb950: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1F8u, 0x1FB94Cu, 0x1FB954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB954u;
label_1fb954:
    // 0x1fb954: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fb954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1fb958:
    // 0x1fb958: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1fb95c:
    if (ctx->pc == 0x1FB95Cu) {
        ctx->pc = 0x1FB95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB958u;
        // 0x1fb95c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB960u;
        goto label_1fb960;
    }
    ctx->pc = 0x1FB958u;
    {
        const bool branch_taken_0x1fb958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB958u;
        // 0x1fb95c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb958) {
            ctx->pc = 0x1FBA4Cu;
            goto label_1fba4c;
        }
    }
    ctx->pc = 0x1FB960u;
label_1fb960:
    // 0x1fb960: 0x1622003d  bne         $s1, $v0, . + 4 + (0x3D << 2)
label_1fb964:
    if (ctx->pc == 0x1FB964u) {
        ctx->pc = 0x1FB964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB960u;
        // 0x1fb964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB968u;
        goto label_1fb968;
    }
    ctx->pc = 0x1FB960u;
    {
        const bool branch_taken_0x1fb960 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FB964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB960u;
        // 0x1fb964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb960) {
            ctx->pc = 0x1FBA58u;
            goto label_1fba58;
        }
    }
    ctx->pc = 0x1FB968u;
label_1fb968:
    // 0x1fb968: 0xc0750fa  jal         func_1D43E8
label_1fb96c:
    if (ctx->pc == 0x1FB96Cu) {
        ctx->pc = 0x1FB96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB968u;
        // 0x1fb96c: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB970u;
        goto label_1fb970;
    }
    ctx->pc = 0x1FB968u;
    SET_GPR_U32(ctx, 31, 0x1FB970u);
    ctx->pc = 0x1FB96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB968u;
    // 0x1fb96c: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x1FB968u, 0x1FB970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB970u;
label_1fb970:
    // 0x1fb970: 0x8e040094  lw          $a0, 0x94($s0)
    ctx->pc = 0x1fb970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1fb974:
    // 0x1fb974: 0xc0750fc  jal         func_1D43F0
label_1fb978:
    if (ctx->pc == 0x1FB978u) {
        ctx->pc = 0x1FB978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB974u;
        // 0x1fb978: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB97Cu;
        goto label_1fb97c;
    }
    ctx->pc = 0x1FB974u;
    SET_GPR_U32(ctx, 31, 0x1FB97Cu);
    ctx->pc = 0x1FB978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB974u;
    // 0x1fb978: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43F0u, 0x1FB974u, 0x1FB97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB97Cu;
label_1fb97c:
    // 0x1fb97c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fb97cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb980:
    // 0x1fb980: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb984:
    // 0x1fb984: 0x16420024  bne         $s2, $v0, . + 4 + (0x24 << 2)
label_1fb988:
    if (ctx->pc == 0x1FB988u) {
        ctx->pc = 0x1FB988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB984u;
        // 0x1fb988: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB98Cu;
        goto label_1fb98c;
    }
    ctx->pc = 0x1FB984u;
    {
        const bool branch_taken_0x1fb984 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FB988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB984u;
        // 0x1fb988: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb984) {
            ctx->pc = 0x1FBA18u;
            goto label_1fba18;
        }
    }
    ctx->pc = 0x1FB98Cu;
label_1fb98c:
    // 0x1fb98c: 0x2451ef80  addiu       $s1, $v0, -0x1080
    ctx->pc = 0x1fb98cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963072));
label_1fb990:
    // 0x1fb990: 0xc080ada  jal         func_202B68
label_1fb994:
    if (ctx->pc == 0x1FB994u) {
        ctx->pc = 0x1FB994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB990u;
        // 0x1fb994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB998u;
        goto label_1fb998;
    }
    ctx->pc = 0x1FB990u;
    SET_GPR_U32(ctx, 31, 0x1FB998u);
    ctx->pc = 0x1FB994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB990u;
    // 0x1fb994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B68u, 0x1FB990u, 0x1FB998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB998u;
label_1fb998:
    // 0x1fb998: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1fb998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1fb99c:
    // 0x1fb99c: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
label_1fb9a0:
    if (ctx->pc == 0x1FB9A0u) {
        ctx->pc = 0x1FB9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB99Cu;
        // 0x1fb9a0: 0x2404003e  addiu       $a0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB9A4u;
        goto label_1fb9a4;
    }
    ctx->pc = 0x1FB99Cu;
    {
        const bool branch_taken_0x1fb99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FB9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB99Cu;
        // 0x1fb9a0: 0x2404003e  addiu       $a0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb99c) {
            ctx->pc = 0x1FB9E8u;
            goto label_1fb9e8;
        }
    }
    ctx->pc = 0x1FB9A4u;
label_1fb9a4:
    // 0x1fb9a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fb9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1fb9a8:
    // 0x1fb9a8: 0x8e110090  lw          $s1, 0x90($s0)
    ctx->pc = 0x1fb9a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1fb9ac:
    // 0x1fb9ac: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1fb9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_1fb9b0:
    // 0x1fb9b0: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x1fb9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_1fb9b4:
    // 0x1fb9b4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1fb9b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fb9b8:
    // 0x1fb9b8: 0x860200a0  lh          $v0, 0xA0($s0)
    ctx->pc = 0x1fb9b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 160)));
label_1fb9bc:
    // 0x1fb9bc: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x1fb9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_1fb9c0:
    // 0x1fb9c0: 0xc067b9c  jal         func_19EE70
label_1fb9c4:
    if (ctx->pc == 0x1FB9C4u) {
        ctx->pc = 0x1FB9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9C0u;
        // 0x1fb9c4: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB9C8u;
        goto label_1fb9c8;
    }
    ctx->pc = 0x1FB9C0u;
    SET_GPR_U32(ctx, 31, 0x1FB9C8u);
    ctx->pc = 0x1FB9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB9C0u;
    // 0x1fb9c4: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1FB9C0u, 0x1FB9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB9C8u;
label_1fb9c8:
    // 0x1fb9c8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1fb9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fb9cc:
    // 0x1fb9cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fb9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fb9d0:
    // 0x1fb9d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fb9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb9d4:
    // 0x1fb9d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1fb9d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1fb9d8:
    // 0x1fb9d8: 0x60f809  jalr        $v1
label_1fb9dc:
    if (ctx->pc == 0x1FB9DCu) {
        ctx->pc = 0x1FB9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9D8u;
        // 0x1fb9dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB9E0u;
        goto label_1fb9e0;
    }
    ctx->pc = 0x1FB9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FB9E0u);
        ctx->pc = 0x1FB9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9D8u;
        // 0x1fb9dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB9D8u, 0x1FB9E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB9E0u;
label_1fb9e0:
    // 0x1fb9e0: 0x10000014  b           . + 4 + (0x14 << 2)
label_1fb9e4:
    if (ctx->pc == 0x1FB9E4u) {
        ctx->pc = 0x1FB9E8u;
        goto label_1fb9e8;
    }
    ctx->pc = 0x1FB9E0u;
    {
        const bool branch_taken_0x1fb9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb9e0) {
            ctx->pc = 0x1FBA34u;
            goto label_1fba34;
        }
    }
    ctx->pc = 0x1FB9E8u;
label_1fb9e8:
    // 0x1fb9e8: 0xc07f7f4  jal         func_1FDFD0
label_1fb9ec:
    if (ctx->pc == 0x1FB9ECu) {
        ctx->pc = 0x1FB9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9E8u;
        // 0x1fb9ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB9F0u;
        goto label_1fb9f0;
    }
    ctx->pc = 0x1FB9E8u;
    SET_GPR_U32(ctx, 31, 0x1FB9F0u);
    ctx->pc = 0x1FB9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB9E8u;
    // 0x1fb9ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDFD0u, 0x1FB9E8u, 0x1FB9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB9F0u;
label_1fb9f0:
    // 0x1fb9f0: 0xc080af2  jal         func_202BC8
label_1fb9f4:
    if (ctx->pc == 0x1FB9F4u) {
        ctx->pc = 0x1FB9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9F0u;
        // 0x1fb9f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB9F8u;
        goto label_1fb9f8;
    }
    ctx->pc = 0x1FB9F0u;
    SET_GPR_U32(ctx, 31, 0x1FB9F8u);
    ctx->pc = 0x1FB9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB9F0u;
    // 0x1fb9f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202BC8u, 0x1FB9F0u, 0x1FB9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB9F8u;
label_1fb9f8:
    // 0x1fb9f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fb9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb9fc:
    // 0x1fb9fc: 0xc080b0a  jal         func_202C28
label_1fba00:
    if (ctx->pc == 0x1FBA00u) {
        ctx->pc = 0x1FBA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9FCu;
        // 0x1fba00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBA04u;
        goto label_1fba04;
    }
    ctx->pc = 0x1FB9FCu;
    SET_GPR_U32(ctx, 31, 0x1FBA04u);
    ctx->pc = 0x1FBA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB9FCu;
    // 0x1fba00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C28u, 0x1FB9FCu, 0x1FBA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA04u;
label_1fba04:
    // 0x1fba04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fba04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fba08:
    // 0x1fba08: 0xc080b0e  jal         func_202C38
label_1fba0c:
    if (ctx->pc == 0x1FBA0Cu) {
        ctx->pc = 0x1FBA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA08u;
        // 0x1fba0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBA10u;
        goto label_1fba10;
    }
    ctx->pc = 0x1FBA08u;
    SET_GPR_U32(ctx, 31, 0x1FBA10u);
    ctx->pc = 0x1FBA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBA08u;
    // 0x1fba0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C38u, 0x1FBA08u, 0x1FBA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA10u;
label_1fba10:
    // 0x1fba10: 0x10000008  b           . + 4 + (0x8 << 2)
label_1fba14:
    if (ctx->pc == 0x1FBA14u) {
        ctx->pc = 0x1FBA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA10u;
        // 0x1fba14: 0xae120074  sw          $s2, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBA18u;
        goto label_1fba18;
    }
    ctx->pc = 0x1FBA10u;
    {
        const bool branch_taken_0x1fba10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA10u;
        // 0x1fba14: 0xae120074  sw          $s2, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba10) {
            ctx->pc = 0x1FBA34u;
            goto label_1fba34;
        }
    }
    ctx->pc = 0x1FBA18u;
label_1fba18:
    // 0x1fba18: 0xc07f7f4  jal         func_1FDFD0
label_1fba1c:
    if (ctx->pc == 0x1FBA1Cu) {
        ctx->pc = 0x1FBA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA18u;
        // 0x1fba1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBA20u;
        goto label_1fba20;
    }
    ctx->pc = 0x1FBA18u;
    SET_GPR_U32(ctx, 31, 0x1FBA20u);
    ctx->pc = 0x1FBA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBA18u;
    // 0x1fba1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDFD0u, 0x1FBA18u, 0x1FBA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA20u;
label_1fba20:
    // 0x1fba20: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1fba20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1fba24:
    // 0x1fba24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fba24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fba28:
    // 0x1fba28: 0xc080b0a  jal         func_202C28
label_1fba2c:
    if (ctx->pc == 0x1FBA2Cu) {
        ctx->pc = 0x1FBA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA28u;
        // 0x1fba2c: 0x2484ef80  addiu       $a0, $a0, -0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBA30u;
        goto label_1fba30;
    }
    ctx->pc = 0x1FBA28u;
    SET_GPR_U32(ctx, 31, 0x1FBA30u);
    ctx->pc = 0x1FBA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBA28u;
    // 0x1fba2c: 0x2484ef80  addiu       $a0, $a0, -0x1080 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C28u, 0x1FBA28u, 0x1FBA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA30u;
label_1fba30:
    // 0x1fba30: 0xae120074  sw          $s2, 0x74($s0)
    ctx->pc = 0x1fba30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 18));
label_1fba34:
    // 0x1fba34: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
label_1fba38:
    if (ctx->pc == 0x1FBA38u) {
        ctx->pc = 0x1FBA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA34u;
        // 0x1fba38: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBA3Cu;
        goto label_1fba3c;
    }
    ctx->pc = 0x1FBA34u;
    {
        const bool branch_taken_0x1fba34 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fba34) {
            ctx->pc = 0x1FBA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBA34u;
            // 0x1fba38: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBA48u;
            goto label_1fba48;
        }
    }
    ctx->pc = 0x1FBA3Cu;
label_1fba3c:
    // 0x1fba3c: 0xc07f9c8  jal         func_1FE720
label_1fba40:
    if (ctx->pc == 0x1FBA40u) {
        ctx->pc = 0x1FBA44u;
        goto label_1fba44;
    }
    ctx->pc = 0x1FBA3Cu;
    SET_GPR_U32(ctx, 31, 0x1FBA44u);
    ctx->pc = 0x1FE720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE720u, 0x1FBA3Cu, 0x1FBA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA44u;
label_1fba44:
    // 0x1fba44: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fba44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1fba48:
    // 0x1fba48: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1fba48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1fba4c:
    // 0x1fba4c: 0xc043f0c  jal         func_10FC30
label_1fba50:
    if (ctx->pc == 0x1FBA50u) {
        ctx->pc = 0x1FBA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA4Cu;
        // 0x1fba50: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBA54u;
        goto label_1fba54;
    }
    ctx->pc = 0x1FBA4Cu;
    SET_GPR_U32(ctx, 31, 0x1FBA54u);
    ctx->pc = 0x1FBA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBA4Cu;
    // 0x1fba50: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1FBA4Cu, 0x1FBA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA54u;
label_1fba54:
    // 0x1fba54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fba54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fba58:
    // 0x1fba58: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fba58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fba5c:
    // 0x1fba5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fba5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fba60:
    // 0x1fba60: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fba60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fba64:
    // 0x1fba64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fba64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fba68:
    // 0x1fba68: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1fba68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fba6c:
    // 0x1fba6c: 0x3e00008  jr          $ra
label_1fba70:
    if (ctx->pc == 0x1FBA70u) {
        ctx->pc = 0x1FBA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA6Cu;
        // 0x1fba70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBA74u;
        goto label_1fba74;
    }
    ctx->pc = 0x1FBA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA6Cu;
        // 0x1fba70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBA74u;
label_1fba74:
    // 0x1fba74: 0x0  nop
    ctx->pc = 0x1fba74u;
    // NOP
    ctx->pc = 0x1fba78u;
}
