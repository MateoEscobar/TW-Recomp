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

// Function: sub_00265F70
// Address: 0x265f70 - 0x266b50
void sub_00265F70_0x265f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265F70_0x265f70");
#endif

    switch (ctx->pc) {
        case 0x265fb0u: goto label_265fb0;
        case 0x265fbcu: goto label_265fbc;
        case 0x265fd4u: goto label_265fd4;
        case 0x265fe8u: goto label_265fe8;
        case 0x265ff8u: goto label_265ff8;
        case 0x266008u: goto label_266008;
        case 0x266028u: goto label_266028;
        case 0x26603cu: goto label_26603c;
        case 0x266048u: goto label_266048;
        case 0x266054u: goto label_266054;
        case 0x26605cu: goto label_26605c;
        case 0x266070u: goto label_266070;
        case 0x266080u: goto label_266080;
        case 0x26609cu: goto label_26609c;
        case 0x2660b4u: goto label_2660b4;
        case 0x2660ccu: goto label_2660cc;
        case 0x2660e4u: goto label_2660e4;
        case 0x2660ecu: goto label_2660ec;
        case 0x266100u: goto label_266100;
        case 0x26611cu: goto label_26611c;
        case 0x26612cu: goto label_26612c;
        case 0x266134u: goto label_266134;
        case 0x2661f0u: goto label_2661f0;
        case 0x266228u: goto label_266228;
        case 0x266238u: goto label_266238;
        case 0x266248u: goto label_266248;
        case 0x266260u: goto label_266260;
        case 0x266294u: goto label_266294;
        case 0x2662dcu: goto label_2662dc;
        case 0x26632cu: goto label_26632c;
        case 0x266368u: goto label_266368;
        case 0x266380u: goto label_266380;
        case 0x26638cu: goto label_26638c;
        case 0x26639cu: goto label_26639c;
        case 0x2663c0u: goto label_2663c0;
        case 0x2663dcu: goto label_2663dc;
        case 0x2663ecu: goto label_2663ec;
        case 0x2663f4u: goto label_2663f4;
        case 0x266408u: goto label_266408;
        case 0x266420u: goto label_266420;
        case 0x266428u: goto label_266428;
        case 0x266438u: goto label_266438;
        case 0x26644cu: goto label_26644c;
        case 0x266458u: goto label_266458;
        case 0x266468u: goto label_266468;
        case 0x266470u: goto label_266470;
        case 0x266480u: goto label_266480;
        case 0x266490u: goto label_266490;
        case 0x2664a0u: goto label_2664a0;
        case 0x2664b0u: goto label_2664b0;
        case 0x2664b8u: goto label_2664b8;
        case 0x2664c8u: goto label_2664c8;
        case 0x2664dcu: goto label_2664dc;
        case 0x2664f0u: goto label_2664f0;
        case 0x266504u: goto label_266504;
        case 0x26650cu: goto label_26650c;
        case 0x266520u: goto label_266520;
        case 0x26654cu: goto label_26654c;
        case 0x2665a8u: goto label_2665a8;
        case 0x2665c8u: goto label_2665c8;
        case 0x2665ecu: goto label_2665ec;
        case 0x26661cu: goto label_26661c;
        case 0x26669cu: goto label_26669c;
        case 0x2666f0u: goto label_2666f0;
        case 0x266750u: goto label_266750;
        case 0x26677cu: goto label_26677c;
        case 0x26678cu: goto label_26678c;
        case 0x26679cu: goto label_26679c;
        case 0x2667a4u: goto label_2667a4;
        case 0x2667b4u: goto label_2667b4;
        case 0x26680cu: goto label_26680c;
        case 0x266820u: goto label_266820;
        case 0x266830u: goto label_266830;
        case 0x266838u: goto label_266838;
        case 0x266840u: goto label_266840;
        case 0x266854u: goto label_266854;
        case 0x266864u: goto label_266864;
        case 0x266878u: goto label_266878;
        case 0x266888u: goto label_266888;
        case 0x2668a8u: goto label_2668a8;
        case 0x2668b8u: goto label_2668b8;
        case 0x2668c8u: goto label_2668c8;
        case 0x2668d8u: goto label_2668d8;
        case 0x2668e8u: goto label_2668e8;
        case 0x2668f8u: goto label_2668f8;
        case 0x266908u: goto label_266908;
        case 0x266918u: goto label_266918;
        case 0x266928u: goto label_266928;
        case 0x266938u: goto label_266938;
        case 0x266948u: goto label_266948;
        case 0x266958u: goto label_266958;
        case 0x266968u: goto label_266968;
        case 0x266978u: goto label_266978;
        case 0x266988u: goto label_266988;
        case 0x266998u: goto label_266998;
        case 0x2669a8u: goto label_2669a8;
        case 0x2669b8u: goto label_2669b8;
        case 0x2669c8u: goto label_2669c8;
        case 0x2669d8u: goto label_2669d8;
        case 0x2669e8u: goto label_2669e8;
        case 0x2669f8u: goto label_2669f8;
        case 0x266a08u: goto label_266a08;
        case 0x266a18u: goto label_266a18;
        case 0x266a28u: goto label_266a28;
        case 0x266a44u: goto label_266a44;
        case 0x266a54u: goto label_266a54;
        case 0x266a64u: goto label_266a64;
        case 0x266a74u: goto label_266a74;
        case 0x266a84u: goto label_266a84;
        case 0x266a94u: goto label_266a94;
        case 0x266aa4u: goto label_266aa4;
        case 0x266ab4u: goto label_266ab4;
        case 0x266ac8u: goto label_266ac8;
        case 0x266ad8u: goto label_266ad8;
        case 0x266af4u: goto label_266af4;
        case 0x266b08u: goto label_266b08;
        case 0x266b18u: goto label_266b18;
        default: break;
    }

    ctx->pc = 0x265f70u;

    // 0x265f70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x265f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x265f74: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x265f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x265f78: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x265f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x265f7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x265f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265f80: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x265f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x265f84: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x265f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x265f88: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x265f88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265f8c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x265f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x265f90: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x265f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x265f94: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x265f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x265f98: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x265f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x265f9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x265f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265fa0: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x265fa0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x265fa4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x265fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x265fa8: 0xc0899e8  jal         func_2267A0
    ctx->pc = 0x265FA8u;
    SET_GPR_U32(ctx, 31, 0x265FB0u);
    ctx->pc = 0x265FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265FA8u;
    // 0x265fac: 0x8e3300d4  lw          $s3, 0xD4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x265FA8u, 0x265FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265FB0u;
label_265fb0:
    // 0x265fb0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x265fb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265fb4: 0xc08a0d8  jal         func_228360
    ctx->pc = 0x265FB4u;
    SET_GPR_U32(ctx, 31, 0x265FBCu);
    ctx->pc = 0x265FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265FB4u;
    // 0x265fb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228360u, 0x265FB4u, 0x265FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265FBCu;
label_265fbc:
    // 0x265fbc: 0x5440029d  bnel        $v0, $zero, . + 4 + (0x29D << 2)
    ctx->pc = 0x265FBCu;
    {
        const bool branch_taken_0x265fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265fbc) {
            ctx->pc = 0x265FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265FBCu;
            // 0x265fc0: 0xa6600118  sh          $zero, 0x118($s3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 19), 280), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266A34u;
            goto label_266a34;
        }
    }
    ctx->pc = 0x265FC4u;
    // 0x265fc4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x265fc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x265fc8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x265fc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x265fcc: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x265FCCu;
    SET_GPR_U32(ctx, 31, 0x265FD4u);
    ctx->pc = 0x265FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265FCCu;
    // 0x265fd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x265FCCu, 0x265FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265FD4u;
label_265fd4:
    // 0x265fd4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x265FD4u;
    {
        const bool branch_taken_0x265fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265FD4u;
        // 0x265fd8: 0x3c0500c1  lui         $a1, 0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)193 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265fd4) {
            ctx->pc = 0x266014u;
            goto label_266014;
        }
    }
    ctx->pc = 0x265FDCu;
    // 0x265fdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x265fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265fe0: 0xc089998  jal         func_226660
    ctx->pc = 0x265FE0u;
    SET_GPR_U32(ctx, 31, 0x265FE8u);
    ctx->pc = 0x265FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265FE0u;
    // 0x265fe4: 0x34a52200  ori         $a1, $a1, 0x2200 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8704);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x265FE0u, 0x265FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265FE8u;
label_265fe8:
    // 0x265fe8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x265FE8u;
    {
        const bool branch_taken_0x265fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265fe8) {
            ctx->pc = 0x265FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265FE8u;
            // 0x265fec: 0x86620118  lh          $v0, 0x118($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266018u;
            goto label_266018;
        }
    }
    ctx->pc = 0x265FF0u;
    // 0x265ff0: 0xc089fe4  jal         func_227F90
    ctx->pc = 0x265FF0u;
    SET_GPR_U32(ctx, 31, 0x265FF8u);
    ctx->pc = 0x265FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265FF0u;
    // 0x265ff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x265FF0u, 0x265FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265FF8u;
label_265ff8:
    // 0x265ff8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x265FF8u;
    {
        const bool branch_taken_0x265ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265ff8) {
            ctx->pc = 0x265FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265FF8u;
            // 0x265ffc: 0x86620118  lh          $v0, 0x118($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266018u;
            goto label_266018;
        }
    }
    ctx->pc = 0x266000u;
    // 0x266000: 0xc095018  jal         func_254060
    ctx->pc = 0x266000u;
    SET_GPR_U32(ctx, 31, 0x266008u);
    ctx->pc = 0x266004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266000u;
    // 0x266004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x266000u, 0x266008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266008u;
label_266008:
    // 0x266008: 0x38420012  xori        $v0, $v0, 0x12
    ctx->pc = 0x266008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)18);
    // 0x26600c: 0x5440011e  bnel        $v0, $zero, . + 4 + (0x11E << 2)
    ctx->pc = 0x26600Cu;
    {
        const bool branch_taken_0x26600c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26600c) {
            ctx->pc = 0x266010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26600Cu;
            // 0x266010: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266488u;
            goto label_266488;
        }
    }
    ctx->pc = 0x266014u;
label_266014:
    // 0x266014: 0x86620118  lh          $v0, 0x118($s3)
    ctx->pc = 0x266014u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
label_266018:
    // 0x266018: 0x104002c0  beqz        $v0, . + 4 + (0x2C0 << 2)
    ctx->pc = 0x266018u;
    {
        const bool branch_taken_0x266018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266018u;
        // 0x26601c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266018) {
            ctx->pc = 0x266B1Cu;
            goto label_266b1c;
        }
    }
    ctx->pc = 0x266020u;
    // 0x266020: 0xc089fe4  jal         func_227F90
    ctx->pc = 0x266020u;
    SET_GPR_U32(ctx, 31, 0x266028u);
    ctx->pc = 0x266024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266020u;
    // 0x266024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x266020u, 0x266028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266028u;
label_266028:
    // 0x266028: 0x144002bc  bnez        $v0, . + 4 + (0x2BC << 2)
    ctx->pc = 0x266028u;
    {
        const bool branch_taken_0x266028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266028u;
        // 0x26602c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266028) {
            ctx->pc = 0x266B1Cu;
            goto label_266b1c;
        }
    }
    ctx->pc = 0x266030u;
    // 0x266030: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x266030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266034: 0xc089974  jal         func_2265D0
    ctx->pc = 0x266034u;
    SET_GPR_U32(ctx, 31, 0x26603Cu);
    ctx->pc = 0x266038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266034u;
    // 0x266038: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x266034u, 0x26603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26603Cu;
label_26603c:
    // 0x26603c: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x26603cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x266040: 0xc0a002e  jal         func_2800B8
    ctx->pc = 0x266040u;
    SET_GPR_U32(ctx, 31, 0x266048u);
    ctx->pc = 0x266044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266040u;
    // 0x266044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2800B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2800B8u, 0x266040u, 0x266048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266048u;
label_266048:
    // 0x266048: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x266048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26604c: 0xc099736  jal         func_265CD8
    ctx->pc = 0x26604Cu;
    SET_GPR_U32(ctx, 31, 0x266054u);
    ctx->pc = 0x266050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26604Cu;
    // 0x266050: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265CD8u, 0x26604Cu, 0x266054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266054u;
label_266054:
    // 0x266054: 0xc08a1a0  jal         func_228680
    ctx->pc = 0x266054u;
    SET_GPR_U32(ctx, 31, 0x26605Cu);
    ctx->pc = 0x266058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266054u;
    // 0x266058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228680u, 0x266054u, 0x26605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26605Cu;
label_26605c:
    // 0x26605c: 0x8e03bd30  lw          $v1, -0x42D0($s0)
    ctx->pc = 0x26605cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950192)));
    // 0x266060: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266064: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x266064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x266068: 0xc08a196  jal         func_228658
    ctx->pc = 0x266068u;
    SET_GPR_U32(ctx, 31, 0x266070u);
    ctx->pc = 0x26606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266068u;
    // 0x26606c: 0x2f02b  sltu        $fp, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228658u, 0x266068u, 0x266070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266070u;
label_266070:
    // 0x266070: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x266070u;
    {
        const bool branch_taken_0x266070 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x266074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266070u;
        // 0x266074: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266070) {
            ctx->pc = 0x266088u;
            goto label_266088;
        }
    }
    ctx->pc = 0x266078u;
    // 0x266078: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x266078u;
    SET_GPR_U32(ctx, 31, 0x266080u);
    ctx->pc = 0x26607Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266078u;
    // 0x26607c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x266078u, 0x266080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266080u;
label_266080:
    // 0x266080: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x266080u;
    {
        const bool branch_taken_0x266080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266080u;
        // 0x266084: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266080) {
            ctx->pc = 0x26608Cu;
            goto label_26608c;
        }
    }
    ctx->pc = 0x266088u;
label_266088:
    // 0x266088: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x266088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26608c:
    // 0x26608c: 0x12400027  beqz        $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x26608Cu;
    {
        const bool branch_taken_0x26608c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x266090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26608Cu;
        // 0x266090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26608c) {
            ctx->pc = 0x26612Cu;
            goto label_26612c;
        }
    }
    ctx->pc = 0x266094u;
    // 0x266094: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x266094u;
    SET_GPR_U32(ctx, 31, 0x26609Cu);
    ctx->pc = 0x266098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266094u;
    // 0x266098: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x266094u, 0x26609Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26609Cu;
label_26609c:
    // 0x26609c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x26609Cu;
    {
        const bool branch_taken_0x26609c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26609c) {
            ctx->pc = 0x26612Cu;
            goto label_26612c;
        }
    }
    ctx->pc = 0x2660A4u;
    // 0x2660a4: 0x17c0001f  bnez        $fp, . + 4 + (0x1F << 2)
    ctx->pc = 0x2660A4u;
    {
        const bool branch_taken_0x2660a4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x2660A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2660A4u;
        // 0x2660a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2660a4) {
            ctx->pc = 0x266124u;
            goto label_266124;
        }
    }
    ctx->pc = 0x2660ACu;
    // 0x2660ac: 0xc09a7cc  jal         func_269F30
    ctx->pc = 0x2660ACu;
    SET_GPR_U32(ctx, 31, 0x2660B4u);
    ctx->pc = 0x2660B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2660ACu;
    // 0x2660b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269F30u, 0x2660ACu, 0x2660B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2660B4u;
label_2660b4:
    // 0x2660b4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2660B4u;
    {
        const bool branch_taken_0x2660b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2660B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2660B4u;
        // 0x2660b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2660b4) {
            ctx->pc = 0x266124u;
            goto label_266124;
        }
    }
    ctx->pc = 0x2660BCu;
    // 0x2660bc: 0xa6600118  sh          $zero, 0x118($s3)
    ctx->pc = 0x2660bcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x2660c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2660c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2660c4: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2660C4u;
    SET_GPR_U32(ctx, 31, 0x2660CCu);
    ctx->pc = 0x2660C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2660C4u;
    // 0x2660c8: 0xa62005d2  sh          $zero, 0x5D2($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1490), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2660C4u, 0x2660CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2660CCu;
label_2660cc:
    // 0x2660cc: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x2660ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x2660d0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2660D0u;
    {
        const bool branch_taken_0x2660d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2660D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2660D0u;
        // 0x2660d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2660d0) {
            ctx->pc = 0x2660E4u;
            goto label_2660e4;
        }
    }
    ctx->pc = 0x2660D8u;
    // 0x2660d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2660d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2660dc: 0xc0994f6  jal         func_2653D8
    ctx->pc = 0x2660DCu;
    SET_GPR_U32(ctx, 31, 0x2660E4u);
    ctx->pc = 0x2660E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2660DCu;
    // 0x2660e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2653D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2653D8u, 0x2660DCu, 0x2660E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2660E4u;
label_2660e4:
    // 0x2660e4: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2660E4u;
    SET_GPR_U32(ctx, 31, 0x2660ECu);
    ctx->pc = 0x2660E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2660E4u;
    // 0x2660e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2660E4u, 0x2660ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2660ECu;
label_2660ec:
    // 0x2660ec: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x2660ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x2660f0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2660F0u;
    {
        const bool branch_taken_0x2660f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2660F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2660F0u;
        // 0x2660f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2660f0) {
            ctx->pc = 0x266114u;
            goto label_266114;
        }
    }
    ctx->pc = 0x2660F8u;
    // 0x2660f8: 0xc087502  jal         func_21D408
    ctx->pc = 0x2660F8u;
    SET_GPR_U32(ctx, 31, 0x266100u);
    ctx->pc = 0x2660FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2660F8u;
    // 0x2660fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2660F8u, 0x266100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266100u;
label_266100:
    // 0x266100: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x266100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x266104: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x266104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x266108: 0x14620284  bne         $v1, $v0, . + 4 + (0x284 << 2)
    ctx->pc = 0x266108u;
    {
        const bool branch_taken_0x266108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266108u;
        // 0x26610c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266108) {
            ctx->pc = 0x266B1Cu;
            goto label_266b1c;
        }
    }
    ctx->pc = 0x266110u;
    // 0x266110: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x266110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_266114:
    // 0x266114: 0xc099774  jal         func_265DD0
    ctx->pc = 0x266114u;
    SET_GPR_U32(ctx, 31, 0x26611Cu);
    ctx->pc = 0x266118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266114u;
    // 0x266118: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265DD0u, 0x266114u, 0x26611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26611Cu;
label_26611c:
    // 0x26611c: 0x1000027f  b           . + 4 + (0x27F << 2)
    ctx->pc = 0x26611Cu;
    {
        const bool branch_taken_0x26611c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26611Cu;
        // 0x266120: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26611c) {
            ctx->pc = 0x266B1Cu;
            goto label_266b1c;
        }
    }
    ctx->pc = 0x266124u;
label_266124:
    // 0x266124: 0xc089988  jal         func_226620
    ctx->pc = 0x266124u;
    SET_GPR_U32(ctx, 31, 0x26612Cu);
    ctx->pc = 0x266128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266124u;
    // 0x266128: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x266124u, 0x26612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26612Cu;
label_26612c:
    // 0x26612c: 0xc088b98  jal         func_222E60
    ctx->pc = 0x26612Cu;
    SET_GPR_U32(ctx, 31, 0x266134u);
    ctx->pc = 0x266130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26612Cu;
    // 0x266130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E60u, 0x26612Cu, 0x266134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266134u;
label_266134:
    // 0x266134: 0x86630144  lh          $v1, 0x144($s3)
    ctx->pc = 0x266134u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 324)));
    // 0x266138: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x266138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26613c: 0x0  nop
    ctx->pc = 0x26613cu;
    // NOP
    // 0x266140: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x266140u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x266144: 0x86640118  lh          $a0, 0x118($s3)
    ctx->pc = 0x266144u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x266148: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x266148u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26614c: 0x52eb8  dsll        $a1, $a1, 26
    ctx->pc = 0x26614cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 26);
    // 0x266150: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x266150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x266154: 0x0  nop
    ctx->pc = 0x266154u;
    // NOP
    // 0x266158: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x266158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x26615c: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x26615cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x266160: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x266160u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x266164: 0x0  nop
    ctx->pc = 0x266164u;
    // NOP
    // 0x266168: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x266168u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x26616c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x26616cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x266170: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x266170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x266174: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x266174u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x266178: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x266178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26617c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x26617cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x266180: 0x0  nop
    ctx->pc = 0x266180u;
    // NOP
    // 0x266184: 0x0  nop
    ctx->pc = 0x266184u;
    // NOP
    // 0x266188: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x266188u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x26618c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26618Cu;
    {
        const bool branch_taken_0x26618c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26618Cu;
        // 0x266190: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26618c) {
            ctx->pc = 0x2661D8u;
            goto label_2661d8;
        }
    }
    ctx->pc = 0x266194u;
    // 0x266194: 0xc441024c  lwc1        $f1, 0x24C($v0)
    ctx->pc = 0x266194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x266198: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x266198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26619c: 0x0  nop
    ctx->pc = 0x26619cu;
    // NOP
    // 0x2661a0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2661A0u;
    {
        const bool branch_taken_0x2661a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2661A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2661A0u;
        // 0x2661a4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2661a0) {
            ctx->pc = 0x2661D8u;
            goto label_2661d8;
        }
    }
    ctx->pc = 0x2661A8u;
    // 0x2661a8: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x2661a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x2661ac: 0x84820146  lh          $v0, 0x146($a0)
    ctx->pc = 0x2661acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 326)));
    // 0x2661b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2661b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2661b4: 0x0  nop
    ctx->pc = 0x2661b4u;
    // NOP
    // 0x2661b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2661b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2661bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2661bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2661c0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2661c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2661c4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2661c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2661c8: 0xa4830144  sh          $v1, 0x144($a0)
    ctx->pc = 0x2661c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 324), (uint16_t)GPR_U32(ctx, 3));
    // 0x2661cc: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2661ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x2661d0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2661d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2661d4: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x2661d4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
label_2661d8:
    // 0x2661d8: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2661D8u;
    {
        const bool branch_taken_0x2661d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2661DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2661D8u;
        // 0x2661dc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2661d8) {
            ctx->pc = 0x26620Cu;
            goto label_26620c;
        }
    }
    ctx->pc = 0x2661E0u;
    // 0x2661e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2661e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2661e4: 0x96050112  lhu         $a1, 0x112($s0)
    ctx->pc = 0x2661e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
    // 0x2661e8: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x2661E8u;
    SET_GPR_U32(ctx, 31, 0x2661F0u);
    ctx->pc = 0x2661ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2661E8u;
    // 0x2661ec: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2661E8u, 0x2661F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2661F0u;
label_2661f0:
    // 0x2661f0: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x2661f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
    // 0x2661f4: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x2661f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2661f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2661F8u;
    {
        const bool branch_taken_0x2661f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2661FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2661F8u;
        // 0x2661fc: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2661f8) {
            ctx->pc = 0x266208u;
            goto label_266208;
        }
    }
    ctx->pc = 0x266200u;
    // 0x266200: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266200u;
    {
        const bool branch_taken_0x266200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x266200) {
            ctx->pc = 0x266204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266200u;
            // 0x266204: 0xde2200e0  ld          $v0, 0xE0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266210u;
            goto label_266210;
        }
    }
    ctx->pc = 0x266208u;
label_266208:
    // 0x266208: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x266208u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26620c:
    // 0x26620c: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x26620cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_266210:
    // 0x266210: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x266210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x266214: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x266214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x266218: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x266218u;
    {
        const bool branch_taken_0x266218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266218) {
            ctx->pc = 0x266250u;
            goto label_266250;
        }
    }
    ctx->pc = 0x266220u;
    // 0x266220: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x266220u;
    SET_GPR_U32(ctx, 31, 0x266228u);
    ctx->pc = 0x266224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266220u;
    // 0x266224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x266220u, 0x266228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266228u;
label_266228:
    // 0x266228: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x266228u;
    {
        const bool branch_taken_0x266228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266228) {
            ctx->pc = 0x266250u;
            goto label_266250;
        }
    }
    ctx->pc = 0x266230u;
    // 0x266230: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x266230u;
    SET_GPR_U32(ctx, 31, 0x266238u);
    ctx->pc = 0x266234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266230u;
    // 0x266234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x266230u, 0x266238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266238u;
label_266238:
    // 0x266238: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x266238u;
    {
        const bool branch_taken_0x266238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266238) {
            ctx->pc = 0x266250u;
            goto label_266250;
        }
    }
    ctx->pc = 0x266240u;
    // 0x266240: 0xc089f86  jal         func_227E18
    ctx->pc = 0x266240u;
    SET_GPR_U32(ctx, 31, 0x266248u);
    ctx->pc = 0x266244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266240u;
    // 0x266244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x266240u, 0x266248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266248u;
label_266248:
    // 0x266248: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266248u;
    {
        const bool branch_taken_0x266248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266248) {
            ctx->pc = 0x266258u;
            goto label_266258;
        }
    }
    ctx->pc = 0x266250u;
label_266250:
    // 0x266250: 0x52800041  beql        $s4, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x266250u;
    {
        const bool branch_taken_0x266250 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x266250) {
            ctx->pc = 0x266254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266250u;
            // 0x266254: 0xa6600118  sh          $zero, 0x118($s3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 19), 280), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266358u;
            goto label_266358;
        }
    }
    ctx->pc = 0x266258u;
label_266258:
    // 0x266258: 0xc088edc  jal         func_223B70
    ctx->pc = 0x266258u;
    SET_GPR_U32(ctx, 31, 0x266260u);
    ctx->pc = 0x26625Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266258u;
    // 0x26625c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x266258u, 0x266260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266260u;
label_266260:
    // 0x266260: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x266260u;
    {
        const bool branch_taken_0x266260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266260) {
            ctx->pc = 0x266264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266260u;
            // 0x266264: 0x86620118  lh          $v0, 0x118($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26627Cu;
            goto label_26627c;
        }
    }
    ctx->pc = 0x266268u;
    // 0x266268: 0x86630118  lh          $v1, 0x118($s3)
    ctx->pc = 0x266268u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x26626c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x26626cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x266270: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266274: 0xa6620118  sh          $v0, 0x118($s3)
    ctx->pc = 0x266274u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x266278: 0x86620118  lh          $v0, 0x118($s3)
    ctx->pc = 0x266278u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
label_26627c:
    // 0x26627c: 0x4410013  bgez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26627Cu;
    {
        const bool branch_taken_0x26627c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26627c) {
            ctx->pc = 0x2662CCu;
            goto label_2662cc;
        }
    }
    ctx->pc = 0x266284u;
    // 0x266284: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x266284u;
    {
        const bool branch_taken_0x266284 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x266288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266284u;
        // 0x266288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266284) {
            ctx->pc = 0x266308u;
            goto label_266308;
        }
    }
    ctx->pc = 0x26628Cu;
    // 0x26628c: 0xc088aa4  jal         func_222A90
    ctx->pc = 0x26628Cu;
    SET_GPR_U32(ctx, 31, 0x266294u);
    ctx->pc = 0x266290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26628Cu;
    // 0x266290: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x26628Cu, 0x266294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266294u;
label_266294:
    // 0x266294: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x266294u;
    {
        const bool branch_taken_0x266294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266294) {
            ctx->pc = 0x266298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266294u;
            // 0x266298: 0x86630118  lh          $v1, 0x118($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26630Cu;
            goto label_26630c;
        }
    }
    ctx->pc = 0x26629Cu;
    // 0x26629c: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x26629cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x2662a0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2662a0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2662a4: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2662A4u;
    {
        const bool branch_taken_0x2662a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2662a4) {
            ctx->pc = 0x2662A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2662A4u;
            // 0x2662a8: 0x86630118  lh          $v1, 0x118($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26630Cu;
            goto label_26630c;
        }
    }
    ctx->pc = 0x2662ACu;
    // 0x2662ac: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x2662acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x2662b0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2662b0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2662b4: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2662B4u;
    {
        const bool branch_taken_0x2662b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2662b4) {
            ctx->pc = 0x2662B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2662B4u;
            // 0x2662b8: 0x86630118  lh          $v1, 0x118($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26630Cu;
            goto label_26630c;
        }
    }
    ctx->pc = 0x2662BCu;
    // 0x2662bc: 0x86620118  lh          $v0, 0x118($s3)
    ctx->pc = 0x2662bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x2662c0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2662c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2662c4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2662C4u;
    {
        const bool branch_taken_0x2662c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2662C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2662C4u;
        // 0x2662c8: 0xa6620118  sh          $v0, 0x118($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 280), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2662c4) {
            ctx->pc = 0x266308u;
            goto label_266308;
        }
    }
    ctx->pc = 0x2662CCu;
label_2662cc:
    // 0x2662cc: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x2662CCu;
    {
        const bool branch_taken_0x2662cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2662D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2662CCu;
        // 0x2662d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2662cc) {
            ctx->pc = 0x266308u;
            goto label_266308;
        }
    }
    ctx->pc = 0x2662D4u;
    // 0x2662d4: 0xc088aa4  jal         func_222A90
    ctx->pc = 0x2662D4u;
    SET_GPR_U32(ctx, 31, 0x2662DCu);
    ctx->pc = 0x2662D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2662D4u;
    // 0x2662d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x2662D4u, 0x2662DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2662DCu;
label_2662dc:
    // 0x2662dc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2662DCu;
    {
        const bool branch_taken_0x2662dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2662dc) {
            ctx->pc = 0x2662E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2662DCu;
            // 0x2662e0: 0x86630118  lh          $v1, 0x118($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26630Cu;
            goto label_26630c;
        }
    }
    ctx->pc = 0x2662E4u;
    // 0x2662e4: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x2662e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x2662e8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2662e8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2662ec: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2662ECu;
    {
        const bool branch_taken_0x2662ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2662ec) {
            ctx->pc = 0x2662F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2662ECu;
            // 0x2662f0: 0xa6600118  sh          $zero, 0x118($s3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 19), 280), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266308u;
            goto label_266308;
        }
    }
    ctx->pc = 0x2662F4u;
    // 0x2662f4: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x2662f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x2662f8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2662f8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2662fc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2662FCu;
    {
        const bool branch_taken_0x2662fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2662fc) {
            ctx->pc = 0x266300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2662FCu;
            // 0x266300: 0x86630118  lh          $v1, 0x118($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26630Cu;
            goto label_26630c;
        }
    }
    ctx->pc = 0x266304u;
    // 0x266304: 0xa6600118  sh          $zero, 0x118($s3)
    ctx->pc = 0x266304u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 280), (uint16_t)GPR_U32(ctx, 0));
label_266308:
    // 0x266308: 0x86630118  lh          $v1, 0x118($s3)
    ctx->pc = 0x266308u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
label_26630c:
    // 0x26630c: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x26630Cu;
    {
        const bool branch_taken_0x26630c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x266310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26630Cu;
        // 0x266310: 0x86620144  lh          $v0, 0x144($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26630c) {
            ctx->pc = 0x266354u;
            goto label_266354;
        }
    }
    ctx->pc = 0x266314u;
    // 0x266314: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x266314u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x266318: 0x38550001  xori        $s5, $v0, 0x1
    ctx->pc = 0x266318u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26631c: 0x52a00009  beql        $s5, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x26631Cu;
    {
        const bool branch_taken_0x26631c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x26631c) {
            ctx->pc = 0x266320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26631Cu;
            // 0x266320: 0x96620144  lhu         $v0, 0x144($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 324)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266344u;
            goto label_266344;
        }
    }
    ctx->pc = 0x266324u;
    // 0x266324: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x266324u;
    SET_GPR_U32(ctx, 31, 0x26632Cu);
    ctx->pc = 0x266328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266324u;
    // 0x266328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x266324u, 0x26632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26632Cu;
label_26632c:
    // 0x26632c: 0x24030299  addiu       $v1, $zero, 0x299
    ctx->pc = 0x26632cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 665));
    // 0x266330: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x266330u;
    {
        const bool branch_taken_0x266330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x266330) {
            ctx->pc = 0x266334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266330u;
            // 0x266334: 0x96620144  lhu         $v0, 0x144($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 324)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266344u;
            goto label_266344;
        }
    }
    ctx->pc = 0x266338u;
    // 0x266338: 0xa6600118  sh          $zero, 0x118($s3)
    ctx->pc = 0x266338u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x26633c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x26633cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266340: 0x96620144  lhu         $v0, 0x144($s3)
    ctx->pc = 0x266340u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 324)));
label_266344:
    // 0x266344: 0x96630118  lhu         $v1, 0x118($s3)
    ctx->pc = 0x266344u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x266348: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x266348u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26634c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26634Cu;
    {
        const bool branch_taken_0x26634c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26634Cu;
        // 0x266350: 0xa6620144  sh          $v0, 0x144($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 324), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26634c) {
            ctx->pc = 0x266358u;
            goto label_266358;
        }
    }
    ctx->pc = 0x266354u;
label_266354:
    // 0x266354: 0x28550001  slti        $s5, $v0, 0x1
    ctx->pc = 0x266354u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_266358:
    // 0x266358: 0x12400031  beqz        $s2, . + 4 + (0x31 << 2)
    ctx->pc = 0x266358u;
    {
        const bool branch_taken_0x266358 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x266358) {
            ctx->pc = 0x266420u;
            goto label_266420;
        }
    }
    ctx->pc = 0x266360u;
    // 0x266360: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x266360u;
    SET_GPR_U32(ctx, 31, 0x266368u);
    ctx->pc = 0x266364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266360u;
    // 0x266364: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x266360u, 0x266368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266368u;
label_266368:
    // 0x266368: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x266368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x26636c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26636Cu;
    {
        const bool branch_taken_0x26636c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x266370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26636Cu;
        // 0x266370: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26636c) {
            ctx->pc = 0x266380u;
            goto label_266380;
        }
    }
    ctx->pc = 0x266374u;
    // 0x266374: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x266374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266378: 0xc0994f6  jal         func_2653D8
    ctx->pc = 0x266378u;
    SET_GPR_U32(ctx, 31, 0x266380u);
    ctx->pc = 0x26637Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266378u;
    // 0x26637c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2653D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2653D8u, 0x266378u, 0x266380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266380u;
label_266380:
    // 0x266380: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x266380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266384: 0xc089998  jal         func_226660
    ctx->pc = 0x266384u;
    SET_GPR_U32(ctx, 31, 0x26638Cu);
    ctx->pc = 0x266388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266384u;
    // 0x266388: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x266384u, 0x26638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26638Cu;
label_26638c:
    // 0x26638c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x26638Cu;
    {
        const bool branch_taken_0x26638c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26638c) {
            ctx->pc = 0x2663ECu;
            goto label_2663ec;
        }
    }
    ctx->pc = 0x266394u;
    // 0x266394: 0xc089a76  jal         func_2269D8
    ctx->pc = 0x266394u;
    SET_GPR_U32(ctx, 31, 0x26639Cu);
    ctx->pc = 0x266398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266394u;
    // 0x266398: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x266394u, 0x26639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26639Cu;
label_26639c:
    // 0x26639c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26639cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2663a0: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2663A0u;
    {
        const bool branch_taken_0x2663a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2663a0) {
            ctx->pc = 0x2663ECu;
            goto label_2663ec;
        }
    }
    ctx->pc = 0x2663A8u;
    // 0x2663a8: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x2663a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x2663ac: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2663acu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2663b0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2663B0u;
    {
        const bool branch_taken_0x2663b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2663B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2663B0u;
        // 0x2663b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2663b0) {
            ctx->pc = 0x2663ECu;
            goto label_2663ec;
        }
    }
    ctx->pc = 0x2663B8u;
    // 0x2663b8: 0xc088a92  jal         func_222A48
    ctx->pc = 0x2663B8u;
    SET_GPR_U32(ctx, 31, 0x2663C0u);
    ctx->pc = 0x2663BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2663B8u;
    // 0x2663bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A48u, 0x2663B8u, 0x2663C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2663C0u;
label_2663c0:
    // 0x2663c0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2663C0u;
    {
        const bool branch_taken_0x2663c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2663C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2663C0u;
        // 0x2663c4: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2663c0) {
            ctx->pc = 0x2663ECu;
            goto label_2663ec;
        }
    }
    ctx->pc = 0x2663C8u;
    // 0x2663c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2663c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2663cc: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x2663ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x2663d0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2663d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2663d4: 0xc13b632  jal         func_4ED8C8
    ctx->pc = 0x2663D4u;
    SET_GPR_U32(ctx, 31, 0x2663DCu);
    ctx->pc = 0x2663D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2663D4u;
    // 0x2663d8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x2663D4u, 0x2663DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2663DCu;
label_2663dc:
    // 0x2663dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2663dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2663e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2663e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2663e4: 0xc09933e  jal         func_264CF8
    ctx->pc = 0x2663E4u;
    SET_GPR_U32(ctx, 31, 0x2663ECu);
    ctx->pc = 0x2663E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2663E4u;
    // 0x2663e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264CF8u, 0x2663E4u, 0x2663ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2663ECu;
label_2663ec:
    // 0x2663ec: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2663ECu;
    SET_GPR_U32(ctx, 31, 0x2663F4u);
    ctx->pc = 0x2663F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2663ECu;
    // 0x2663f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2663ECu, 0x2663F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2663F4u;
label_2663f4:
    // 0x2663f4: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x2663f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x2663f8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2663F8u;
    {
        const bool branch_taken_0x2663f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2663FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2663F8u;
        // 0x2663fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2663f8) {
            ctx->pc = 0x266418u;
            goto label_266418;
        }
    }
    ctx->pc = 0x266400u;
    // 0x266400: 0xc087502  jal         func_21D408
    ctx->pc = 0x266400u;
    SET_GPR_U32(ctx, 31, 0x266408u);
    ctx->pc = 0x266404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266400u;
    // 0x266404: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x266400u, 0x266408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266408u;
label_266408:
    // 0x266408: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x266408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26640c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26640cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x266410: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266410u;
    {
        const bool branch_taken_0x266410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x266414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266410u;
        // 0x266414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266410) {
            ctx->pc = 0x266420u;
            goto label_266420;
        }
    }
    ctx->pc = 0x266418u;
label_266418:
    // 0x266418: 0xc099774  jal         func_265DD0
    ctx->pc = 0x266418u;
    SET_GPR_U32(ctx, 31, 0x266420u);
    ctx->pc = 0x26641Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266418u;
    // 0x26641c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265DD0u, 0x266418u, 0x266420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266420u;
label_266420:
    // 0x266420: 0xc089ff6  jal         func_227FD8
    ctx->pc = 0x266420u;
    SET_GPR_U32(ctx, 31, 0x266428u);
    ctx->pc = 0x266424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266420u;
    // 0x266424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FD8u, 0x266420u, 0x266428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266428u;
label_266428:
    // 0x266428: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x266428u;
    {
        const bool branch_taken_0x266428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266428u;
        // 0x26642c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266428) {
            ctx->pc = 0x266450u;
            goto label_266450;
        }
    }
    ctx->pc = 0x266430u;
    // 0x266430: 0xc0e409a  jal         func_390268
    ctx->pc = 0x266430u;
    SET_GPR_U32(ctx, 31, 0x266438u);
    ctx->pc = 0x266434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266430u;
    // 0x266434: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x266430u, 0x266438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266438u;
label_266438:
    // 0x266438: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x266438u;
    {
        const bool branch_taken_0x266438 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x26643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266438u;
        // 0x26643c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266438) {
            ctx->pc = 0x26644Cu;
            goto label_26644c;
        }
    }
    ctx->pc = 0x266440u;
    // 0x266440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266444: 0xc089912  jal         func_226448
    ctx->pc = 0x266444u;
    SET_GPR_U32(ctx, 31, 0x26644Cu);
    ctx->pc = 0x266448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266444u;
    // 0x266448: 0xc44c0274  lwc1        $f12, 0x274($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x226448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226448u, 0x266444u, 0x26644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26644Cu;
label_26644c:
    // 0x26644c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26644cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_266450:
    // 0x266450: 0xc089998  jal         func_226660
    ctx->pc = 0x266450u;
    SET_GPR_U32(ctx, 31, 0x266458u);
    ctx->pc = 0x266454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266450u;
    // 0x266454: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x266450u, 0x266458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266458u;
label_266458:
    // 0x266458: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266458u;
    {
        const bool branch_taken_0x266458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266458u;
        // 0x26645c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266458) {
            ctx->pc = 0x266468u;
            goto label_266468;
        }
    }
    ctx->pc = 0x266460u;
    // 0x266460: 0xc089c20  jal         func_227080
    ctx->pc = 0x266460u;
    SET_GPR_U32(ctx, 31, 0x266468u);
    ctx->pc = 0x266464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266460u;
    // 0x266464: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x266460u, 0x266468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266468u;
label_266468:
    // 0x266468: 0xc087c16  jal         func_21F058
    ctx->pc = 0x266468u;
    SET_GPR_U32(ctx, 31, 0x266470u);
    ctx->pc = 0x26646Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266468u;
    // 0x26646c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F058u, 0x266468u, 0x266470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266470u;
label_266470:
    // 0x266470: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x266470u;
    {
        const bool branch_taken_0x266470 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x266470) {
            ctx->pc = 0x266498u;
            goto label_266498;
        }
    }
    ctx->pc = 0x266478u;
    // 0x266478: 0xc089fe4  jal         func_227F90
    ctx->pc = 0x266478u;
    SET_GPR_U32(ctx, 31, 0x266480u);
    ctx->pc = 0x26647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266478u;
    // 0x26647c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x266478u, 0x266480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266480u;
label_266480:
    // 0x266480: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x266480u;
    {
        const bool branch_taken_0x266480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266480u;
        // 0x266484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266480) {
            ctx->pc = 0x266498u;
            goto label_266498;
        }
    }
    ctx->pc = 0x266488u;
label_266488:
    // 0x266488: 0xc099f92  jal         func_267E48
    ctx->pc = 0x266488u;
    SET_GPR_U32(ctx, 31, 0x266490u);
    ctx->pc = 0x26648Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266488u;
    // 0x26648c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267E48u, 0x266488u, 0x266490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266490u;
label_266490:
    // 0x266490: 0x100001a3  b           . + 4 + (0x1A3 << 2)
    ctx->pc = 0x266490u;
    {
        const bool branch_taken_0x266490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266490u;
        // 0x266494: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266490) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266498u;
label_266498:
    // 0x266498: 0xc088edc  jal         func_223B70
    ctx->pc = 0x266498u;
    SET_GPR_U32(ctx, 31, 0x2664A0u);
    ctx->pc = 0x26649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266498u;
    // 0x26649c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x266498u, 0x2664A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2664A0u;
label_2664a0:
    // 0x2664a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2664A0u;
    {
        const bool branch_taken_0x2664a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2664a0) {
            ctx->pc = 0x2664B0u;
            goto label_2664b0;
        }
    }
    ctx->pc = 0x2664A8u;
    // 0x2664a8: 0xc093390  jal         func_24CE40
    ctx->pc = 0x2664A8u;
    SET_GPR_U32(ctx, 31, 0x2664B0u);
    ctx->pc = 0x2664ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2664A8u;
    // 0x2664ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CE40u, 0x2664A8u, 0x2664B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2664B0u;
label_2664b0:
    // 0x2664b0: 0xc08a1a8  jal         func_2286A0
    ctx->pc = 0x2664B0u;
    SET_GPR_U32(ctx, 31, 0x2664B8u);
    ctx->pc = 0x2664B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2664B0u;
    // 0x2664b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2286A0u, 0x2664B0u, 0x2664B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2664B8u;
label_2664b8:
    // 0x2664b8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2664B8u;
    {
        const bool branch_taken_0x2664b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2664b8) {
            ctx->pc = 0x2664E8u;
            goto label_2664e8;
        }
    }
    ctx->pc = 0x2664C0u;
    // 0x2664c0: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x2664C0u;
    SET_GPR_U32(ctx, 31, 0x2664C8u);
    ctx->pc = 0x2664C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2664C0u;
    // 0x2664c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x2664C0u, 0x2664C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2664C8u;
label_2664c8:
    // 0x2664c8: 0x2403025a  addiu       $v1, $zero, 0x25A
    ctx->pc = 0x2664c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 602));
    // 0x2664cc: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2664CCu;
    {
        const bool branch_taken_0x2664cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2664cc) {
            ctx->pc = 0x2664F0u;
            goto label_2664f0;
        }
    }
    ctx->pc = 0x2664D4u;
    // 0x2664d4: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x2664D4u;
    SET_GPR_U32(ctx, 31, 0x2664DCu);
    ctx->pc = 0x2664D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2664D4u;
    // 0x2664d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x2664D4u, 0x2664DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2664DCu;
label_2664dc:
    // 0x2664dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2664dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2664e0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2664E0u;
    {
        const bool branch_taken_0x2664e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2664e0) {
            ctx->pc = 0x2664F0u;
            goto label_2664f0;
        }
    }
    ctx->pc = 0x2664E8u;
label_2664e8:
    // 0x2664e8: 0xc095fce  jal         func_257F38
    ctx->pc = 0x2664E8u;
    SET_GPR_U32(ctx, 31, 0x2664F0u);
    ctx->pc = 0x2664ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2664E8u;
    // 0x2664ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2664E8u, 0x2664F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2664F0u;
label_2664f0:
    // 0x2664f0: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2664F0u;
    {
        const bool branch_taken_0x2664f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2664F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2664F0u;
        // 0x2664f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664f0) {
            ctx->pc = 0x266504u;
            goto label_266504;
        }
    }
    ctx->pc = 0x2664F8u;
    // 0x2664f8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2664f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2664fc: 0xc0899d8  jal         func_226760
    ctx->pc = 0x2664FCu;
    SET_GPR_U32(ctx, 31, 0x266504u);
    ctx->pc = 0x266500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2664FCu;
    // 0x266500: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226760u, 0x2664FCu, 0x266504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266504u;
label_266504:
    // 0x266504: 0xc087502  jal         func_21D408
    ctx->pc = 0x266504u;
    SET_GPR_U32(ctx, 31, 0x26650Cu);
    ctx->pc = 0x266508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266504u;
    // 0x266508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x266504u, 0x26650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26650Cu;
label_26650c:
    // 0x26650c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x26650cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x266510: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x266510u;
    {
        const bool branch_taken_0x266510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x266510) {
            ctx->pc = 0x266514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266510u;
            // 0x266514: 0x8e4200d4  lw          $v0, 0xD4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26653Cu;
            goto label_26653c;
        }
    }
    ctx->pc = 0x266518u;
    // 0x266518: 0xc088ade  jal         func_222B78
    ctx->pc = 0x266518u;
    SET_GPR_U32(ctx, 31, 0x266520u);
    ctx->pc = 0x26651Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266518u;
    // 0x26651c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x266518u, 0x266520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266520u;
label_266520:
    // 0x266520: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x266520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x266524: 0x84450032  lh          $a1, 0x32($v0)
    ctx->pc = 0x266524u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 50)));
    // 0x266528: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x266528u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x26652c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x26652cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x266530: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x266530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x266534: 0xae620108  sw          $v0, 0x108($s3)
    ctx->pc = 0x266534u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 264), GPR_U32(ctx, 2));
    // 0x266538: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x266538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_26653c:
    // 0x26653c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26653cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266540: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x266540u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266544: 0xc088f88  jal         func_223E20
    ctx->pc = 0x266544u;
    SET_GPR_U32(ctx, 31, 0x26654Cu);
    ctx->pc = 0x266548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266544u;
    // 0x266548: 0x8c550020  lw          $s5, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E20u, 0x266544u, 0x26654Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26654Cu;
label_26654c:
    // 0x26654c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26654cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266550: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x266550u;
    {
        const bool branch_taken_0x266550 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x266554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266550u;
        // 0x266554: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266550) {
            ctx->pc = 0x266570u;
            goto label_266570;
        }
    }
    ctx->pc = 0x266558u;
    // 0x266558: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x266558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x26655c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26655Cu;
    {
        const bool branch_taken_0x26655c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x266560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26655Cu;
        // 0x266560: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26655c) {
            ctx->pc = 0x26656Cu;
            goto label_26656c;
        }
    }
    ctx->pc = 0x266564u;
    // 0x266564: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266564u;
    {
        const bool branch_taken_0x266564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x266564) {
            ctx->pc = 0x266568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266564u;
            // 0x266568: 0x822201b0  lb          $v0, 0x1B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266574u;
            goto label_266574;
        }
    }
    ctx->pc = 0x26656Cu;
label_26656c:
    // 0x26656c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x26656cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266570:
    // 0x266570: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x266570u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_266574:
    // 0x266574: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x266574u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x266578: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x266578u;
    {
        const bool branch_taken_0x266578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266578u;
        // 0x26657c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266578) {
            ctx->pc = 0x2665B8u;
            goto label_2665b8;
        }
    }
    ctx->pc = 0x266580u;
    // 0x266580: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x266580u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x266584: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x266584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x266588: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x266588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26658c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26658cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x266590: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x266590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x266594: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x266594u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x266598: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x266598u;
    {
        const bool branch_taken_0x266598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266598u;
        // 0x26659c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266598) {
            ctx->pc = 0x2665B8u;
            goto label_2665b8;
        }
    }
    ctx->pc = 0x2665A0u;
    // 0x2665a0: 0xc089998  jal         func_226660
    ctx->pc = 0x2665A0u;
    SET_GPR_U32(ctx, 31, 0x2665A8u);
    ctx->pc = 0x2665A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2665A0u;
    // 0x2665a4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2665A0u, 0x2665A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2665A8u;
label_2665a8:
    // 0x2665a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2665A8u;
    {
        const bool branch_taken_0x2665a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2665a8) {
            ctx->pc = 0x2665B8u;
            goto label_2665b8;
        }
    }
    ctx->pc = 0x2665B0u;
    // 0x2665b0: 0x52800034  beql        $s4, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x2665B0u;
    {
        const bool branch_taken_0x2665b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2665b0) {
            ctx->pc = 0x2665B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2665B0u;
            // 0x2665b4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266684u;
            goto label_266684;
        }
    }
    ctx->pc = 0x2665B8u;
label_2665b8:
    // 0x2665b8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2665B8u;
    {
        const bool branch_taken_0x2665b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2665BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2665B8u;
        // 0x2665bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2665b8) {
            ctx->pc = 0x2665D0u;
            goto label_2665d0;
        }
    }
    ctx->pc = 0x2665C0u;
    // 0x2665c0: 0xc089998  jal         func_226660
    ctx->pc = 0x2665C0u;
    SET_GPR_U32(ctx, 31, 0x2665C8u);
    ctx->pc = 0x2665C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2665C0u;
    // 0x2665c4: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2665C0u, 0x2665C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2665C8u;
label_2665c8:
    // 0x2665c8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2665C8u;
    {
        const bool branch_taken_0x2665c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2665c8) {
            ctx->pc = 0x2665FCu;
            goto label_2665fc;
        }
    }
    ctx->pc = 0x2665D0u;
label_2665d0:
    // 0x2665d0: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x2665d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x2665d4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2665d4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2665d8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2665D8u;
    {
        const bool branch_taken_0x2665d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2665d8) {
            ctx->pc = 0x266684u;
            goto label_266684;
        }
    }
    ctx->pc = 0x2665E0u;
    // 0x2665e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2665e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2665e4: 0xc089998  jal         func_226660
    ctx->pc = 0x2665E4u;
    SET_GPR_U32(ctx, 31, 0x2665ECu);
    ctx->pc = 0x2665E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2665E4u;
    // 0x2665e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2665E4u, 0x2665ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2665ECu;
label_2665ec:
    // 0x2665ec: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2665ECu;
    {
        const bool branch_taken_0x2665ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2665ec) {
            ctx->pc = 0x266684u;
            goto label_266684;
        }
    }
    ctx->pc = 0x2665F4u;
    // 0x2665f4: 0x16800023  bnez        $s4, . + 4 + (0x23 << 2)
    ctx->pc = 0x2665F4u;
    {
        const bool branch_taken_0x2665f4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2665f4) {
            ctx->pc = 0x266684u;
            goto label_266684;
        }
    }
    ctx->pc = 0x2665FCu;
label_2665fc:
    // 0x2665fc: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2665FCu;
    {
        const bool branch_taken_0x2665fc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2665fc) {
            ctx->pc = 0x266614u;
            goto label_266614;
        }
    }
    ctx->pc = 0x266604u;
    // 0x266604: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x266604u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x266608: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x266608u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x26660c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x26660Cu;
    {
        const bool branch_taken_0x26660c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26660c) {
            ctx->pc = 0x266684u;
            goto label_266684;
        }
    }
    ctx->pc = 0x266614u;
label_266614:
    // 0x266614: 0xc088f88  jal         func_223E20
    ctx->pc = 0x266614u;
    SET_GPR_U32(ctx, 31, 0x26661Cu);
    ctx->pc = 0x266618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266614u;
    // 0x266618: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E20u, 0x266614u, 0x26661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26661Cu;
label_26661c:
    // 0x26661c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x26661Cu;
    {
        const bool branch_taken_0x26661c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26661Cu;
        // 0x266620: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26661c) {
            ctx->pc = 0x266684u;
            goto label_266684;
        }
    }
    ctx->pc = 0x266624u;
    // 0x266624: 0xde4300e0  ld          $v1, 0xE0($s2)
    ctx->pc = 0x266624u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x266628: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x266628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26662c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26662cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x266630: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x266630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x266634: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x266634u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x266638: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x266638u;
    {
        const bool branch_taken_0x266638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266638u;
        // 0x26663c: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266638) {
            ctx->pc = 0x266684u;
            goto label_266684;
        }
    }
    ctx->pc = 0x266640u;
    // 0x266640: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x266640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x266644: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x266644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x266648: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x266648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26664c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x26664cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x266650: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x266650u;
    {
        const bool branch_taken_0x266650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266650u;
        // 0x266654: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266650) {
            ctx->pc = 0x266684u;
            goto label_266684;
        }
    }
    ctx->pc = 0x266658u;
    // 0x266658: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x266658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26665c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26665cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x266660: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x266660u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x266664: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x266664u;
    {
        const bool branch_taken_0x266664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266664u;
        // 0x266668: 0x2aa20269  slti        $v0, $s5, 0x269 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)617) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266664) {
            ctx->pc = 0x266684u;
            goto label_266684;
        }
    }
    ctx->pc = 0x26666Cu;
    // 0x26666c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26666cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x266670: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266670u;
    {
        const bool branch_taken_0x266670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266670u;
        // 0x266674: 0x2aa2026d  slti        $v0, $s5, 0x26D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)621) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266670) {
            ctx->pc = 0x266680u;
            goto label_266680;
        }
    }
    ctx->pc = 0x266678u;
    // 0x266678: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x266678u;
    {
        const bool branch_taken_0x266678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266678) {
            ctx->pc = 0x266684u;
            goto label_266684;
        }
    }
    ctx->pc = 0x266680u;
label_266680:
    // 0x266680: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x266680u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266684:
    // 0x266684: 0x56e0000f  bnel        $s7, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x266684u;
    {
        const bool branch_taken_0x266684 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x266684) {
            ctx->pc = 0x266688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266684u;
            // 0x266688: 0xa6600118  sh          $zero, 0x118($s3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 19), 280), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2666C4u;
            goto label_2666c4;
        }
    }
    ctx->pc = 0x26668Cu;
    // 0x26668c: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x26668cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x266690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266694: 0xc089998  jal         func_226660
    ctx->pc = 0x266694u;
    SET_GPR_U32(ctx, 31, 0x26669Cu);
    ctx->pc = 0x266698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266694u;
    // 0x266698: 0x34a56a40  ori         $a1, $a1, 0x6A40 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27200);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x266694u, 0x26669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26669Cu;
label_26669c:
    // 0x26669c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x26669Cu;
    {
        const bool branch_taken_0x26669c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26669c) {
            ctx->pc = 0x2666A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26669Cu;
            // 0x2666a0: 0xa6600118  sh          $zero, 0x118($s3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 19), 280), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2666C4u;
            goto label_2666c4;
        }
    }
    ctx->pc = 0x2666A4u;
    // 0x2666a4: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2666a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x2666a8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2666a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2666ac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2666acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2666b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2666b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2666b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2666b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2666b8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2666B8u;
    {
        const bool branch_taken_0x2666b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2666b8) {
            ctx->pc = 0x266784u;
            goto label_266784;
        }
    }
    ctx->pc = 0x2666C0u;
    // 0x2666c0: 0xa6600118  sh          $zero, 0x118($s3)
    ctx->pc = 0x2666c0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 280), (uint16_t)GPR_U32(ctx, 0));
label_2666c4:
    // 0x2666c4: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x2666c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2666c8: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x2666c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x2666cc: 0x8c500020  lw          $s0, 0x20($v0)
    ctx->pc = 0x2666ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2666d0: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2666D0u;
    {
        const bool branch_taken_0x2666d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2666D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666D0u;
        // 0x2666d4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2666d0) {
            ctx->pc = 0x2666E0u;
            goto label_2666e0;
        }
    }
    ctx->pc = 0x2666D8u;
    // 0x2666d8: 0x16020110  bne         $s0, $v0, . + 4 + (0x110 << 2)
    ctx->pc = 0x2666D8u;
    {
        const bool branch_taken_0x2666d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2666DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666D8u;
        // 0x2666dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2666d8) {
            ctx->pc = 0x266B1Cu;
            goto label_266b1c;
        }
    }
    ctx->pc = 0x2666E0u;
label_2666e0:
    // 0x2666e0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2666e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2666e4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2666e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2666e8: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2666E8u;
    SET_GPR_U32(ctx, 31, 0x2666F0u);
    ctx->pc = 0x2666ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2666E8u;
    // 0x2666ec: 0x2484b898  addiu       $a0, $a0, -0x4768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2666E8u, 0x2666F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2666F0u;
label_2666f0:
    // 0x2666f0: 0x2c42003c  sltiu       $v0, $v0, 0x3C
    ctx->pc = 0x2666f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x2666f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2666F4u;
    {
        const bool branch_taken_0x2666f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2666F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666F4u;
        // 0x2666f8: 0x3a03004c  xori        $v1, $s0, 0x4C (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)76);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2666f4) {
            ctx->pc = 0x26670Cu;
            goto label_26670c;
        }
    }
    ctx->pc = 0x2666FCu;
    // 0x2666fc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2666fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x266700: 0x24100011  addiu       $s0, $zero, 0x11
    ctx->pc = 0x266700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x266704: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x266704u;
    {
        const bool branch_taken_0x266704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266704u;
        // 0x266708: 0x43800a  movz        $s0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266704) {
            ctx->pc = 0x266710u;
            goto label_266710;
        }
    }
    ctx->pc = 0x26670Cu;
label_26670c:
    // 0x26670c: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x26670cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_266710:
    // 0x266710: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x266710u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x266714: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x266714u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x266718: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x266718u;
    {
        const bool branch_taken_0x266718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266718) {
            ctx->pc = 0x266730u;
            goto label_266730;
        }
    }
    ctx->pc = 0x266720u;
    // 0x266720: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x266720u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x266724: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x266724u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x266728: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x266728u;
    {
        const bool branch_taken_0x266728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266728) {
            ctx->pc = 0x266740u;
            goto label_266740;
        }
    }
    ctx->pc = 0x266730u;
label_266730:
    // 0x266730: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x266730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x266734: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x266734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x266738: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x266738u;
    {
        const bool branch_taken_0x266738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266738) {
            ctx->pc = 0x266748u;
            goto label_266748;
        }
    }
    ctx->pc = 0x266740u;
label_266740:
    // 0x266740: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x266740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x266744: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x266744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_266748:
    // 0x266748: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x266748u;
    SET_GPR_U32(ctx, 31, 0x266750u);
    ctx->pc = 0x26674Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266748u;
    // 0x26674c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x266748u, 0x266750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266750u;
label_266750:
    // 0x266750: 0x104000b8  beqz        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x266750u;
    {
        const bool branch_taken_0x266750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266750u;
        // 0x266754: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266750) {
            ctx->pc = 0x266A34u;
            goto label_266a34;
        }
    }
    ctx->pc = 0x266758u;
    // 0x266758: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x266758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26675c: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x26675cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x266760: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x266760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266764: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x266764u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x266768: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x266768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26676c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26676cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266770: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x266770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266774: 0xc088178  jal         func_2205E0
    ctx->pc = 0x266774u;
    SET_GPR_U32(ctx, 31, 0x26677Cu);
    ctx->pc = 0x266778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266774u;
    // 0x266778: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x266774u, 0x26677Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26677Cu;
label_26677c:
    // 0x26677c: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x26677Cu;
    {
        const bool branch_taken_0x26677c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26677Cu;
        // 0x266780: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26677c) {
            ctx->pc = 0x266B1Cu;
            goto label_266b1c;
        }
    }
    ctx->pc = 0x266784u;
label_266784:
    // 0x266784: 0xc088e30  jal         func_2238C0
    ctx->pc = 0x266784u;
    SET_GPR_U32(ctx, 31, 0x26678Cu);
    ctx->pc = 0x266788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266784u;
    // 0x266788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238C0u, 0x266784u, 0x26678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26678Cu;
label_26678c:
    // 0x26678c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26678Cu;
    {
        const bool branch_taken_0x26678c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26678c) {
            ctx->pc = 0x2667ACu;
            goto label_2667ac;
        }
    }
    ctx->pc = 0x266794u;
    // 0x266794: 0xc0e4060  jal         func_390180
    ctx->pc = 0x266794u;
    SET_GPR_U32(ctx, 31, 0x26679Cu);
    ctx->pc = 0x266798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266794u;
    // 0x266798: 0x2624036c  addiu       $a0, $s1, 0x36C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 876));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x266794u, 0x26679Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26679Cu;
label_26679c:
    // 0x26679c: 0xc0e6ee8  jal         func_39BBA0
    ctx->pc = 0x26679Cu;
    SET_GPR_U32(ctx, 31, 0x2667A4u);
    ctx->pc = 0x2667A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26679Cu;
    // 0x2667a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x26679Cu, 0x2667A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2667A4u;
label_2667a4:
    // 0x2667a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2667A4u;
    {
        const bool branch_taken_0x2667a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2667A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2667A4u;
        // 0x2667a8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2667a4) {
            ctx->pc = 0x2667B8u;
            goto label_2667b8;
        }
    }
    ctx->pc = 0x2667ACu;
label_2667ac:
    // 0x2667ac: 0xc08ba12  jal         func_22E848
    ctx->pc = 0x2667ACu;
    SET_GPR_U32(ctx, 31, 0x2667B4u);
    ctx->pc = 0x2667B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2667ACu;
    // 0x2667b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E848u, 0x2667ACu, 0x2667B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2667B4u;
label_2667b4:
    // 0x2667b4: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2667b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2667b8:
    // 0x2667b8: 0x862301be  lh          $v1, 0x1BE($s1)
    ctx->pc = 0x2667b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
    // 0x2667bc: 0x2444de68  addiu       $a0, $v0, -0x2198
    ctx->pc = 0x2667bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958696));
    // 0x2667c0: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x2667c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2667c4: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2667C4u;
    {
        const bool branch_taken_0x2667c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2667C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2667C4u;
        // 0x2667c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2667c4) {
            ctx->pc = 0x2667FCu;
            goto label_2667fc;
        }
    }
    ctx->pc = 0x2667CCu;
    // 0x2667cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2667ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2667d0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2667D0u;
    {
        const bool branch_taken_0x2667d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2667D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2667D0u;
        // 0x2667d4: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2667d0) {
            ctx->pc = 0x2667E8u;
            goto label_2667e8;
        }
    }
    ctx->pc = 0x2667D8u;
    // 0x2667d8: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x2667d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2667dc: 0x862201c0  lh          $v0, 0x1C0($s1)
    ctx->pc = 0x2667dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x2667e0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2667E0u;
    {
        const bool branch_taken_0x2667e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2667E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2667E0u;
        // 0x2667e4: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2667e0) {
            ctx->pc = 0x2667F8u;
            goto label_2667f8;
        }
    }
    ctx->pc = 0x2667E8u;
label_2667e8:
    // 0x2667e8: 0x8e2301c0  lw          $v1, 0x1C0($s1)
    ctx->pc = 0x2667e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x2667ec: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x2667ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
    // 0x2667f0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2667F0u;
    {
        const bool branch_taken_0x2667f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2667f0) {
            ctx->pc = 0x2667FCu;
            goto label_2667fc;
        }
    }
    ctx->pc = 0x2667F8u;
label_2667f8:
    // 0x2667f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2667f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2667fc:
    // 0x2667fc: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2667FCu;
    {
        const bool branch_taken_0x2667fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2667fc) {
            ctx->pc = 0x266838u;
            goto label_266838;
        }
    }
    ctx->pc = 0x266804u;
    // 0x266804: 0xc095018  jal         func_254060
    ctx->pc = 0x266804u;
    SET_GPR_U32(ctx, 31, 0x26680Cu);
    ctx->pc = 0x266808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266804u;
    // 0x266808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x266804u, 0x26680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26680Cu;
label_26680c:
    // 0x26680c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x26680cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x266810: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x266810u;
    {
        const bool branch_taken_0x266810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x266814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266810u;
        // 0x266814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266810) {
            ctx->pc = 0x266828u;
            goto label_266828;
        }
    }
    ctx->pc = 0x266818u;
    // 0x266818: 0xc094fca  jal         func_253F28
    ctx->pc = 0x266818u;
    SET_GPR_U32(ctx, 31, 0x266820u);
    ctx->pc = 0x26681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266818u;
    // 0x26681c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x266818u, 0x266820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266820u;
label_266820:
    // 0x266820: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x266820u;
    {
        const bool branch_taken_0x266820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266820) {
            ctx->pc = 0x266830u;
            goto label_266830;
        }
    }
    ctx->pc = 0x266828u;
label_266828:
    // 0x266828: 0xc094fde  jal         func_253F78
    ctx->pc = 0x266828u;
    SET_GPR_U32(ctx, 31, 0x266830u);
    ctx->pc = 0x26682Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266828u;
    // 0x26682c: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x266828u, 0x266830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266830u;
label_266830:
    // 0x266830: 0xc088420  jal         func_221080
    ctx->pc = 0x266830u;
    SET_GPR_U32(ctx, 31, 0x266838u);
    ctx->pc = 0x266834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266830u;
    // 0x266834: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x266830u, 0x266838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266838u;
label_266838:
    // 0x266838: 0xc089fd0  jal         func_227F40
    ctx->pc = 0x266838u;
    SET_GPR_U32(ctx, 31, 0x266840u);
    ctx->pc = 0x26683Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266838u;
    // 0x26683c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F40u, 0x266838u, 0x266840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266840u;
label_266840:
    // 0x266840: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x266840u;
    {
        const bool branch_taken_0x266840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266840u;
        // 0x266844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266840) {
            ctx->pc = 0x26685Cu;
            goto label_26685c;
        }
    }
    ctx->pc = 0x266848u;
    // 0x266848: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x266848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26684c: 0xc09acca  jal         func_26B328
    ctx->pc = 0x26684Cu;
    SET_GPR_U32(ctx, 31, 0x266854u);
    ctx->pc = 0x266850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26684Cu;
    // 0x266850: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B328u, 0x26684Cu, 0x266854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266854u;
label_266854:
    // 0x266854: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x266854u;
    {
        const bool branch_taken_0x266854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266854u;
        // 0x266858: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266854) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x26685Cu;
label_26685c:
    // 0x26685c: 0xc089fe4  jal         func_227F90
    ctx->pc = 0x26685Cu;
    SET_GPR_U32(ctx, 31, 0x266864u);
    ctx->pc = 0x266860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26685Cu;
    // 0x266860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x26685Cu, 0x266864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266864u;
label_266864:
    // 0x266864: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x266864u;
    {
        const bool branch_taken_0x266864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266864u;
        // 0x266868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266864) {
            ctx->pc = 0x266880u;
            goto label_266880;
        }
    }
    ctx->pc = 0x26686Cu;
    // 0x26686c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26686cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266870: 0xc09acf6  jal         func_26B3D8
    ctx->pc = 0x266870u;
    SET_GPR_U32(ctx, 31, 0x266878u);
    ctx->pc = 0x266874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266870u;
    // 0x266874: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B3D8u, 0x266870u, 0x266878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266878u;
label_266878:
    // 0x266878: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x266878u;
    {
        const bool branch_taken_0x266878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266878u;
        // 0x26687c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266878) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266880u;
label_266880:
    // 0x266880: 0xc089fee  jal         func_227FB8
    ctx->pc = 0x266880u;
    SET_GPR_U32(ctx, 31, 0x266888u);
    ctx->pc = 0x266884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266880u;
    // 0x266884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FB8u, 0x266880u, 0x266888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266888u;
label_266888:
    // 0x266888: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x266888u;
    {
        const bool branch_taken_0x266888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266888) {
            ctx->pc = 0x2668B0u;
            goto label_2668b0;
        }
    }
    ctx->pc = 0x266890u;
    // 0x266890: 0x16510007  bne         $s2, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x266890u;
    {
        const bool branch_taken_0x266890 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x266890) {
            ctx->pc = 0x2668B0u;
            goto label_2668b0;
        }
    }
    ctx->pc = 0x266898u;
    // 0x266898: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x266898u;
    {
        const bool branch_taken_0x266898 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x266898) {
            ctx->pc = 0x2668B0u;
            goto label_2668b0;
        }
    }
    ctx->pc = 0x2668A0u;
    // 0x2668a0: 0xc09acfa  jal         func_26B3E8
    ctx->pc = 0x2668A0u;
    SET_GPR_U32(ctx, 31, 0x2668A8u);
    ctx->pc = 0x2668A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2668A0u;
    // 0x2668a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B3E8u, 0x2668A0u, 0x2668A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2668A8u;
label_2668a8:
    // 0x2668a8: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x2668A8u;
    {
        const bool branch_taken_0x2668a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2668ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668A8u;
        // 0x2668ac: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2668a8) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x2668B0u;
label_2668b0:
    // 0x2668b0: 0xc08a02c  jal         func_2280B0
    ctx->pc = 0x2668B0u;
    SET_GPR_U32(ctx, 31, 0x2668B8u);
    ctx->pc = 0x2668B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2668B0u;
    // 0x2668b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2280B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2280B0u, 0x2668B0u, 0x2668B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2668B8u;
label_2668b8:
    // 0x2668b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2668B8u;
    {
        const bool branch_taken_0x2668b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2668BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668B8u;
        // 0x2668bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2668b8) {
            ctx->pc = 0x2668D0u;
            goto label_2668d0;
        }
    }
    ctx->pc = 0x2668C0u;
    // 0x2668c0: 0xc09a2ac  jal         func_268AB0
    ctx->pc = 0x2668C0u;
    SET_GPR_U32(ctx, 31, 0x2668C8u);
    ctx->pc = 0x2668C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2668C0u;
    // 0x2668c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268AB0u, 0x2668C0u, 0x2668C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2668C8u;
label_2668c8:
    // 0x2668c8: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x2668C8u;
    {
        const bool branch_taken_0x2668c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2668CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668C8u;
        // 0x2668cc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2668c8) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x2668D0u;
label_2668d0:
    // 0x2668d0: 0xc08a034  jal         func_2280D0
    ctx->pc = 0x2668D0u;
    SET_GPR_U32(ctx, 31, 0x2668D8u);
    ctx->pc = 0x2668D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2668D0u;
    // 0x2668d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2280D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2280D0u, 0x2668D0u, 0x2668D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2668D8u;
label_2668d8:
    // 0x2668d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2668D8u;
    {
        const bool branch_taken_0x2668d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2668DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668D8u;
        // 0x2668dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2668d8) {
            ctx->pc = 0x2668F0u;
            goto label_2668f0;
        }
    }
    ctx->pc = 0x2668E0u;
    // 0x2668e0: 0xc09a2e2  jal         func_268B88
    ctx->pc = 0x2668E0u;
    SET_GPR_U32(ctx, 31, 0x2668E8u);
    ctx->pc = 0x2668E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2668E0u;
    // 0x2668e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268B88u, 0x2668E0u, 0x2668E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2668E8u;
label_2668e8:
    // 0x2668e8: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x2668E8u;
    {
        const bool branch_taken_0x2668e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2668ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668E8u;
        // 0x2668ec: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2668e8) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x2668F0u;
label_2668f0:
    // 0x2668f0: 0xc08a014  jal         func_228050
    ctx->pc = 0x2668F0u;
    SET_GPR_U32(ctx, 31, 0x2668F8u);
    ctx->pc = 0x2668F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2668F0u;
    // 0x2668f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228050u, 0x2668F0u, 0x2668F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2668F8u;
label_2668f8:
    // 0x2668f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2668F8u;
    {
        const bool branch_taken_0x2668f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2668FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668F8u;
        // 0x2668fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2668f8) {
            ctx->pc = 0x266910u;
            goto label_266910;
        }
    }
    ctx->pc = 0x266900u;
    // 0x266900: 0xc09a314  jal         func_268C50
    ctx->pc = 0x266900u;
    SET_GPR_U32(ctx, 31, 0x266908u);
    ctx->pc = 0x266904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266900u;
    // 0x266904: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268C50u, 0x266900u, 0x266908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266908u;
label_266908:
    // 0x266908: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x266908u;
    {
        const bool branch_taken_0x266908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266908u;
        // 0x26690c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266908) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266910u;
label_266910:
    // 0x266910: 0xc08a01c  jal         func_228070
    ctx->pc = 0x266910u;
    SET_GPR_U32(ctx, 31, 0x266918u);
    ctx->pc = 0x266914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266910u;
    // 0x266914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228070u, 0x266910u, 0x266918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266918u;
label_266918:
    // 0x266918: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x266918u;
    {
        const bool branch_taken_0x266918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266918u;
        // 0x26691c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266918) {
            ctx->pc = 0x266930u;
            goto label_266930;
        }
    }
    ctx->pc = 0x266920u;
    // 0x266920: 0xc09a37e  jal         func_268DF8
    ctx->pc = 0x266920u;
    SET_GPR_U32(ctx, 31, 0x266928u);
    ctx->pc = 0x266924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266920u;
    // 0x266924: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268DF8u, 0x266920u, 0x266928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266928u;
label_266928:
    // 0x266928: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x266928u;
    {
        const bool branch_taken_0x266928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266928u;
        // 0x26692c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266928) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266930u;
label_266930:
    // 0x266930: 0xc08a024  jal         func_228090
    ctx->pc = 0x266930u;
    SET_GPR_U32(ctx, 31, 0x266938u);
    ctx->pc = 0x266934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266930u;
    // 0x266934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228090u, 0x266930u, 0x266938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266938u;
label_266938:
    // 0x266938: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x266938u;
    {
        const bool branch_taken_0x266938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266938u;
        // 0x26693c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266938) {
            ctx->pc = 0x266950u;
            goto label_266950;
        }
    }
    ctx->pc = 0x266940u;
    // 0x266940: 0xc09a394  jal         func_268E50
    ctx->pc = 0x266940u;
    SET_GPR_U32(ctx, 31, 0x266948u);
    ctx->pc = 0x266944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266940u;
    // 0x266944: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268E50u, 0x266940u, 0x266948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266948u;
label_266948:
    // 0x266948: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x266948u;
    {
        const bool branch_taken_0x266948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266948u;
        // 0x26694c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266948) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266950u;
label_266950:
    // 0x266950: 0xc088e48  jal         func_223920
    ctx->pc = 0x266950u;
    SET_GPR_U32(ctx, 31, 0x266958u);
    ctx->pc = 0x266954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266950u;
    // 0x266954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223920u, 0x266950u, 0x266958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266958u;
label_266958:
    // 0x266958: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x266958u;
    {
        const bool branch_taken_0x266958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266958u;
        // 0x26695c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266958) {
            ctx->pc = 0x266970u;
            goto label_266970;
        }
    }
    ctx->pc = 0x266960u;
    // 0x266960: 0xc09a234  jal         func_2688D0
    ctx->pc = 0x266960u;
    SET_GPR_U32(ctx, 31, 0x266968u);
    ctx->pc = 0x266964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266960u;
    // 0x266964: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2688D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2688D0u, 0x266960u, 0x266968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266968u;
label_266968:
    // 0x266968: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x266968u;
    {
        const bool branch_taken_0x266968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266968u;
        // 0x26696c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266968) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266970u;
label_266970:
    // 0x266970: 0xc088e38  jal         func_2238E0
    ctx->pc = 0x266970u;
    SET_GPR_U32(ctx, 31, 0x266978u);
    ctx->pc = 0x266974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266970u;
    // 0x266974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238E0u, 0x266970u, 0x266978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266978u;
label_266978:
    // 0x266978: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x266978u;
    {
        const bool branch_taken_0x266978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266978u;
        // 0x26697c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266978) {
            ctx->pc = 0x266990u;
            goto label_266990;
        }
    }
    ctx->pc = 0x266980u;
    // 0x266980: 0xc09a6ac  jal         func_269AB0
    ctx->pc = 0x266980u;
    SET_GPR_U32(ctx, 31, 0x266988u);
    ctx->pc = 0x266984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266980u;
    // 0x266984: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269AB0u, 0x266980u, 0x266988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266988u;
label_266988:
    // 0x266988: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x266988u;
    {
        const bool branch_taken_0x266988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266988u;
        // 0x26698c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266988) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266990u;
label_266990:
    // 0x266990: 0xc088e60  jal         func_223980
    ctx->pc = 0x266990u;
    SET_GPR_U32(ctx, 31, 0x266998u);
    ctx->pc = 0x266994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266990u;
    // 0x266994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x266990u, 0x266998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266998u;
label_266998:
    // 0x266998: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x266998u;
    {
        const bool branch_taken_0x266998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266998u;
        // 0x26699c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266998) {
            ctx->pc = 0x2669B0u;
            goto label_2669b0;
        }
    }
    ctx->pc = 0x2669A0u;
    // 0x2669a0: 0xc09a3aa  jal         func_268EA8
    ctx->pc = 0x2669A0u;
    SET_GPR_U32(ctx, 31, 0x2669A8u);
    ctx->pc = 0x2669A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2669A0u;
    // 0x2669a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268EA8u, 0x2669A0u, 0x2669A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2669A8u;
label_2669a8:
    // 0x2669a8: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2669A8u;
    {
        const bool branch_taken_0x2669a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2669ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669A8u;
        // 0x2669ac: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2669a8) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x2669B0u;
label_2669b0:
    // 0x2669b0: 0xc088e40  jal         func_223900
    ctx->pc = 0x2669B0u;
    SET_GPR_U32(ctx, 31, 0x2669B8u);
    ctx->pc = 0x2669B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2669B0u;
    // 0x2669b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x2669B0u, 0x2669B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2669B8u;
label_2669b8:
    // 0x2669b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2669B8u;
    {
        const bool branch_taken_0x2669b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2669BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669B8u;
        // 0x2669bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2669b8) {
            ctx->pc = 0x2669D0u;
            goto label_2669d0;
        }
    }
    ctx->pc = 0x2669C0u;
    // 0x2669c0: 0xc09a59c  jal         func_269670
    ctx->pc = 0x2669C0u;
    SET_GPR_U32(ctx, 31, 0x2669C8u);
    ctx->pc = 0x2669C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2669C0u;
    // 0x2669c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269670u, 0x2669C0u, 0x2669C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2669C8u;
label_2669c8:
    // 0x2669c8: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2669C8u;
    {
        const bool branch_taken_0x2669c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2669CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669C8u;
        // 0x2669cc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2669c8) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x2669D0u;
label_2669d0:
    // 0x2669d0: 0xc08a046  jal         func_228118
    ctx->pc = 0x2669D0u;
    SET_GPR_U32(ctx, 31, 0x2669D8u);
    ctx->pc = 0x2669D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2669D0u;
    // 0x2669d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228118u, 0x2669D0u, 0x2669D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2669D8u;
label_2669d8:
    // 0x2669d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2669D8u;
    {
        const bool branch_taken_0x2669d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2669DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669D8u;
        // 0x2669dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2669d8) {
            ctx->pc = 0x2669F0u;
            goto label_2669f0;
        }
    }
    ctx->pc = 0x2669E0u;
    // 0x2669e0: 0xc09a6b0  jal         func_269AC0
    ctx->pc = 0x2669E0u;
    SET_GPR_U32(ctx, 31, 0x2669E8u);
    ctx->pc = 0x2669E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2669E0u;
    // 0x2669e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269AC0u, 0x2669E0u, 0x2669E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2669E8u;
label_2669e8:
    // 0x2669e8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2669E8u;
    {
        const bool branch_taken_0x2669e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2669ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669E8u;
        // 0x2669ec: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2669e8) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x2669F0u;
label_2669f0:
    // 0x2669f0: 0xc08a050  jal         func_228140
    ctx->pc = 0x2669F0u;
    SET_GPR_U32(ctx, 31, 0x2669F8u);
    ctx->pc = 0x2669F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2669F0u;
    // 0x2669f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228140u, 0x2669F0u, 0x2669F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2669F8u;
label_2669f8:
    // 0x2669f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2669F8u;
    {
        const bool branch_taken_0x2669f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2669FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669F8u;
        // 0x2669fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2669f8) {
            ctx->pc = 0x266A10u;
            goto label_266a10;
        }
    }
    ctx->pc = 0x266A00u;
    // 0x266a00: 0xc09a6c6  jal         func_269B18
    ctx->pc = 0x266A00u;
    SET_GPR_U32(ctx, 31, 0x266A08u);
    ctx->pc = 0x266A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266A00u;
    // 0x266a04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269B18u, 0x266A00u, 0x266A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266A08u;
label_266a08:
    // 0x266a08: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x266A08u;
    {
        const bool branch_taken_0x266a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A08u;
        // 0x266a0c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a08) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266A10u;
label_266a10:
    // 0x266a10: 0xc088e78  jal         func_2239E0
    ctx->pc = 0x266A10u;
    SET_GPR_U32(ctx, 31, 0x266A18u);
    ctx->pc = 0x266A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266A10u;
    // 0x266a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E0u, 0x266A10u, 0x266A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266A18u;
label_266a18:
    // 0x266a18: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x266A18u;
    {
        const bool branch_taken_0x266a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266a18) {
            ctx->pc = 0x266A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266A18u;
            // 0x266a1c: 0xa6600118  sh          $zero, 0x118($s3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 19), 280), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266A34u;
            goto label_266a34;
        }
    }
    ctx->pc = 0x266A20u;
    // 0x266a20: 0xc088e80  jal         func_223A00
    ctx->pc = 0x266A20u;
    SET_GPR_U32(ctx, 31, 0x266A28u);
    ctx->pc = 0x266A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266A20u;
    // 0x266a24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A00u, 0x266A20u, 0x266A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266A28u;
label_266a28:
    // 0x266a28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x266A28u;
    {
        const bool branch_taken_0x266a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266a28) {
            ctx->pc = 0x266A3Cu;
            goto label_266a3c;
        }
    }
    ctx->pc = 0x266A30u;
    // 0x266a30: 0xa6600118  sh          $zero, 0x118($s3)
    ctx->pc = 0x266a30u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 280), (uint16_t)GPR_U32(ctx, 0));
label_266a34:
    // 0x266a34: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x266A34u;
    {
        const bool branch_taken_0x266a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A34u;
        // 0x266a38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a34) {
            ctx->pc = 0x266B1Cu;
            goto label_266b1c;
        }
    }
    ctx->pc = 0x266A3Cu;
label_266a3c:
    // 0x266a3c: 0xc08a00a  jal         func_228028
    ctx->pc = 0x266A3Cu;
    SET_GPR_U32(ctx, 31, 0x266A44u);
    ctx->pc = 0x266A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266A3Cu;
    // 0x266a40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228028u, 0x266A3Cu, 0x266A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266A44u;
label_266a44:
    // 0x266a44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x266A44u;
    {
        const bool branch_taken_0x266a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A44u;
        // 0x266a48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a44) {
            ctx->pc = 0x266A5Cu;
            goto label_266a5c;
        }
    }
    ctx->pc = 0x266A4Cu;
    // 0x266a4c: 0xc09a10c  jal         func_268430
    ctx->pc = 0x266A4Cu;
    SET_GPR_U32(ctx, 31, 0x266A54u);
    ctx->pc = 0x266A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266A4Cu;
    // 0x266a50: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268430u, 0x266A4Cu, 0x266A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266A54u;
label_266a54:
    // 0x266a54: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x266A54u;
    {
        const bool branch_taken_0x266a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A54u;
        // 0x266a58: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a54) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266A5Cu;
label_266a5c:
    // 0x266a5c: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x266A5Cu;
    SET_GPR_U32(ctx, 31, 0x266A64u);
    ctx->pc = 0x266A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266A5Cu;
    // 0x266a60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x266A5Cu, 0x266A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266A64u;
label_266a64:
    // 0x266a64: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x266A64u;
    {
        const bool branch_taken_0x266a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A64u;
        // 0x266a68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a64) {
            ctx->pc = 0x266A8Cu;
            goto label_266a8c;
        }
    }
    ctx->pc = 0x266A6Cu;
    // 0x266a6c: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x266A6Cu;
    SET_GPR_U32(ctx, 31, 0x266A74u);
    ctx->pc = 0x266A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266A6Cu;
    // 0x266a70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x266A6Cu, 0x266A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266A74u;
label_266a74:
    // 0x266a74: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x266A74u;
    {
        const bool branch_taken_0x266a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A74u;
        // 0x266a78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a74) {
            ctx->pc = 0x266A8Cu;
            goto label_266a8c;
        }
    }
    ctx->pc = 0x266A7Cu;
    // 0x266a7c: 0xc089f86  jal         func_227E18
    ctx->pc = 0x266A7Cu;
    SET_GPR_U32(ctx, 31, 0x266A84u);
    ctx->pc = 0x266A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266A7Cu;
    // 0x266a80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x266A7Cu, 0x266A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266A84u;
label_266a84:
    // 0x266a84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x266A84u;
    {
        const bool branch_taken_0x266a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A84u;
        // 0x266a88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a84) {
            ctx->pc = 0x266A9Cu;
            goto label_266a9c;
        }
    }
    ctx->pc = 0x266A8Cu;
label_266a8c:
    // 0x266a8c: 0xc09a1ba  jal         func_2686E8
    ctx->pc = 0x266A8Cu;
    SET_GPR_U32(ctx, 31, 0x266A94u);
    ctx->pc = 0x266A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266A8Cu;
    // 0x266a90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2686E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2686E8u, 0x266A8Cu, 0x266A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266A94u;
label_266a94:
    // 0x266a94: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x266A94u;
    {
        const bool branch_taken_0x266a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A94u;
        // 0x266a98: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a94) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266A9Cu;
label_266a9c:
    // 0x266a9c: 0xc089f66  jal         func_227D98
    ctx->pc = 0x266A9Cu;
    SET_GPR_U32(ctx, 31, 0x266AA4u);
    ctx->pc = 0x266AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266A9Cu;
    // 0x266aa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x266A9Cu, 0x266AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266AA4u;
label_266aa4:
    // 0x266aa4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x266AA4u;
    {
        const bool branch_taken_0x266aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AA4u;
        // 0x266aa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266aa4) {
            ctx->pc = 0x266AD0u;
            goto label_266ad0;
        }
    }
    ctx->pc = 0x266AACu;
    // 0x266aac: 0xc088ed2  jal         func_223B48
    ctx->pc = 0x266AACu;
    SET_GPR_U32(ctx, 31, 0x266AB4u);
    ctx->pc = 0x266AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266AACu;
    // 0x266ab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x266AACu, 0x266AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266AB4u;
label_266ab4:
    // 0x266ab4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x266AB4u;
    {
        const bool branch_taken_0x266ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AB4u;
        // 0x266ab8: 0x3c0500c4  lui         $a1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)196 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ab4) {
            ctx->pc = 0x266AE0u;
            goto label_266ae0;
        }
    }
    ctx->pc = 0x266ABCu;
    // 0x266abc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266ac0: 0xc089998  jal         func_226660
    ctx->pc = 0x266AC0u;
    SET_GPR_U32(ctx, 31, 0x266AC8u);
    ctx->pc = 0x266AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266AC0u;
    // 0x266ac4: 0x34a58000  ori         $a1, $a1, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x266AC0u, 0x266AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266AC8u;
label_266ac8:
    // 0x266ac8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x266AC8u;
    {
        const bool branch_taken_0x266ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AC8u;
        // 0x266acc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ac8) {
            ctx->pc = 0x266AE0u;
            goto label_266ae0;
        }
    }
    ctx->pc = 0x266AD0u;
label_266ad0:
    // 0x266ad0: 0xc09a6e0  jal         func_269B80
    ctx->pc = 0x266AD0u;
    SET_GPR_U32(ctx, 31, 0x266AD8u);
    ctx->pc = 0x266AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266AD0u;
    // 0x266ad4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269B80u, 0x266AD0u, 0x266AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266AD8u;
label_266ad8:
    // 0x266ad8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x266AD8u;
    {
        const bool branch_taken_0x266ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AD8u;
        // 0x266adc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ad8) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266AE0u;
label_266ae0:
    // 0x266ae0: 0x17c00006  bnez        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x266AE0u;
    {
        const bool branch_taken_0x266ae0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x266AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AE0u;
        // 0x266ae4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ae0) {
            ctx->pc = 0x266AFCu;
            goto label_266afc;
        }
    }
    ctx->pc = 0x266AE8u;
    // 0x266ae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266aec: 0xc09ac28  jal         func_26B0A0
    ctx->pc = 0x266AECu;
    SET_GPR_U32(ctx, 31, 0x266AF4u);
    ctx->pc = 0x266AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266AECu;
    // 0x266af0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B0A0u, 0x266AECu, 0x266AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266AF4u;
label_266af4:
    // 0x266af4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x266AF4u;
    {
        const bool branch_taken_0x266af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AF4u;
        // 0x266af8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266af4) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266AFCu;
label_266afc:
    // 0x266afc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x266afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266b00: 0xc09ac5c  jal         func_26B170
    ctx->pc = 0x266B00u;
    SET_GPR_U32(ctx, 31, 0x266B08u);
    ctx->pc = 0x266B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266B00u;
    // 0x266b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B170u, 0x266B00u, 0x266B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266B08u;
label_266b08:
    // 0x266b08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x266b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266b0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266b10: 0xc0899fa  jal         func_2267E8
    ctx->pc = 0x266B10u;
    SET_GPR_U32(ctx, 31, 0x266B18u);
    ctx->pc = 0x266B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266B10u;
    // 0x266b14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267E8u, 0x266B10u, 0x266B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266B18u;
label_266b18:
    // 0x266b18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x266b18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_266b1c:
    // 0x266b1c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x266b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_266b20:
    // 0x266b20: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x266b20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x266b24: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x266b24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x266b28: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x266b28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x266b2c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x266b2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x266b30: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x266b30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x266b34: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x266b34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266b38: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x266b38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266b3c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x266b3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266b40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x266b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266b44: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x266b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x266b48: 0x3e00008  jr          $ra
    ctx->pc = 0x266B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B48u;
        // 0x266b4c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266B50u;
}
