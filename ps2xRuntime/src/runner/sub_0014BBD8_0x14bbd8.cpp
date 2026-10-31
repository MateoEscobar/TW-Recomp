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

// Function: sub_0014BBD8
// Address: 0x14bbd8 - 0x14bf80
void sub_0014BBD8_0x14bbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BBD8_0x14bbd8");
#endif

    switch (ctx->pc) {
        case 0x14bbd8u: goto label_14bbd8;
        case 0x14bbdcu: goto label_14bbdc;
        case 0x14bbe0u: goto label_14bbe0;
        case 0x14bbe4u: goto label_14bbe4;
        case 0x14bbe8u: goto label_14bbe8;
        case 0x14bbecu: goto label_14bbec;
        case 0x14bbf0u: goto label_14bbf0;
        case 0x14bbf4u: goto label_14bbf4;
        case 0x14bbf8u: goto label_14bbf8;
        case 0x14bbfcu: goto label_14bbfc;
        case 0x14bc00u: goto label_14bc00;
        case 0x14bc04u: goto label_14bc04;
        case 0x14bc08u: goto label_14bc08;
        case 0x14bc0cu: goto label_14bc0c;
        case 0x14bc10u: goto label_14bc10;
        case 0x14bc14u: goto label_14bc14;
        case 0x14bc18u: goto label_14bc18;
        case 0x14bc1cu: goto label_14bc1c;
        case 0x14bc20u: goto label_14bc20;
        case 0x14bc24u: goto label_14bc24;
        case 0x14bc28u: goto label_14bc28;
        case 0x14bc2cu: goto label_14bc2c;
        case 0x14bc30u: goto label_14bc30;
        case 0x14bc34u: goto label_14bc34;
        case 0x14bc38u: goto label_14bc38;
        case 0x14bc3cu: goto label_14bc3c;
        case 0x14bc40u: goto label_14bc40;
        case 0x14bc44u: goto label_14bc44;
        case 0x14bc48u: goto label_14bc48;
        case 0x14bc4cu: goto label_14bc4c;
        case 0x14bc50u: goto label_14bc50;
        case 0x14bc54u: goto label_14bc54;
        case 0x14bc58u: goto label_14bc58;
        case 0x14bc5cu: goto label_14bc5c;
        case 0x14bc60u: goto label_14bc60;
        case 0x14bc64u: goto label_14bc64;
        case 0x14bc68u: goto label_14bc68;
        case 0x14bc6cu: goto label_14bc6c;
        case 0x14bc70u: goto label_14bc70;
        case 0x14bc74u: goto label_14bc74;
        case 0x14bc78u: goto label_14bc78;
        case 0x14bc7cu: goto label_14bc7c;
        case 0x14bc80u: goto label_14bc80;
        case 0x14bc84u: goto label_14bc84;
        case 0x14bc88u: goto label_14bc88;
        case 0x14bc8cu: goto label_14bc8c;
        case 0x14bc90u: goto label_14bc90;
        case 0x14bc94u: goto label_14bc94;
        case 0x14bc98u: goto label_14bc98;
        case 0x14bc9cu: goto label_14bc9c;
        case 0x14bca0u: goto label_14bca0;
        case 0x14bca4u: goto label_14bca4;
        case 0x14bca8u: goto label_14bca8;
        case 0x14bcacu: goto label_14bcac;
        case 0x14bcb0u: goto label_14bcb0;
        case 0x14bcb4u: goto label_14bcb4;
        case 0x14bcb8u: goto label_14bcb8;
        case 0x14bcbcu: goto label_14bcbc;
        case 0x14bcc0u: goto label_14bcc0;
        case 0x14bcc4u: goto label_14bcc4;
        case 0x14bcc8u: goto label_14bcc8;
        case 0x14bcccu: goto label_14bccc;
        case 0x14bcd0u: goto label_14bcd0;
        case 0x14bcd4u: goto label_14bcd4;
        case 0x14bcd8u: goto label_14bcd8;
        case 0x14bcdcu: goto label_14bcdc;
        case 0x14bce0u: goto label_14bce0;
        case 0x14bce4u: goto label_14bce4;
        case 0x14bce8u: goto label_14bce8;
        case 0x14bcecu: goto label_14bcec;
        case 0x14bcf0u: goto label_14bcf0;
        case 0x14bcf4u: goto label_14bcf4;
        case 0x14bcf8u: goto label_14bcf8;
        case 0x14bcfcu: goto label_14bcfc;
        case 0x14bd00u: goto label_14bd00;
        case 0x14bd04u: goto label_14bd04;
        case 0x14bd08u: goto label_14bd08;
        case 0x14bd0cu: goto label_14bd0c;
        case 0x14bd10u: goto label_14bd10;
        case 0x14bd14u: goto label_14bd14;
        case 0x14bd18u: goto label_14bd18;
        case 0x14bd1cu: goto label_14bd1c;
        case 0x14bd20u: goto label_14bd20;
        case 0x14bd24u: goto label_14bd24;
        case 0x14bd28u: goto label_14bd28;
        case 0x14bd2cu: goto label_14bd2c;
        case 0x14bd30u: goto label_14bd30;
        case 0x14bd34u: goto label_14bd34;
        case 0x14bd38u: goto label_14bd38;
        case 0x14bd3cu: goto label_14bd3c;
        case 0x14bd40u: goto label_14bd40;
        case 0x14bd44u: goto label_14bd44;
        case 0x14bd48u: goto label_14bd48;
        case 0x14bd4cu: goto label_14bd4c;
        case 0x14bd50u: goto label_14bd50;
        case 0x14bd54u: goto label_14bd54;
        case 0x14bd58u: goto label_14bd58;
        case 0x14bd5cu: goto label_14bd5c;
        case 0x14bd60u: goto label_14bd60;
        case 0x14bd64u: goto label_14bd64;
        case 0x14bd68u: goto label_14bd68;
        case 0x14bd6cu: goto label_14bd6c;
        case 0x14bd70u: goto label_14bd70;
        case 0x14bd74u: goto label_14bd74;
        case 0x14bd78u: goto label_14bd78;
        case 0x14bd7cu: goto label_14bd7c;
        case 0x14bd80u: goto label_14bd80;
        case 0x14bd84u: goto label_14bd84;
        case 0x14bd88u: goto label_14bd88;
        case 0x14bd8cu: goto label_14bd8c;
        case 0x14bd90u: goto label_14bd90;
        case 0x14bd94u: goto label_14bd94;
        case 0x14bd98u: goto label_14bd98;
        case 0x14bd9cu: goto label_14bd9c;
        case 0x14bda0u: goto label_14bda0;
        case 0x14bda4u: goto label_14bda4;
        case 0x14bda8u: goto label_14bda8;
        case 0x14bdacu: goto label_14bdac;
        case 0x14bdb0u: goto label_14bdb0;
        case 0x14bdb4u: goto label_14bdb4;
        case 0x14bdb8u: goto label_14bdb8;
        case 0x14bdbcu: goto label_14bdbc;
        case 0x14bdc0u: goto label_14bdc0;
        case 0x14bdc4u: goto label_14bdc4;
        case 0x14bdc8u: goto label_14bdc8;
        case 0x14bdccu: goto label_14bdcc;
        case 0x14bdd0u: goto label_14bdd0;
        case 0x14bdd4u: goto label_14bdd4;
        case 0x14bdd8u: goto label_14bdd8;
        case 0x14bddcu: goto label_14bddc;
        case 0x14bde0u: goto label_14bde0;
        case 0x14bde4u: goto label_14bde4;
        case 0x14bde8u: goto label_14bde8;
        case 0x14bdecu: goto label_14bdec;
        case 0x14bdf0u: goto label_14bdf0;
        case 0x14bdf4u: goto label_14bdf4;
        case 0x14bdf8u: goto label_14bdf8;
        case 0x14bdfcu: goto label_14bdfc;
        case 0x14be00u: goto label_14be00;
        case 0x14be04u: goto label_14be04;
        case 0x14be08u: goto label_14be08;
        case 0x14be0cu: goto label_14be0c;
        case 0x14be10u: goto label_14be10;
        case 0x14be14u: goto label_14be14;
        case 0x14be18u: goto label_14be18;
        case 0x14be1cu: goto label_14be1c;
        case 0x14be20u: goto label_14be20;
        case 0x14be24u: goto label_14be24;
        case 0x14be28u: goto label_14be28;
        case 0x14be2cu: goto label_14be2c;
        case 0x14be30u: goto label_14be30;
        case 0x14be34u: goto label_14be34;
        case 0x14be38u: goto label_14be38;
        case 0x14be3cu: goto label_14be3c;
        case 0x14be40u: goto label_14be40;
        case 0x14be44u: goto label_14be44;
        case 0x14be48u: goto label_14be48;
        case 0x14be4cu: goto label_14be4c;
        case 0x14be50u: goto label_14be50;
        case 0x14be54u: goto label_14be54;
        case 0x14be58u: goto label_14be58;
        case 0x14be5cu: goto label_14be5c;
        case 0x14be60u: goto label_14be60;
        case 0x14be64u: goto label_14be64;
        case 0x14be68u: goto label_14be68;
        case 0x14be6cu: goto label_14be6c;
        case 0x14be70u: goto label_14be70;
        case 0x14be74u: goto label_14be74;
        case 0x14be78u: goto label_14be78;
        case 0x14be7cu: goto label_14be7c;
        case 0x14be80u: goto label_14be80;
        case 0x14be84u: goto label_14be84;
        case 0x14be88u: goto label_14be88;
        case 0x14be8cu: goto label_14be8c;
        case 0x14be90u: goto label_14be90;
        case 0x14be94u: goto label_14be94;
        case 0x14be98u: goto label_14be98;
        case 0x14be9cu: goto label_14be9c;
        case 0x14bea0u: goto label_14bea0;
        case 0x14bea4u: goto label_14bea4;
        case 0x14bea8u: goto label_14bea8;
        case 0x14beacu: goto label_14beac;
        case 0x14beb0u: goto label_14beb0;
        case 0x14beb4u: goto label_14beb4;
        case 0x14beb8u: goto label_14beb8;
        case 0x14bebcu: goto label_14bebc;
        case 0x14bec0u: goto label_14bec0;
        case 0x14bec4u: goto label_14bec4;
        case 0x14bec8u: goto label_14bec8;
        case 0x14beccu: goto label_14becc;
        case 0x14bed0u: goto label_14bed0;
        case 0x14bed4u: goto label_14bed4;
        case 0x14bed8u: goto label_14bed8;
        case 0x14bedcu: goto label_14bedc;
        case 0x14bee0u: goto label_14bee0;
        case 0x14bee4u: goto label_14bee4;
        case 0x14bee8u: goto label_14bee8;
        case 0x14beecu: goto label_14beec;
        case 0x14bef0u: goto label_14bef0;
        case 0x14bef4u: goto label_14bef4;
        case 0x14bef8u: goto label_14bef8;
        case 0x14befcu: goto label_14befc;
        case 0x14bf00u: goto label_14bf00;
        case 0x14bf04u: goto label_14bf04;
        case 0x14bf08u: goto label_14bf08;
        case 0x14bf0cu: goto label_14bf0c;
        case 0x14bf10u: goto label_14bf10;
        case 0x14bf14u: goto label_14bf14;
        case 0x14bf18u: goto label_14bf18;
        case 0x14bf1cu: goto label_14bf1c;
        case 0x14bf20u: goto label_14bf20;
        case 0x14bf24u: goto label_14bf24;
        case 0x14bf28u: goto label_14bf28;
        case 0x14bf2cu: goto label_14bf2c;
        case 0x14bf30u: goto label_14bf30;
        case 0x14bf34u: goto label_14bf34;
        case 0x14bf38u: goto label_14bf38;
        case 0x14bf3cu: goto label_14bf3c;
        case 0x14bf40u: goto label_14bf40;
        case 0x14bf44u: goto label_14bf44;
        case 0x14bf48u: goto label_14bf48;
        case 0x14bf4cu: goto label_14bf4c;
        case 0x14bf50u: goto label_14bf50;
        case 0x14bf54u: goto label_14bf54;
        case 0x14bf58u: goto label_14bf58;
        case 0x14bf5cu: goto label_14bf5c;
        case 0x14bf60u: goto label_14bf60;
        case 0x14bf64u: goto label_14bf64;
        case 0x14bf68u: goto label_14bf68;
        case 0x14bf6cu: goto label_14bf6c;
        case 0x14bf70u: goto label_14bf70;
        case 0x14bf74u: goto label_14bf74;
        case 0x14bf78u: goto label_14bf78;
        case 0x14bf7cu: goto label_14bf7c;
        default: break;
    }

    ctx->pc = 0x14bbd8u;

label_14bbd8:
    // 0x14bbd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14bbd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_14bbdc:
    // 0x14bbdc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14bbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_14bbe0:
    // 0x14bbe0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14bbe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14bbe4:
    // 0x14bbe4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14bbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_14bbe8:
    // 0x14bbe8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14bbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_14bbec:
    // 0x14bbec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14bbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14bbf0:
    // 0x14bbf0: 0xc0535d8  jal         func_14D760
label_14bbf4:
    if (ctx->pc == 0x14BBF4u) {
        ctx->pc = 0x14BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BBF0u;
        // 0x14bbf4: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BBF8u;
        goto label_14bbf8;
    }
    ctx->pc = 0x14BBF0u;
    SET_GPR_U32(ctx, 31, 0x14BBF8u);
    ctx->pc = 0x14BBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BBF0u;
    // 0x14bbf4: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D760u, 0x14BBF0u, 0x14BBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BBF8u;
label_14bbf8:
    // 0x14bbf8: 0xc053a32  jal         func_14E8C8
label_14bbfc:
    if (ctx->pc == 0x14BBFCu) {
        ctx->pc = 0x14BC00u;
        goto label_14bc00;
    }
    ctx->pc = 0x14BBF8u;
    SET_GPR_U32(ctx, 31, 0x14BC00u);
    ctx->pc = 0x14E8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E8C8u, 0x14BBF8u, 0x14BC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC00u;
label_14bc00:
    // 0x14bc00: 0xc054086  jal         func_150218
label_14bc04:
    if (ctx->pc == 0x14BC04u) {
        ctx->pc = 0x14BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC00u;
        // 0x14bc04: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BC08u;
        goto label_14bc08;
    }
    ctx->pc = 0x14BC00u;
    SET_GPR_U32(ctx, 31, 0x14BC08u);
    ctx->pc = 0x14BC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BC00u;
    // 0x14bc04: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150218u, 0x14BC00u, 0x14BC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC08u;
label_14bc08:
    // 0x14bc08: 0xc054086  jal         func_150218
label_14bc0c:
    if (ctx->pc == 0x14BC0Cu) {
        ctx->pc = 0x14BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC08u;
        // 0x14bc0c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BC10u;
        goto label_14bc10;
    }
    ctx->pc = 0x14BC08u;
    SET_GPR_U32(ctx, 31, 0x14BC10u);
    ctx->pc = 0x14BC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BC08u;
    // 0x14bc0c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150218u, 0x14BC08u, 0x14BC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC10u;
label_14bc10:
    // 0x14bc10: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x14bc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_14bc14:
    // 0x14bc14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14bc14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14bc18:
    // 0x14bc18: 0xc053a40  jal         func_14E900
label_14bc1c:
    if (ctx->pc == 0x14BC1Cu) {
        ctx->pc = 0x14BC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC18u;
        // 0x14bc1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BC20u;
        goto label_14bc20;
    }
    ctx->pc = 0x14BC18u;
    SET_GPR_U32(ctx, 31, 0x14BC20u);
    ctx->pc = 0x14BC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BC18u;
    // 0x14bc1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E900u, 0x14BC18u, 0x14BC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC20u;
label_14bc20:
    // 0x14bc20: 0xc053eb2  jal         func_14FAC8
label_14bc24:
    if (ctx->pc == 0x14BC24u) {
        ctx->pc = 0x14BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC20u;
        // 0x14bc24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BC28u;
        goto label_14bc28;
    }
    ctx->pc = 0x14BC20u;
    SET_GPR_U32(ctx, 31, 0x14BC28u);
    ctx->pc = 0x14BC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BC20u;
    // 0x14bc24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FAC8u, 0x14BC20u, 0x14BC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC28u;
label_14bc28:
    // 0x14bc28: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_14bc2c:
    // 0x14bc2c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x14bc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_14bc30:
    // 0x14bc30: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x14bc30u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_14bc34:
    // 0x14bc34: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x14bc34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_14bc38:
    // 0x14bc38: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x14bc38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_14bc3c:
    // 0x14bc3c: 0x240900cb  addiu       $t1, $zero, 0xCB
    ctx->pc = 0x14bc3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
label_14bc40:
    // 0x14bc40: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x14bc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_14bc44:
    // 0x14bc44: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14bc44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14bc48:
    // 0x14bc48: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x14bc48u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14bc4c:
    // 0x14bc4c: 0x2508b618  addiu       $t0, $t0, -0x49E8
    ctx->pc = 0x14bc4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294948376));
label_14bc50:
    // 0x14bc50: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x14bc50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_14bc54:
    // 0x14bc54: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x14bc54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_14bc58:
    // 0x14bc58: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x14bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_14bc5c:
    // 0x14bc5c: 0x24a5b610  addiu       $a1, $a1, -0x49F0
    ctx->pc = 0x14bc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948368));
label_14bc60:
    // 0x14bc60: 0x40f809  jalr        $v0
label_14bc64:
    if (ctx->pc == 0x14BC64u) {
        ctx->pc = 0x14BC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC60u;
        // 0x14bc64: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BC68u;
        goto label_14bc68;
    }
    ctx->pc = 0x14BC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14BC68u);
        ctx->pc = 0x14BC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC60u;
        // 0x14bc64: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BC60u, 0x14BC68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14BC68u;
label_14bc68:
    // 0x14bc68: 0xc10f3e4  jal         func_43CF90
label_14bc6c:
    if (ctx->pc == 0x14BC6Cu) {
        ctx->pc = 0x14BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC68u;
        // 0x14bc6c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BC70u;
        goto label_14bc70;
    }
    ctx->pc = 0x14BC68u;
    SET_GPR_U32(ctx, 31, 0x14BC70u);
    ctx->pc = 0x14BC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BC68u;
    // 0x14bc6c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CF90u, 0x14BC68u, 0x14BC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC70u;
label_14bc70:
    // 0x14bc70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14bc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14bc74:
    // 0x14bc74: 0xc10f3cc  jal         func_43CF30
label_14bc78:
    if (ctx->pc == 0x14BC78u) {
        ctx->pc = 0x14BC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC74u;
        // 0x14bc78: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BC7Cu;
        goto label_14bc7c;
    }
    ctx->pc = 0x14BC74u;
    SET_GPR_U32(ctx, 31, 0x14BC7Cu);
    ctx->pc = 0x14BC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BC74u;
    // 0x14bc78: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CF30u, 0x14BC74u, 0x14BC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC7Cu;
label_14bc7c:
    // 0x14bc7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14bc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14bc80:
    // 0x14bc80: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x14bc80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_14bc84:
    // 0x14bc84: 0xc0544f4  jal         func_1513D0
label_14bc88:
    if (ctx->pc == 0x14BC88u) {
        ctx->pc = 0x14BC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC84u;
        // 0x14bc88: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BC8Cu;
        goto label_14bc8c;
    }
    ctx->pc = 0x14BC84u;
    SET_GPR_U32(ctx, 31, 0x14BC8Cu);
    ctx->pc = 0x14BC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BC84u;
    // 0x14bc88: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1513D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1513D0u, 0x14BC84u, 0x14BC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC8Cu;
label_14bc8c:
    // 0x14bc8c: 0xc054590  jal         func_151640
label_14bc90:
    if (ctx->pc == 0x14BC90u) {
        ctx->pc = 0x14BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC8Cu;
        // 0x14bc90: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BC94u;
        goto label_14bc94;
    }
    ctx->pc = 0x14BC8Cu;
    SET_GPR_U32(ctx, 31, 0x14BC94u);
    ctx->pc = 0x14BC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BC8Cu;
    // 0x14bc90: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151640u, 0x14BC8Cu, 0x14BC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC94u;
label_14bc94:
    // 0x14bc94: 0xc054590  jal         func_151640
label_14bc98:
    if (ctx->pc == 0x14BC98u) {
        ctx->pc = 0x14BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC94u;
        // 0x14bc98: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BC9Cu;
        goto label_14bc9c;
    }
    ctx->pc = 0x14BC94u;
    SET_GPR_U32(ctx, 31, 0x14BC9Cu);
    ctx->pc = 0x14BC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BC94u;
    // 0x14bc98: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151640u, 0x14BC94u, 0x14BC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC9Cu;
label_14bc9c:
    // 0x14bc9c: 0xc054590  jal         func_151640
label_14bca0:
    if (ctx->pc == 0x14BCA0u) {
        ctx->pc = 0x14BCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC9Cu;
        // 0x14bca0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BCA4u;
        goto label_14bca4;
    }
    ctx->pc = 0x14BC9Cu;
    SET_GPR_U32(ctx, 31, 0x14BCA4u);
    ctx->pc = 0x14BCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BC9Cu;
    // 0x14bca0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151640u, 0x14BC9Cu, 0x14BCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BCA4u;
label_14bca4:
    // 0x14bca4: 0xc053eba  jal         func_14FAE8
label_14bca8:
    if (ctx->pc == 0x14BCA8u) {
        ctx->pc = 0x14BCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BCA4u;
        // 0x14bca8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BCACu;
        goto label_14bcac;
    }
    ctx->pc = 0x14BCA4u;
    SET_GPR_U32(ctx, 31, 0x14BCACu);
    ctx->pc = 0x14BCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BCA4u;
    // 0x14bca8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FAE8u, 0x14BCA4u, 0x14BCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BCACu;
label_14bcac:
    // 0x14bcac: 0x24025010  addiu       $v0, $zero, 0x5010
    ctx->pc = 0x14bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20496));
label_14bcb0:
    // 0x14bcb0: 0xae20083c  sw          $zero, 0x83C($s1)
    ctx->pc = 0x14bcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2108), GPR_U32(ctx, 0));
label_14bcb4:
    // 0x14bcb4: 0xae20082c  sw          $zero, 0x82C($s1)
    ctx->pc = 0x14bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 0));
label_14bcb8:
    // 0x14bcb8: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x14bcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_14bcbc:
    // 0x14bcbc: 0xae200830  sw          $zero, 0x830($s1)
    ctx->pc = 0x14bcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2096), GPR_U32(ctx, 0));
label_14bcc0:
    // 0x14bcc0: 0xae200834  sw          $zero, 0x834($s1)
    ctx->pc = 0x14bcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2100), GPR_U32(ctx, 0));
label_14bcc4:
    // 0x14bcc4: 0xae200838  sw          $zero, 0x838($s1)
    ctx->pc = 0x14bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 0));
label_14bcc8:
    // 0x14bcc8: 0xc053a66  jal         func_14E998
label_14bccc:
    if (ctx->pc == 0x14BCCCu) {
        ctx->pc = 0x14BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BCC8u;
        // 0x14bccc: 0xae220840  sw          $v0, 0x840($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BCD0u;
        goto label_14bcd0;
    }
    ctx->pc = 0x14BCC8u;
    SET_GPR_U32(ctx, 31, 0x14BCD0u);
    ctx->pc = 0x14BCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BCC8u;
    // 0x14bccc: 0xae220840  sw          $v0, 0x840($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E998u, 0x14BCC8u, 0x14BCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BCD0u;
label_14bcd0:
    // 0x14bcd0: 0xc053008  jal         func_14C020
label_14bcd4:
    if (ctx->pc == 0x14BCD4u) {
        ctx->pc = 0x14BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BCD0u;
        // 0x14bcd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BCD8u;
        goto label_14bcd8;
    }
    ctx->pc = 0x14BCD0u;
    SET_GPR_U32(ctx, 31, 0x14BCD8u);
    ctx->pc = 0x14BCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BCD0u;
    // 0x14bcd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C020u, 0x14BCD0u, 0x14BCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BCD8u;
label_14bcd8:
    // 0x14bcd8: 0x8e26088c  lw          $a2, 0x88C($s1)
    ctx->pc = 0x14bcd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2188)));
label_14bcdc:
    // 0x14bcdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14bcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14bce0:
    // 0x14bce0: 0xc053a8a  jal         func_14EA28
label_14bce4:
    if (ctx->pc == 0x14BCE4u) {
        ctx->pc = 0x14BCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BCE0u;
        // 0x14bce4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BCE8u;
        goto label_14bce8;
    }
    ctx->pc = 0x14BCE0u;
    SET_GPR_U32(ctx, 31, 0x14BCE8u);
    ctx->pc = 0x14BCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BCE0u;
    // 0x14bce4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EA28u, 0x14BCE0u, 0x14BCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BCE8u;
label_14bce8:
    // 0x14bce8: 0x8e23082c  lw          $v1, 0x82C($s1)
    ctx->pc = 0x14bce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2092)));
label_14bcec:
    // 0x14bcec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14bcecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14bcf0:
    // 0x14bcf0: 0x8e22088c  lw          $v0, 0x88C($s1)
    ctx->pc = 0x14bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2188)));
label_14bcf4:
    // 0x14bcf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14bcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14bcf8:
    // 0x14bcf8: 0xc053eb2  jal         func_14FAC8
label_14bcfc:
    if (ctx->pc == 0x14BCFCu) {
        ctx->pc = 0x14BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BCF8u;
        // 0x14bcfc: 0xae23082c  sw          $v1, 0x82C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BD00u;
        goto label_14bd00;
    }
    ctx->pc = 0x14BCF8u;
    SET_GPR_U32(ctx, 31, 0x14BD00u);
    ctx->pc = 0x14BCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BCF8u;
    // 0x14bcfc: 0xae23082c  sw          $v1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FAC8u, 0x14BCF8u, 0x14BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD00u;
label_14bd00:
    // 0x14bd00: 0x8e230840  lw          $v1, 0x840($s1)
    ctx->pc = 0x14bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2112)));
label_14bd04:
    // 0x14bd04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14bd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14bd08:
    // 0x14bd08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14bd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14bd0c:
    // 0x14bd0c: 0xc052fe2  jal         func_14BF88
label_14bd10:
    if (ctx->pc == 0x14BD10u) {
        ctx->pc = 0x14BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD0Cu;
        // 0x14bd10: 0xae230848  sw          $v1, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BD14u;
        goto label_14bd14;
    }
    ctx->pc = 0x14BD0Cu;
    SET_GPR_U32(ctx, 31, 0x14BD14u);
    ctx->pc = 0x14BD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BD0Cu;
    // 0x14bd10: 0xae230848  sw          $v1, 0x848($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BF88u, 0x14BD0Cu, 0x14BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD14u;
label_14bd14:
    // 0x14bd14: 0x8e220840  lw          $v0, 0x840($s1)
    ctx->pc = 0x14bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2112)));
label_14bd18:
    // 0x14bd18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14bd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14bd1c:
    // 0x14bd1c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14bd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14bd20:
    // 0x14bd20: 0xc052fe2  jal         func_14BF88
label_14bd24:
    if (ctx->pc == 0x14BD24u) {
        ctx->pc = 0x14BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD20u;
        // 0x14bd24: 0xae22084c  sw          $v0, 0x84C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BD28u;
        goto label_14bd28;
    }
    ctx->pc = 0x14BD20u;
    SET_GPR_U32(ctx, 31, 0x14BD28u);
    ctx->pc = 0x14BD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BD20u;
    // 0x14bd24: 0xae22084c  sw          $v0, 0x84C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BF88u, 0x14BD20u, 0x14BD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD28u;
label_14bd28:
    // 0x14bd28: 0x8e220840  lw          $v0, 0x840($s1)
    ctx->pc = 0x14bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2112)));
label_14bd2c:
    // 0x14bd2c: 0xae220850  sw          $v0, 0x850($s1)
    ctx->pc = 0x14bd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2128), GPR_U32(ctx, 2));
label_14bd30:
    // 0x14bd30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14bd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14bd34:
    // 0x14bd34: 0x0  nop
    ctx->pc = 0x14bd34u;
    // NOP
label_14bd38:
    // 0x14bd38: 0xc05301c  jal         func_14C070
label_14bd3c:
    if (ctx->pc == 0x14BD3Cu) {
        ctx->pc = 0x14BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD38u;
        // 0x14bd3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BD40u;
        goto label_14bd40;
    }
    ctx->pc = 0x14BD38u;
    SET_GPR_U32(ctx, 31, 0x14BD40u);
    ctx->pc = 0x14BD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BD38u;
    // 0x14bd3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C070u, 0x14BD38u, 0x14BD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD40u;
label_14bd40:
    // 0x14bd40: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14bd40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_14bd44:
    // 0x14bd44: 0x2e42000a  sltiu       $v0, $s2, 0xA
    ctx->pc = 0x14bd44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_14bd48:
    // 0x14bd48: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_14bd4c:
    if (ctx->pc == 0x14BD4Cu) {
        ctx->pc = 0x14BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD48u;
        // 0x14bd4c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BD50u;
        goto label_14bd50;
    }
    ctx->pc = 0x14BD48u;
    {
        const bool branch_taken_0x14bd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD48u;
        // 0x14bd4c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd48) {
            ctx->pc = 0x14BD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14bd38;
        }
    }
    ctx->pc = 0x14BD50u;
label_14bd50:
    // 0x14bd50: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x14bd50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_14bd54:
    // 0x14bd54: 0x26320854  addiu       $s2, $s1, 0x854
    ctx->pc = 0x14bd54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 2132));
label_14bd58:
    // 0x14bd58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14bd58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14bd5c:
    // 0x14bd5c: 0x0  nop
    ctx->pc = 0x14bd5cu;
    // NOP
label_14bd60:
    // 0x14bd60: 0xc05301c  jal         func_14C070
label_14bd64:
    if (ctx->pc == 0x14BD64u) {
        ctx->pc = 0x14BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD60u;
        // 0x14bd64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BD68u;
        goto label_14bd68;
    }
    ctx->pc = 0x14BD60u;
    SET_GPR_U32(ctx, 31, 0x14BD68u);
    ctx->pc = 0x14BD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BD60u;
    // 0x14bd64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C070u, 0x14BD60u, 0x14BD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BD68u;
label_14bd68:
    // 0x14bd68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14bd68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_14bd6c:
    // 0x14bd6c: 0x2e02000d  sltiu       $v0, $s0, 0xD
    ctx->pc = 0x14bd6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_14bd70:
    // 0x14bd70: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_14bd74:
    if (ctx->pc == 0x14BD74u) {
        ctx->pc = 0x14BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD70u;
        // 0x14bd74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BD78u;
        goto label_14bd78;
    }
    ctx->pc = 0x14BD70u;
    {
        const bool branch_taken_0x14bd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD70u;
        // 0x14bd74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd70) {
            ctx->pc = 0x14BD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14bd60;
        }
    }
    ctx->pc = 0x14BD78u;
label_14bd78:
    // 0x14bd78: 0x8e240830  lw          $a0, 0x830($s1)
    ctx->pc = 0x14bd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2096)));
label_14bd7c:
    // 0x14bd7c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x14bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
label_14bd80:
    // 0x14bd80: 0x8e260840  lw          $a2, 0x840($s1)
    ctx->pc = 0x14bd80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2112)));
label_14bd84:
    // 0x14bd84: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x14bd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_14bd88:
    // 0x14bd88: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x14bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_14bd8c:
    // 0x14bd8c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14bd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_14bd90:
    // 0x14bd90: 0xae260844  sw          $a2, 0x844($s1)
    ctx->pc = 0x14bd90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2116), GPR_U32(ctx, 6));
label_14bd94:
    // 0x14bd94: 0xae220834  sw          $v0, 0x834($s1)
    ctx->pc = 0x14bd94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2100), GPR_U32(ctx, 2));
label_14bd98:
    // 0x14bd98: 0xae220838  sw          $v0, 0x838($s1)
    ctx->pc = 0x14bd98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 2));
label_14bd9c:
    // 0x14bd9c: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x14bd9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_14bda0:
    // 0x14bda0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x14bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_14bda4:
    // 0x14bda4: 0x40f809  jalr        $v0
label_14bda8:
    if (ctx->pc == 0x14BDA8u) {
        ctx->pc = 0x14BDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDA4u;
        // 0x14bda8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BDACu;
        goto label_14bdac;
    }
    ctx->pc = 0x14BDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14BDACu);
        ctx->pc = 0x14BDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDA4u;
        // 0x14bda8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BDA4u, 0x14BDACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14BDACu;
label_14bdac:
    // 0x14bdac: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x14bdacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_14bdb0:
    // 0x14bdb0: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x14bdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_14bdb4:
    // 0x14bdb4: 0xc0543f2  jal         func_150FC8
label_14bdb8:
    if (ctx->pc == 0x14BDB8u) {
        ctx->pc = 0x14BDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDB4u;
        // 0x14bdb8: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BDBCu;
        goto label_14bdbc;
    }
    ctx->pc = 0x14BDB4u;
    SET_GPR_U32(ctx, 31, 0x14BDBCu);
    ctx->pc = 0x14BDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BDB4u;
    // 0x14bdb8: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150FC8u, 0x14BDB4u, 0x14BDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BDBCu;
label_14bdbc:
    // 0x14bdbc: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x14bdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_14bdc0:
    // 0x14bdc0: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x14bdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_14bdc4:
    // 0x14bdc4: 0xc0543f2  jal         func_150FC8
label_14bdc8:
    if (ctx->pc == 0x14BDC8u) {
        ctx->pc = 0x14BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDC4u;
        // 0x14bdc8: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BDCCu;
        goto label_14bdcc;
    }
    ctx->pc = 0x14BDC4u;
    SET_GPR_U32(ctx, 31, 0x14BDCCu);
    ctx->pc = 0x14BDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BDC4u;
    // 0x14bdc8: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150FC8u, 0x14BDC4u, 0x14BDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BDCCu;
label_14bdcc:
    // 0x14bdcc: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x14bdccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
label_14bdd0:
    // 0x14bdd0: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x14bdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_14bdd4:
    // 0x14bdd4: 0xc0543f2  jal         func_150FC8
label_14bdd8:
    if (ctx->pc == 0x14BDD8u) {
        ctx->pc = 0x14BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDD4u;
        // 0x14bdd8: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BDDCu;
        goto label_14bddc;
    }
    ctx->pc = 0x14BDD4u;
    SET_GPR_U32(ctx, 31, 0x14BDDCu);
    ctx->pc = 0x14BDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BDD4u;
    // 0x14bdd8: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150FC8u, 0x14BDD4u, 0x14BDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BDDCu;
label_14bddc:
    // 0x14bddc: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x14bddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_14bde0:
    // 0x14bde0: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x14bde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_14bde4:
    // 0x14bde4: 0xc0543f2  jal         func_150FC8
label_14bde8:
    if (ctx->pc == 0x14BDE8u) {
        ctx->pc = 0x14BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BDE4u;
        // 0x14bde8: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BDECu;
        goto label_14bdec;
    }
    ctx->pc = 0x14BDE4u;
    SET_GPR_U32(ctx, 31, 0x14BDECu);
    ctx->pc = 0x14BDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BDE4u;
    // 0x14bde8: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150FC8u, 0x14BDE4u, 0x14BDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BDECu;
label_14bdec:
    // 0x14bdec: 0xc0543b4  jal         func_150ED0
label_14bdf0:
    if (ctx->pc == 0x14BDF0u) {
        ctx->pc = 0x14BDF4u;
        goto label_14bdf4;
    }
    ctx->pc = 0x14BDECu;
    SET_GPR_U32(ctx, 31, 0x14BDF4u);
    ctx->pc = 0x150ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150ED0u, 0x14BDECu, 0x14BDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BDF4u;
label_14bdf4:
    // 0x14bdf4: 0x2642002e  addiu       $v0, $s2, 0x2E
    ctx->pc = 0x14bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 46));
label_14bdf8:
    // 0x14bdf8: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x14bdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_14bdfc:
    // 0x14bdfc: 0x0  nop
    ctx->pc = 0x14bdfcu;
    // NOP
label_14be00:
    // 0x14be00: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x14be00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_14be04:
    // 0x14be04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14be04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_14be08:
    // 0x14be08: 0x0  nop
    ctx->pc = 0x14be08u;
    // NOP
label_14be0c:
    // 0x14be0c: 0x0  nop
    ctx->pc = 0x14be0cu;
    // NOP
label_14be10:
    // 0x14be10: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
label_14be14:
    if (ctx->pc == 0x14BE14u) {
        ctx->pc = 0x14BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE10u;
        // 0x14be14: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BE18u;
        goto label_14be18;
    }
    ctx->pc = 0x14BE10u;
    {
        const bool branch_taken_0x14be10 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x14BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE10u;
        // 0x14be14: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be10) {
            ctx->pc = 0x14BE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14be00;
        }
    }
    ctx->pc = 0x14BE18u;
label_14be18:
    // 0x14be18: 0xc0545e6  jal         func_151798
label_14be1c:
    if (ctx->pc == 0x14BE1Cu) {
        ctx->pc = 0x14BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE18u;
        // 0x14be1c: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BE20u;
        goto label_14be20;
    }
    ctx->pc = 0x14BE18u;
    SET_GPR_U32(ctx, 31, 0x14BE20u);
    ctx->pc = 0x14BE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BE18u;
    // 0x14be1c: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151798u, 0x14BE18u, 0x14BE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE20u;
label_14be20:
    // 0x14be20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14be20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14be24:
    // 0x14be24: 0xc0545d4  jal         func_151750
label_14be28:
    if (ctx->pc == 0x14BE28u) {
        ctx->pc = 0x14BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE24u;
        // 0x14be28: 0x2610b650  addiu       $s0, $s0, -0x49B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BE2Cu;
        goto label_14be2c;
    }
    ctx->pc = 0x14BE24u;
    SET_GPR_U32(ctx, 31, 0x14BE2Cu);
    ctx->pc = 0x14BE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BE24u;
    // 0x14be28: 0x2610b650  addiu       $s0, $s0, -0x49B0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151750u, 0x14BE24u, 0x14BE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE2Cu;
label_14be2c:
    // 0x14be2c: 0xc0545d4  jal         func_151750
label_14be30:
    if (ctx->pc == 0x14BE30u) {
        ctx->pc = 0x14BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE2Cu;
        // 0x14be30: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BE34u;
        goto label_14be34;
    }
    ctx->pc = 0x14BE2Cu;
    SET_GPR_U32(ctx, 31, 0x14BE34u);
    ctx->pc = 0x14BE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BE2Cu;
    // 0x14be30: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151750u, 0x14BE2Cu, 0x14BE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE34u;
label_14be34:
    // 0x14be34: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14be34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_14be38:
    // 0x14be38: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x14be38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_14be3c:
    // 0x14be3c: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x14be3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_14be40:
    // 0x14be40: 0x60f809  jalr        $v1
label_14be44:
    if (ctx->pc == 0x14BE44u) {
        ctx->pc = 0x14BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE40u;
        // 0x14be44: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BE48u;
        goto label_14be48;
    }
    ctx->pc = 0x14BE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14BE48u);
        ctx->pc = 0x14BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE40u;
        // 0x14be44: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BE40u, 0x14BE48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14BE48u;
label_14be48:
    // 0x14be48: 0xc053fac  jal         func_14FEB0
label_14be4c:
    if (ctx->pc == 0x14BE4Cu) {
        ctx->pc = 0x14BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE48u;
        // 0x14be4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BE50u;
        goto label_14be50;
    }
    ctx->pc = 0x14BE48u;
    SET_GPR_U32(ctx, 31, 0x14BE50u);
    ctx->pc = 0x14BE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BE48u;
    // 0x14be4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FEB0u, 0x14BE48u, 0x14BE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE50u;
label_14be50:
    // 0x14be50: 0xc053fac  jal         func_14FEB0
label_14be54:
    if (ctx->pc == 0x14BE54u) {
        ctx->pc = 0x14BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE50u;
        // 0x14be54: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BE58u;
        goto label_14be58;
    }
    ctx->pc = 0x14BE50u;
    SET_GPR_U32(ctx, 31, 0x14BE58u);
    ctx->pc = 0x14BE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BE50u;
    // 0x14be54: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FEB0u, 0x14BE50u, 0x14BE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE58u;
label_14be58:
    // 0x14be58: 0xc054098  jal         func_150260
label_14be5c:
    if (ctx->pc == 0x14BE5Cu) {
        ctx->pc = 0x14BE60u;
        goto label_14be60;
    }
    ctx->pc = 0x14BE58u;
    SET_GPR_U32(ctx, 31, 0x14BE60u);
    ctx->pc = 0x150260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150260u, 0x14BE58u, 0x14BE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE60u;
label_14be60:
    // 0x14be60: 0xc053eb2  jal         func_14FAC8
label_14be64:
    if (ctx->pc == 0x14BE64u) {
        ctx->pc = 0x14BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE60u;
        // 0x14be64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BE68u;
        goto label_14be68;
    }
    ctx->pc = 0x14BE60u;
    SET_GPR_U32(ctx, 31, 0x14BE68u);
    ctx->pc = 0x14BE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BE60u;
    // 0x14be64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FAC8u, 0x14BE60u, 0x14BE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE68u;
label_14be68:
    // 0x14be68: 0xc11093a  jal         func_4424E8
label_14be6c:
    if (ctx->pc == 0x14BE6Cu) {
        ctx->pc = 0x14BE70u;
        goto label_14be70;
    }
    ctx->pc = 0x14BE68u;
    SET_GPR_U32(ctx, 31, 0x14BE70u);
    ctx->pc = 0x4424E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4424E8u, 0x14BE68u, 0x14BE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE70u;
label_14be70:
    // 0x14be70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14be70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14be74:
    // 0x14be74: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x14be74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_14be78:
    // 0x14be78: 0xc110978  jal         func_4425E0
label_14be7c:
    if (ctx->pc == 0x14BE7Cu) {
        ctx->pc = 0x14BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE78u;
        // 0x14be7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BE80u;
        goto label_14be80;
    }
    ctx->pc = 0x14BE78u;
    SET_GPR_U32(ctx, 31, 0x14BE80u);
    ctx->pc = 0x14BE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BE78u;
    // 0x14be7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4425E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4425E0u, 0x14BE78u, 0x14BE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE80u;
label_14be80:
    // 0x14be80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14be80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14be84:
    // 0x14be84: 0xae220884  sw          $v0, 0x884($s1)
    ctx->pc = 0x14be84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2180), GPR_U32(ctx, 2));
label_14be88:
    // 0x14be88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14be88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14be8c:
    // 0x14be8c: 0xc05402a  jal         func_1500A8
label_14be90:
    if (ctx->pc == 0x14BE90u) {
        ctx->pc = 0x14BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE8Cu;
        // 0x14be90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BE94u;
        goto label_14be94;
    }
    ctx->pc = 0x14BE8Cu;
    SET_GPR_U32(ctx, 31, 0x14BE94u);
    ctx->pc = 0x14BE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BE8Cu;
    // 0x14be90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1500A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1500A8u, 0x14BE8Cu, 0x14BE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE94u;
label_14be94:
    // 0x14be94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14be94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14be98:
    // 0x14be98: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x14be98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14be9c:
    // 0x14be9c: 0xc05402a  jal         func_1500A8
label_14bea0:
    if (ctx->pc == 0x14BEA0u) {
        ctx->pc = 0x14BEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE9Cu;
        // 0x14bea0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BEA4u;
        goto label_14bea4;
    }
    ctx->pc = 0x14BE9Cu;
    SET_GPR_U32(ctx, 31, 0x14BEA4u);
    ctx->pc = 0x14BEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BE9Cu;
    // 0x14bea0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1500A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1500A8u, 0x14BE9Cu, 0x14BEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BEA4u;
label_14bea4:
    // 0x14bea4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14bea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14bea8:
    // 0x14bea8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x14bea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14beac:
    // 0x14beac: 0xc05402a  jal         func_1500A8
label_14beb0:
    if (ctx->pc == 0x14BEB0u) {
        ctx->pc = 0x14BEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BEACu;
        // 0x14beb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BEB4u;
        goto label_14beb4;
    }
    ctx->pc = 0x14BEACu;
    SET_GPR_U32(ctx, 31, 0x14BEB4u);
    ctx->pc = 0x14BEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BEACu;
    // 0x14beb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1500A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1500A8u, 0x14BEACu, 0x14BEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BEB4u;
label_14beb4:
    // 0x14beb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14beb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14beb8:
    // 0x14beb8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14beb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14bebc:
    // 0x14bebc: 0xc05402a  jal         func_1500A8
label_14bec0:
    if (ctx->pc == 0x14BEC0u) {
        ctx->pc = 0x14BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BEBCu;
        // 0x14bec0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BEC4u;
        goto label_14bec4;
    }
    ctx->pc = 0x14BEBCu;
    SET_GPR_U32(ctx, 31, 0x14BEC4u);
    ctx->pc = 0x14BEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BEBCu;
    // 0x14bec0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1500A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1500A8u, 0x14BEBCu, 0x14BEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BEC4u;
label_14bec4:
    // 0x14bec4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14bec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14bec8:
    // 0x14bec8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x14bec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_14becc:
    // 0x14becc: 0xc05402a  jal         func_1500A8
label_14bed0:
    if (ctx->pc == 0x14BED0u) {
        ctx->pc = 0x14BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BECCu;
        // 0x14bed0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BED4u;
        goto label_14bed4;
    }
    ctx->pc = 0x14BECCu;
    SET_GPR_U32(ctx, 31, 0x14BED4u);
    ctx->pc = 0x14BED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BECCu;
    // 0x14bed0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1500A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1500A8u, 0x14BECCu, 0x14BED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BED4u;
label_14bed4:
    // 0x14bed4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14bed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14bed8:
    // 0x14bed8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x14bed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_14bedc:
    // 0x14bedc: 0xc05402a  jal         func_1500A8
label_14bee0:
    if (ctx->pc == 0x14BEE0u) {
        ctx->pc = 0x14BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BEDCu;
        // 0x14bee0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BEE4u;
        goto label_14bee4;
    }
    ctx->pc = 0x14BEDCu;
    SET_GPR_U32(ctx, 31, 0x14BEE4u);
    ctx->pc = 0x14BEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BEDCu;
    // 0x14bee0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1500A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1500A8u, 0x14BEDCu, 0x14BEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BEE4u;
label_14bee4:
    // 0x14bee4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14bee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14bee8:
    // 0x14bee8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x14bee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_14beec:
    // 0x14beec: 0xc05402a  jal         func_1500A8
label_14bef0:
    if (ctx->pc == 0x14BEF0u) {
        ctx->pc = 0x14BEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BEECu;
        // 0x14bef0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BEF4u;
        goto label_14bef4;
    }
    ctx->pc = 0x14BEECu;
    SET_GPR_U32(ctx, 31, 0x14BEF4u);
    ctx->pc = 0x14BEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BEECu;
    // 0x14bef0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1500A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1500A8u, 0x14BEECu, 0x14BEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BEF4u;
label_14bef4:
    // 0x14bef4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14bef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14bef8:
    // 0x14bef8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x14bef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_14befc:
    // 0x14befc: 0xc05402a  jal         func_1500A8
label_14bf00:
    if (ctx->pc == 0x14BF00u) {
        ctx->pc = 0x14BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BEFCu;
        // 0x14bf00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BF04u;
        goto label_14bf04;
    }
    ctx->pc = 0x14BEFCu;
    SET_GPR_U32(ctx, 31, 0x14BF04u);
    ctx->pc = 0x14BF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BEFCu;
    // 0x14bf00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1500A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1500A8u, 0x14BEFCu, 0x14BF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF04u;
label_14bf04:
    // 0x14bf04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14bf04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14bf08:
    // 0x14bf08: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x14bf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_14bf0c:
    // 0x14bf0c: 0xc05402a  jal         func_1500A8
label_14bf10:
    if (ctx->pc == 0x14BF10u) {
        ctx->pc = 0x14BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF0Cu;
        // 0x14bf10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BF14u;
        goto label_14bf14;
    }
    ctx->pc = 0x14BF0Cu;
    SET_GPR_U32(ctx, 31, 0x14BF14u);
    ctx->pc = 0x14BF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF0Cu;
    // 0x14bf10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1500A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1500A8u, 0x14BF0Cu, 0x14BF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF14u;
label_14bf14:
    // 0x14bf14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14bf14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14bf18:
    // 0x14bf18: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x14bf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_14bf1c:
    // 0x14bf1c: 0xc05402a  jal         func_1500A8
label_14bf20:
    if (ctx->pc == 0x14BF20u) {
        ctx->pc = 0x14BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF1Cu;
        // 0x14bf20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BF24u;
        goto label_14bf24;
    }
    ctx->pc = 0x14BF1Cu;
    SET_GPR_U32(ctx, 31, 0x14BF24u);
    ctx->pc = 0x14BF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF1Cu;
    // 0x14bf20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1500A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1500A8u, 0x14BF1Cu, 0x14BF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF24u;
label_14bf24:
    // 0x14bf24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14bf24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14bf28:
    // 0x14bf28: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x14bf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_14bf2c:
    // 0x14bf2c: 0xc05402a  jal         func_1500A8
label_14bf30:
    if (ctx->pc == 0x14BF30u) {
        ctx->pc = 0x14BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF2Cu;
        // 0x14bf30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BF34u;
        goto label_14bf34;
    }
    ctx->pc = 0x14BF2Cu;
    SET_GPR_U32(ctx, 31, 0x14BF34u);
    ctx->pc = 0x14BF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF2Cu;
    // 0x14bf30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1500A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1500A8u, 0x14BF2Cu, 0x14BF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF34u;
label_14bf34:
    // 0x14bf34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14bf34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14bf38:
    // 0x14bf38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14bf38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14bf3c:
    // 0x14bf3c: 0xc05402a  jal         func_1500A8
label_14bf40:
    if (ctx->pc == 0x14BF40u) {
        ctx->pc = 0x14BF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF3Cu;
        // 0x14bf40: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BF44u;
        goto label_14bf44;
    }
    ctx->pc = 0x14BF3Cu;
    SET_GPR_U32(ctx, 31, 0x14BF44u);
    ctx->pc = 0x14BF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF3Cu;
    // 0x14bf40: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1500A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1500A8u, 0x14BF3Cu, 0x14BF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF44u;
label_14bf44:
    // 0x14bf44: 0xc053eb2  jal         func_14FAC8
label_14bf48:
    if (ctx->pc == 0x14BF48u) {
        ctx->pc = 0x14BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF44u;
        // 0x14bf48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BF4Cu;
        goto label_14bf4c;
    }
    ctx->pc = 0x14BF44u;
    SET_GPR_U32(ctx, 31, 0x14BF4Cu);
    ctx->pc = 0x14BF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF44u;
    // 0x14bf48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FAC8u, 0x14BF44u, 0x14BF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF4Cu;
label_14bf4c:
    // 0x14bf4c: 0xc053008  jal         func_14C020
label_14bf50:
    if (ctx->pc == 0x14BF50u) {
        ctx->pc = 0x14BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF4Cu;
        // 0x14bf50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BF54u;
        goto label_14bf54;
    }
    ctx->pc = 0x14BF4Cu;
    SET_GPR_U32(ctx, 31, 0x14BF54u);
    ctx->pc = 0x14BF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF4Cu;
    // 0x14bf50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C020u, 0x14BF4Cu, 0x14BF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF54u;
label_14bf54:
    // 0x14bf54: 0xc053eb2  jal         func_14FAC8
label_14bf58:
    if (ctx->pc == 0x14BF58u) {
        ctx->pc = 0x14BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF54u;
        // 0x14bf58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BF5Cu;
        goto label_14bf5c;
    }
    ctx->pc = 0x14BF54u;
    SET_GPR_U32(ctx, 31, 0x14BF5Cu);
    ctx->pc = 0x14BF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF54u;
    // 0x14bf58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FAC8u, 0x14BF54u, 0x14BF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF5Cu;
label_14bf5c:
    // 0x14bf5c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14bf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_14bf60:
    // 0x14bf60: 0xc05432a  jal         func_150CA8
label_14bf64:
    if (ctx->pc == 0x14BF64u) {
        ctx->pc = 0x14BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF60u;
        // 0x14bf64: 0x2484b668  addiu       $a0, $a0, -0x4998 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BF68u;
        goto label_14bf68;
    }
    ctx->pc = 0x14BF60u;
    SET_GPR_U32(ctx, 31, 0x14BF68u);
    ctx->pc = 0x14BF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF60u;
    // 0x14bf64: 0x2484b668  addiu       $a0, $a0, -0x4998 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150CA8u, 0x14BF60u, 0x14BF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF68u;
label_14bf68:
    // 0x14bf68: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14bf68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14bf6c:
    // 0x14bf6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14bf6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14bf70:
    // 0x14bf70: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14bf70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14bf74:
    // 0x14bf74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14bf74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14bf78:
    // 0x14bf78: 0x3e00008  jr          $ra
label_14bf7c:
    if (ctx->pc == 0x14BF7Cu) {
        ctx->pc = 0x14BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF78u;
        // 0x14bf7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14BF80u;
        goto label_fallthrough_0x14bf78;
    }
    ctx->pc = 0x14BF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF78u;
        // 0x14bf7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14bf78:
    ctx->pc = 0x14BF80u;
}
