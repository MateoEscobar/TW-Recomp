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

// Function: sub_003DD938
// Address: 0x3dd938 - 0x3ddb88
void sub_003DD938_0x3dd938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD938_0x3dd938");
#endif

    switch (ctx->pc) {
        case 0x3dd938u: goto label_3dd938;
        case 0x3dd93cu: goto label_3dd93c;
        case 0x3dd940u: goto label_3dd940;
        case 0x3dd944u: goto label_3dd944;
        case 0x3dd948u: goto label_3dd948;
        case 0x3dd94cu: goto label_3dd94c;
        case 0x3dd950u: goto label_3dd950;
        case 0x3dd954u: goto label_3dd954;
        case 0x3dd958u: goto label_3dd958;
        case 0x3dd95cu: goto label_3dd95c;
        case 0x3dd960u: goto label_3dd960;
        case 0x3dd964u: goto label_3dd964;
        case 0x3dd968u: goto label_3dd968;
        case 0x3dd96cu: goto label_3dd96c;
        case 0x3dd970u: goto label_3dd970;
        case 0x3dd974u: goto label_3dd974;
        case 0x3dd978u: goto label_3dd978;
        case 0x3dd97cu: goto label_3dd97c;
        case 0x3dd980u: goto label_3dd980;
        case 0x3dd984u: goto label_3dd984;
        case 0x3dd988u: goto label_3dd988;
        case 0x3dd98cu: goto label_3dd98c;
        case 0x3dd990u: goto label_3dd990;
        case 0x3dd994u: goto label_3dd994;
        case 0x3dd998u: goto label_3dd998;
        case 0x3dd99cu: goto label_3dd99c;
        case 0x3dd9a0u: goto label_3dd9a0;
        case 0x3dd9a4u: goto label_3dd9a4;
        case 0x3dd9a8u: goto label_3dd9a8;
        case 0x3dd9acu: goto label_3dd9ac;
        case 0x3dd9b0u: goto label_3dd9b0;
        case 0x3dd9b4u: goto label_3dd9b4;
        case 0x3dd9b8u: goto label_3dd9b8;
        case 0x3dd9bcu: goto label_3dd9bc;
        case 0x3dd9c0u: goto label_3dd9c0;
        case 0x3dd9c4u: goto label_3dd9c4;
        case 0x3dd9c8u: goto label_3dd9c8;
        case 0x3dd9ccu: goto label_3dd9cc;
        case 0x3dd9d0u: goto label_3dd9d0;
        case 0x3dd9d4u: goto label_3dd9d4;
        case 0x3dd9d8u: goto label_3dd9d8;
        case 0x3dd9dcu: goto label_3dd9dc;
        case 0x3dd9e0u: goto label_3dd9e0;
        case 0x3dd9e4u: goto label_3dd9e4;
        case 0x3dd9e8u: goto label_3dd9e8;
        case 0x3dd9ecu: goto label_3dd9ec;
        case 0x3dd9f0u: goto label_3dd9f0;
        case 0x3dd9f4u: goto label_3dd9f4;
        case 0x3dd9f8u: goto label_3dd9f8;
        case 0x3dd9fcu: goto label_3dd9fc;
        case 0x3dda00u: goto label_3dda00;
        case 0x3dda04u: goto label_3dda04;
        case 0x3dda08u: goto label_3dda08;
        case 0x3dda0cu: goto label_3dda0c;
        case 0x3dda10u: goto label_3dda10;
        case 0x3dda14u: goto label_3dda14;
        case 0x3dda18u: goto label_3dda18;
        case 0x3dda1cu: goto label_3dda1c;
        case 0x3dda20u: goto label_3dda20;
        case 0x3dda24u: goto label_3dda24;
        case 0x3dda28u: goto label_3dda28;
        case 0x3dda2cu: goto label_3dda2c;
        case 0x3dda30u: goto label_3dda30;
        case 0x3dda34u: goto label_3dda34;
        case 0x3dda38u: goto label_3dda38;
        case 0x3dda3cu: goto label_3dda3c;
        case 0x3dda40u: goto label_3dda40;
        case 0x3dda44u: goto label_3dda44;
        case 0x3dda48u: goto label_3dda48;
        case 0x3dda4cu: goto label_3dda4c;
        case 0x3dda50u: goto label_3dda50;
        case 0x3dda54u: goto label_3dda54;
        case 0x3dda58u: goto label_3dda58;
        case 0x3dda5cu: goto label_3dda5c;
        case 0x3dda60u: goto label_3dda60;
        case 0x3dda64u: goto label_3dda64;
        case 0x3dda68u: goto label_3dda68;
        case 0x3dda6cu: goto label_3dda6c;
        case 0x3dda70u: goto label_3dda70;
        case 0x3dda74u: goto label_3dda74;
        case 0x3dda78u: goto label_3dda78;
        case 0x3dda7cu: goto label_3dda7c;
        case 0x3dda80u: goto label_3dda80;
        case 0x3dda84u: goto label_3dda84;
        case 0x3dda88u: goto label_3dda88;
        case 0x3dda8cu: goto label_3dda8c;
        case 0x3dda90u: goto label_3dda90;
        case 0x3dda94u: goto label_3dda94;
        case 0x3dda98u: goto label_3dda98;
        case 0x3dda9cu: goto label_3dda9c;
        case 0x3ddaa0u: goto label_3ddaa0;
        case 0x3ddaa4u: goto label_3ddaa4;
        case 0x3ddaa8u: goto label_3ddaa8;
        case 0x3ddaacu: goto label_3ddaac;
        case 0x3ddab0u: goto label_3ddab0;
        case 0x3ddab4u: goto label_3ddab4;
        case 0x3ddab8u: goto label_3ddab8;
        case 0x3ddabcu: goto label_3ddabc;
        case 0x3ddac0u: goto label_3ddac0;
        case 0x3ddac4u: goto label_3ddac4;
        case 0x3ddac8u: goto label_3ddac8;
        case 0x3ddaccu: goto label_3ddacc;
        case 0x3ddad0u: goto label_3ddad0;
        case 0x3ddad4u: goto label_3ddad4;
        case 0x3ddad8u: goto label_3ddad8;
        case 0x3ddadcu: goto label_3ddadc;
        case 0x3ddae0u: goto label_3ddae0;
        case 0x3ddae4u: goto label_3ddae4;
        case 0x3ddae8u: goto label_3ddae8;
        case 0x3ddaecu: goto label_3ddaec;
        case 0x3ddaf0u: goto label_3ddaf0;
        case 0x3ddaf4u: goto label_3ddaf4;
        case 0x3ddaf8u: goto label_3ddaf8;
        case 0x3ddafcu: goto label_3ddafc;
        case 0x3ddb00u: goto label_3ddb00;
        case 0x3ddb04u: goto label_3ddb04;
        case 0x3ddb08u: goto label_3ddb08;
        case 0x3ddb0cu: goto label_3ddb0c;
        case 0x3ddb10u: goto label_3ddb10;
        case 0x3ddb14u: goto label_3ddb14;
        case 0x3ddb18u: goto label_3ddb18;
        case 0x3ddb1cu: goto label_3ddb1c;
        case 0x3ddb20u: goto label_3ddb20;
        case 0x3ddb24u: goto label_3ddb24;
        case 0x3ddb28u: goto label_3ddb28;
        case 0x3ddb2cu: goto label_3ddb2c;
        case 0x3ddb30u: goto label_3ddb30;
        case 0x3ddb34u: goto label_3ddb34;
        case 0x3ddb38u: goto label_3ddb38;
        case 0x3ddb3cu: goto label_3ddb3c;
        case 0x3ddb40u: goto label_3ddb40;
        case 0x3ddb44u: goto label_3ddb44;
        case 0x3ddb48u: goto label_3ddb48;
        case 0x3ddb4cu: goto label_3ddb4c;
        case 0x3ddb50u: goto label_3ddb50;
        case 0x3ddb54u: goto label_3ddb54;
        case 0x3ddb58u: goto label_3ddb58;
        case 0x3ddb5cu: goto label_3ddb5c;
        case 0x3ddb60u: goto label_3ddb60;
        case 0x3ddb64u: goto label_3ddb64;
        case 0x3ddb68u: goto label_3ddb68;
        case 0x3ddb6cu: goto label_3ddb6c;
        case 0x3ddb70u: goto label_3ddb70;
        case 0x3ddb74u: goto label_3ddb74;
        case 0x3ddb78u: goto label_3ddb78;
        case 0x3ddb7cu: goto label_3ddb7c;
        case 0x3ddb80u: goto label_3ddb80;
        case 0x3ddb84u: goto label_3ddb84;
        default: break;
    }

    ctx->pc = 0x3dd938u;

label_3dd938:
    // 0x3dd938: 0x27bdf700  addiu       $sp, $sp, -0x900
    ctx->pc = 0x3dd938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964992));
label_3dd93c:
    // 0x3dd93c: 0x7fb108d0  sq          $s1, 0x8D0($sp)
    ctx->pc = 0x3dd93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2256), GPR_VEC(ctx, 17));
label_3dd940:
    // 0x3dd940: 0x7fb308b0  sq          $s3, 0x8B0($sp)
    ctx->pc = 0x3dd940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2224), GPR_VEC(ctx, 19));
label_3dd944:
    // 0x3dd944: 0x7fb008e0  sq          $s0, 0x8E0($sp)
    ctx->pc = 0x3dd944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2272), GPR_VEC(ctx, 16));
label_3dd948:
    // 0x3dd948: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3dd948u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dd94c:
    // 0x3dd94c: 0x7fb208c0  sq          $s2, 0x8C0($sp)
    ctx->pc = 0x3dd94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2240), GPR_VEC(ctx, 18));
label_3dd950:
    // 0x3dd950: 0x7fb408a0  sq          $s4, 0x8A0($sp)
    ctx->pc = 0x3dd950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 20));
label_3dd954:
    // 0x3dd954: 0x7fb50890  sq          $s5, 0x890($sp)
    ctx->pc = 0x3dd954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 21));
label_3dd958:
    // 0x3dd958: 0x7fb60880  sq          $s6, 0x880($sp)
    ctx->pc = 0x3dd958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 22));
label_3dd95c:
    // 0x3dd95c: 0xffbf0870  sd          $ra, 0x870($sp)
    ctx->pc = 0x3dd95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2160), GPR_U64(ctx, 31));
label_3dd960:
    // 0x3dd960: 0xe7b408f0  swc1        $f20, 0x8F0($sp)
    ctx->pc = 0x3dd960u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2288), bits); }
label_3dd964:
    // 0x3dd964: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3dd964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3dd968:
    // 0x3dd968: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dd968u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dd96c:
    // 0x3dd96c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dd96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dd970:
    // 0x3dd970: 0x40f809  jalr        $v0
label_3dd974:
    if (ctx->pc == 0x3DD974u) {
        ctx->pc = 0x3DD974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD970u;
        // 0x3dd974: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD978u;
        goto label_3dd978;
    }
    ctx->pc = 0x3DD970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DD978u);
        ctx->pc = 0x3DD974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD970u;
        // 0x3dd974: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD970u, 0x3DD978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DD978u;
label_3dd978:
    // 0x3dd978: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3dd978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd97c:
    // 0x3dd97c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3dd97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3dd980:
    // 0x3dd980: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3dd980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3dd984:
    // 0x3dd984: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3dd984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3dd988:
    // 0x3dd988: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3dd988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3dd98c:
    // 0x3dd98c: 0x0  nop
    ctx->pc = 0x3dd98cu;
    // NOP
label_3dd990:
    // 0x3dd990: 0x0  nop
    ctx->pc = 0x3dd990u;
    // NOP
label_3dd994:
    // 0x3dd994: 0x0  nop
    ctx->pc = 0x3dd994u;
    // NOP
label_3dd998:
    // 0x3dd998: 0x0  nop
    ctx->pc = 0x3dd998u;
    // NOP
label_3dd99c:
    // 0x3dd99c: 0x0  nop
    ctx->pc = 0x3dd99cu;
    // NOP
label_3dd9a0:
    // 0x3dd9a0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3dd9a4:
    if (ctx->pc == 0x3DD9A4u) {
        ctx->pc = 0x3DD9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD9A0u;
        // 0x3dd9a4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD9A8u;
        goto label_3dd9a8;
    }
    ctx->pc = 0x3DD9A0u;
    {
        const bool branch_taken_0x3dd9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DD9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD9A0u;
        // 0x3dd9a4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd9a0) {
            ctx->pc = 0x3DD990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd990;
        }
    }
    ctx->pc = 0x3DD9A8u;
label_3dd9a8:
    // 0x3dd9a8: 0xc138ddc  jal         func_4E3770
label_3dd9ac:
    if (ctx->pc == 0x3DD9ACu) {
        ctx->pc = 0x3DD9B0u;
        goto label_3dd9b0;
    }
    ctx->pc = 0x3DD9A8u;
    SET_GPR_U32(ctx, 31, 0x3DD9B0u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3DD9A8u, 0x3DD9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD9B0u;
label_3dd9b0:
    // 0x3dd9b0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3dd9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3dd9b4:
    // 0x3dd9b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3dd9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dd9b8:
    // 0x3dd9b8: 0x5462005c  bnel        $v1, $v0, . + 4 + (0x5C << 2)
label_3dd9bc:
    if (ctx->pc == 0x3DD9BCu) {
        ctx->pc = 0x3DD9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD9B8u;
        // 0x3dd9bc: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD9C0u;
        goto label_3dd9c0;
    }
    ctx->pc = 0x3DD9B8u;
    {
        const bool branch_taken_0x3dd9b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dd9b8) {
            ctx->pc = 0x3DD9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DD9B8u;
            // 0x3dd9bc: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DDB2Cu;
            goto label_3ddb2c;
        }
    }
    ctx->pc = 0x3DD9C0u;
label_3dd9c0:
    // 0x3dd9c0: 0xc0e9694  jal         func_3A5A50
label_3dd9c4:
    if (ctx->pc == 0x3DD9C4u) {
        ctx->pc = 0x3DD9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD9C0u;
        // 0x3dd9c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD9C8u;
        goto label_3dd9c8;
    }
    ctx->pc = 0x3DD9C0u;
    SET_GPR_U32(ctx, 31, 0x3DD9C8u);
    ctx->pc = 0x3DD9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD9C0u;
    // 0x3dd9c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3DD9C0u, 0x3DD9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD9C8u;
label_3dd9c8:
    // 0x3dd9c8: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_3dd9cc:
    if (ctx->pc == 0x3DD9CCu) {
        ctx->pc = 0x3DD9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD9C8u;
        // 0x3dd9cc: 0x27b20850  addiu       $s2, $sp, 0x850 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD9D0u;
        goto label_3dd9d0;
    }
    ctx->pc = 0x3DD9C8u;
    {
        const bool branch_taken_0x3dd9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD9C8u;
        // 0x3dd9cc: 0x27b20850  addiu       $s2, $sp, 0x850 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd9c8) {
            ctx->pc = 0x3DDB28u;
            goto label_3ddb28;
        }
    }
    ctx->pc = 0x3DD9D0u;
label_3dd9d0:
    // 0x3dd9d0: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3dd9d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3dd9d4:
    // 0x3dd9d4: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x3dd9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_3dd9d8:
    // 0x3dd9d8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3dd9d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3dd9dc:
    // 0x3dd9dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3dd9dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3dd9e0:
    // 0x3dd9e0: 0x27b40410  addiu       $s4, $sp, 0x410
    ctx->pc = 0x3dd9e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3dd9e4:
    // 0x3dd9e4: 0x3c013fb9  lui         $at, 0x3FB9
    ctx->pc = 0x3dd9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16313 << 16));
label_3dd9e8:
    // 0x3dd9e8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3dd9e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3dd9ec:
    // 0x3dd9ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3dd9ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dd9f0:
    // 0x3dd9f0: 0x27b60820  addiu       $s6, $sp, 0x820
    ctx->pc = 0x3dd9f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 2080));
label_3dd9f4:
    // 0x3dd9f4: 0xe7a10850  swc1        $f1, 0x850($sp)
    ctx->pc = 0x3dd9f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2128), bits); }
label_3dd9f8:
    // 0x3dd9f8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3dd9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3dd9fc:
    // 0x3dd9fc: 0x7fa20820  sq          $v0, 0x820($sp)
    ctx->pc = 0x3dd9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 2));
label_3dda00:
    // 0x3dda00: 0x261051b0  addiu       $s0, $s0, 0x51B0
    ctx->pc = 0x3dda00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20912));
label_3dda04:
    // 0x3dda04: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x3dda04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_3dda08:
    // 0x3dda08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3dda08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3dda0c:
    // 0x3dda0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3dda0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3dda10:
    // 0x3dda10: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3dda10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3dda14:
    // 0x3dda14: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3dda14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3dda18:
    // 0x3dda18: 0xafa00858  sw          $zero, 0x858($sp)
    ctx->pc = 0x3dda18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2136), GPR_U32(ctx, 0));
label_3dda1c:
    // 0x3dda1c: 0x27a60830  addiu       $a2, $sp, 0x830
    ctx->pc = 0x3dda1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
label_3dda20:
    // 0x3dda20: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x3dda20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3dda24:
    // 0x3dda24: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3dda24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dda28:
    // 0x3dda28: 0x26750010  addiu       $s5, $s3, 0x10
    ctx->pc = 0x3dda28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3dda2c:
    // 0x3dda2c: 0x7ba20850  lq          $v0, 0x850($sp)
    ctx->pc = 0x3dda2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2128)));
label_3dda30:
    // 0x3dda30: 0x7fa20830  sq          $v0, 0x830($sp)
    ctx->pc = 0x3dda30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 2));
label_3dda34:
    // 0x3dda34: 0x7fa20840  sq          $v0, 0x840($sp)
    ctx->pc = 0x3dda34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
label_3dda38:
    // 0x3dda38: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dda38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3dda3c:
    // 0x3dda3c: 0xc0e9fa6  jal         func_3A7E98
label_3dda40:
    if (ctx->pc == 0x3DDA40u) {
        ctx->pc = 0x3DDA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDA3Cu;
        // 0x3dda40: 0xafa30850  sw          $v1, 0x850($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDA44u;
        goto label_3dda44;
    }
    ctx->pc = 0x3DDA3Cu;
    SET_GPR_U32(ctx, 31, 0x3DDA44u);
    ctx->pc = 0x3DDA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDA3Cu;
    // 0x3dda40: 0xafa30850  sw          $v1, 0x850($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2128), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3DDA3Cu, 0x3DDA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDA44u;
label_3dda44:
    // 0x3dda44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dda44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dda48:
    // 0x3dda48: 0xc0f15bc  jal         func_3C56F0
label_3dda4c:
    if (ctx->pc == 0x3DDA4Cu) {
        ctx->pc = 0x3DDA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDA48u;
        // 0x3dda4c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDA50u;
        goto label_3dda50;
    }
    ctx->pc = 0x3DDA48u;
    SET_GPR_U32(ctx, 31, 0x3DDA50u);
    ctx->pc = 0x3DDA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDA48u;
    // 0x3dda4c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DDA48u, 0x3DDA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDA50u;
label_3dda50:
    // 0x3dda50: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3dda50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3dda54:
    // 0x3dda54: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_3dda58:
    if (ctx->pc == 0x3DDA58u) {
        ctx->pc = 0x3DDA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDA54u;
        // 0x3dda58: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDA5Cu;
        goto label_3dda5c;
    }
    ctx->pc = 0x3DDA54u;
    {
        const bool branch_taken_0x3dda54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dda54) {
            ctx->pc = 0x3DDA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DDA54u;
            // 0x3dda58: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DDA7Cu;
            goto label_3dda7c;
        }
    }
    ctx->pc = 0x3DDA5Cu;
label_3dda5c:
    // 0x3dda5c: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3dda5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3dda60:
    // 0x3dda60: 0x3c041927  lui         $a0, 0x1927
    ctx->pc = 0x3dda60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)6439 << 16));
label_3dda64:
    // 0x3dda64: 0x3484f7ba  ori         $a0, $a0, 0xF7BA
    ctx->pc = 0x3dda64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63418);
label_3dda68:
    // 0x3dda68: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3dda68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3dda6c:
    // 0x3dda6c: 0xc045c64  jal         func_117190
label_3dda70:
    if (ctx->pc == 0x3DDA70u) {
        ctx->pc = 0x3DDA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDA6Cu;
        // 0x3dda70: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDA74u;
        goto label_3dda74;
    }
    ctx->pc = 0x3DDA6Cu;
    SET_GPR_U32(ctx, 31, 0x3DDA74u);
    ctx->pc = 0x3DDA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDA6Cu;
    // 0x3dda70: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117190u, 0x3DDA6Cu, 0x3DDA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDA74u;
label_3dda74:
    // 0x3dda74: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x3dda74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_3dda78:
    // 0x3dda78: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3dda78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3dda7c:
    // 0x3dda7c: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_3dda80:
    if (ctx->pc == 0x3DDA80u) {
        ctx->pc = 0x3DDA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDA7Cu;
        // 0x3dda80: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDA84u;
        goto label_3dda84;
    }
    ctx->pc = 0x3DDA7Cu;
    {
        const bool branch_taken_0x3dda7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dda7c) {
            ctx->pc = 0x3DDA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DDA7Cu;
            // 0x3dda80: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DDB14u;
            goto label_3ddb14;
        }
    }
    ctx->pc = 0x3DDA84u;
label_3dda84:
    // 0x3dda84: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3dda84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3dda88:
    // 0x3dda88: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3dda88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3dda8c:
    // 0x3dda8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3dda8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dda90:
    // 0x3dda90: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3dda90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3dda94:
    // 0x3dda94: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x3dda94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_3dda98:
    // 0x3dda98: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3dda98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3dda9c:
    // 0x3dda9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3dda9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ddaa0:
    // 0x3ddaa0: 0x27a60840  addiu       $a2, $sp, 0x840
    ctx->pc = 0x3ddaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3ddaa4:
    // 0x3ddaa4: 0x3c01bf73  lui         $at, 0xBF73
    ctx->pc = 0x3ddaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49011 << 16));
label_3ddaa8:
    // 0x3ddaa8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3ddaa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3ddaac:
    // 0x3ddaac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3ddaacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3ddab0:
    // 0x3ddab0: 0x261051c0  addiu       $s0, $s0, 0x51C0
    ctx->pc = 0x3ddab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20928));
label_3ddab4:
    // 0x3ddab4: 0xe7a00850  swc1        $f0, 0x850($sp)
    ctx->pc = 0x3ddab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2128), bits); }
label_3ddab8:
    // 0x3ddab8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3ddab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ddabc:
    // 0x3ddabc: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x3ddabcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_3ddac0:
    // 0x3ddac0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ddac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ddac4:
    // 0x3ddac4: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x3ddac4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3ddac8:
    // 0x3ddac8: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x3ddac8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3ddacc:
    // 0x3ddacc: 0x7ba20850  lq          $v0, 0x850($sp)
    ctx->pc = 0x3ddaccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2128)));
label_3ddad0:
    // 0x3ddad0: 0xc136b18  jal         func_4DAC60
label_3ddad4:
    if (ctx->pc == 0x3DDAD4u) {
        ctx->pc = 0x3DDAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDAD0u;
        // 0x3ddad4: 0x7fa20840  sq          $v0, 0x840($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDAD8u;
        goto label_3ddad8;
    }
    ctx->pc = 0x3DDAD0u;
    SET_GPR_U32(ctx, 31, 0x3DDAD8u);
    ctx->pc = 0x3DDAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDAD0u;
    // 0x3ddad4: 0x7fa20840  sq          $v0, 0x840($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3DDAD0u, 0x3DDAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDAD8u;
label_3ddad8:
    // 0x3ddad8: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3ddad8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3ddadc:
    // 0x3ddadc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3ddadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3ddae0:
    // 0x3ddae0: 0x7ba30850  lq          $v1, 0x850($sp)
    ctx->pc = 0x3ddae0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2128)));
label_3ddae4:
    // 0x3ddae4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ddae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ddae8:
    // 0x3ddae8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3ddae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ddaec:
    // 0x3ddaec: 0x7fa20850  sq          $v0, 0x850($sp)
    ctx->pc = 0x3ddaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
label_3ddaf0:
    // 0x3ddaf0: 0x7fa30820  sq          $v1, 0x820($sp)
    ctx->pc = 0x3ddaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 3));
label_3ddaf4:
    // 0x3ddaf4: 0x27a70860  addiu       $a3, $sp, 0x860
    ctx->pc = 0x3ddaf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
label_3ddaf8:
    // 0x3ddaf8: 0xafb30860  sw          $s3, 0x860($sp)
    ctx->pc = 0x3ddaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2144), GPR_U32(ctx, 19));
label_3ddafc:
    // 0x3ddafc: 0xc0e9fa6  jal         func_3A7E98
label_3ddb00:
    if (ctx->pc == 0x3DDB00u) {
        ctx->pc = 0x3DDB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDAFCu;
        // 0x3ddb00: 0x7fa30830  sq          $v1, 0x830($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDB04u;
        goto label_3ddb04;
    }
    ctx->pc = 0x3DDAFCu;
    SET_GPR_U32(ctx, 31, 0x3DDB04u);
    ctx->pc = 0x3DDB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDAFCu;
    // 0x3ddb00: 0x7fa30830  sq          $v1, 0x830($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3DDAFCu, 0x3DDB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDB04u;
label_3ddb04:
    // 0x3ddb04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ddb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ddb08:
    // 0x3ddb08: 0xc0f15bc  jal         func_3C56F0
label_3ddb0c:
    if (ctx->pc == 0x3DDB0Cu) {
        ctx->pc = 0x3DDB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDB08u;
        // 0x3ddb0c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDB10u;
        goto label_3ddb10;
    }
    ctx->pc = 0x3DDB08u;
    SET_GPR_U32(ctx, 31, 0x3DDB10u);
    ctx->pc = 0x3DDB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDB08u;
    // 0x3ddb0c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DDB08u, 0x3DDB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDB10u;
label_3ddb10:
    // 0x3ddb10: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3ddb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3ddb14:
    // 0x3ddb14: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3ddb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3ddb18:
    // 0x3ddb18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ddb1c:
    // 0x3ddb1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ddb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3ddb20:
    // 0x3ddb20: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3ddb20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_3ddb24:
    // 0x3ddb24: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x3ddb24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_3ddb28:
    // 0x3ddb28: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3ddb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3ddb2c:
    // 0x3ddb2c: 0x284200f0  slti        $v0, $v0, 0xF0
    ctx->pc = 0x3ddb2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)240) ? 1 : 0);
label_3ddb30:
    // 0x3ddb30: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3ddb34:
    if (ctx->pc == 0x3DDB34u) {
        ctx->pc = 0x3DDB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDB30u;
        // 0x3ddb34: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDB38u;
        goto label_3ddb38;
    }
    ctx->pc = 0x3DDB30u;
    {
        const bool branch_taken_0x3ddb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ddb30) {
            ctx->pc = 0x3DDB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DDB30u;
            // 0x3ddb34: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DDB38u;
            goto label_3ddb38;
        }
    }
    ctx->pc = 0x3DDB38u;
label_3ddb38:
    // 0x3ddb38: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3ddb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3ddb3c:
    // 0x3ddb3c: 0x28420168  slti        $v0, $v0, 0x168
    ctx->pc = 0x3ddb3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)360) ? 1 : 0);
label_3ddb40:
    // 0x3ddb40: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3ddb44:
    if (ctx->pc == 0x3DDB44u) {
        ctx->pc = 0x3DDB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDB40u;
        // 0x3ddb44: 0x7bb008e0  lq          $s0, 0x8E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDB48u;
        goto label_3ddb48;
    }
    ctx->pc = 0x3DDB40u;
    {
        const bool branch_taken_0x3ddb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DDB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDB40u;
        // 0x3ddb44: 0x7bb008e0  lq          $s0, 0x8E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddb40) {
            ctx->pc = 0x3DDB5Cu;
            goto label_3ddb5c;
        }
    }
    ctx->pc = 0x3DDB48u;
label_3ddb48:
    // 0x3ddb48: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x3ddb48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_3ddb4c:
    // 0x3ddb4c: 0xc045c76  jal         func_1171D8
label_3ddb50:
    if (ctx->pc == 0x3DDB50u) {
        ctx->pc = 0x3DDB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDB4Cu;
        // 0x3ddb50: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDB54u;
        goto label_3ddb54;
    }
    ctx->pc = 0x3DDB4Cu;
    SET_GPR_U32(ctx, 31, 0x3DDB54u);
    ctx->pc = 0x3DDB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDB4Cu;
    // 0x3ddb50: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1171D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1171D8u, 0x3DDB4Cu, 0x3DDB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDB54u;
label_3ddb54:
    // 0x3ddb54: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3ddb54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_3ddb58:
    // 0x3ddb58: 0x7bb008e0  lq          $s0, 0x8E0($sp)
    ctx->pc = 0x3ddb58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
label_3ddb5c:
    // 0x3ddb5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ddb5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ddb60:
    // 0x3ddb60: 0x7bb108d0  lq          $s1, 0x8D0($sp)
    ctx->pc = 0x3ddb60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2256)));
label_3ddb64:
    // 0x3ddb64: 0x7bb208c0  lq          $s2, 0x8C0($sp)
    ctx->pc = 0x3ddb64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2240)));
label_3ddb68:
    // 0x3ddb68: 0x7bb308b0  lq          $s3, 0x8B0($sp)
    ctx->pc = 0x3ddb68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2224)));
label_3ddb6c:
    // 0x3ddb6c: 0x7bb408a0  lq          $s4, 0x8A0($sp)
    ctx->pc = 0x3ddb6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
label_3ddb70:
    // 0x3ddb70: 0x7bb50890  lq          $s5, 0x890($sp)
    ctx->pc = 0x3ddb70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_3ddb74:
    // 0x3ddb74: 0x7bb60880  lq          $s6, 0x880($sp)
    ctx->pc = 0x3ddb74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_3ddb78:
    // 0x3ddb78: 0xdfbf0870  ld          $ra, 0x870($sp)
    ctx->pc = 0x3ddb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2160)));
label_3ddb7c:
    // 0x3ddb7c: 0xc7b408f0  lwc1        $f20, 0x8F0($sp)
    ctx->pc = 0x3ddb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ddb80:
    // 0x3ddb80: 0x3e00008  jr          $ra
label_3ddb84:
    if (ctx->pc == 0x3DDB84u) {
        ctx->pc = 0x3DDB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDB80u;
        // 0x3ddb84: 0x27bd0900  addiu       $sp, $sp, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDB88u;
        goto label_fallthrough_0x3ddb80;
    }
    ctx->pc = 0x3DDB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DDB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDB80u;
        // 0x3ddb84: 0x27bd0900  addiu       $sp, $sp, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ddb80:
    ctx->pc = 0x3DDB88u;
}
