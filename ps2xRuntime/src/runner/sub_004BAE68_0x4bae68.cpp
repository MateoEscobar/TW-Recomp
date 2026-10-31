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

// Function: sub_004BAE68
// Address: 0x4bae68 - 0x4bbb90
void sub_004BAE68_0x4bae68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BAE68_0x4bae68");
#endif

    switch (ctx->pc) {
        case 0x4baf28u: goto label_4baf28;
        case 0x4bafe4u: goto label_4bafe4;
        case 0x4bb020u: goto label_4bb020;
        case 0x4bb048u: goto label_4bb048;
        case 0x4bb07cu: goto label_4bb07c;
        case 0x4bb08cu: goto label_4bb08c;
        case 0x4bb0c8u: goto label_4bb0c8;
        case 0x4bb0f8u: goto label_4bb0f8;
        case 0x4bb104u: goto label_4bb104;
        case 0x4bb124u: goto label_4bb124;
        case 0x4bb154u: goto label_4bb154;
        case 0x4bb160u: goto label_4bb160;
        case 0x4bb1a0u: goto label_4bb1a0;
        case 0x4bb204u: goto label_4bb204;
        case 0x4bb214u: goto label_4bb214;
        case 0x4bb228u: goto label_4bb228;
        case 0x4bb238u: goto label_4bb238;
        case 0x4bb244u: goto label_4bb244;
        case 0x4bb254u: goto label_4bb254;
        case 0x4bb260u: goto label_4bb260;
        case 0x4bb274u: goto label_4bb274;
        case 0x4bb288u: goto label_4bb288;
        case 0x4bb29cu: goto label_4bb29c;
        case 0x4bb2a8u: goto label_4bb2a8;
        case 0x4bb2b8u: goto label_4bb2b8;
        case 0x4bb2d0u: goto label_4bb2d0;
        case 0x4bb304u: goto label_4bb304;
        case 0x4bb3acu: goto label_4bb3ac;
        case 0x4bb3bcu: goto label_4bb3bc;
        case 0x4bb3ccu: goto label_4bb3cc;
        case 0x4bb3dcu: goto label_4bb3dc;
        case 0x4bb424u: goto label_4bb424;
        case 0x4bb430u: goto label_4bb430;
        case 0x4bb440u: goto label_4bb440;
        case 0x4bb44cu: goto label_4bb44c;
        case 0x4bb45cu: goto label_4bb45c;
        case 0x4bb468u: goto label_4bb468;
        case 0x4bb474u: goto label_4bb474;
        case 0x4bb484u: goto label_4bb484;
        case 0x4bb494u: goto label_4bb494;
        case 0x4bb4a8u: goto label_4bb4a8;
        case 0x4bb4b8u: goto label_4bb4b8;
        case 0x4bb4c4u: goto label_4bb4c4;
        case 0x4bb4d4u: goto label_4bb4d4;
        case 0x4bb4e0u: goto label_4bb4e0;
        case 0x4bb4f0u: goto label_4bb4f0;
        case 0x4bb4fcu: goto label_4bb4fc;
        case 0x4bb50cu: goto label_4bb50c;
        case 0x4bb518u: goto label_4bb518;
        case 0x4bb528u: goto label_4bb528;
        case 0x4bb534u: goto label_4bb534;
        case 0x4bb544u: goto label_4bb544;
        case 0x4bb550u: goto label_4bb550;
        case 0x4bb55cu: goto label_4bb55c;
        case 0x4bb56cu: goto label_4bb56c;
        case 0x4bb57cu: goto label_4bb57c;
        case 0x4bb588u: goto label_4bb588;
        case 0x4bb598u: goto label_4bb598;
        case 0x4bb5a4u: goto label_4bb5a4;
        case 0x4bb5b0u: goto label_4bb5b0;
        case 0x4bb5c0u: goto label_4bb5c0;
        case 0x4bb5d0u: goto label_4bb5d0;
        case 0x4bb5e0u: goto label_4bb5e0;
        case 0x4bb5ecu: goto label_4bb5ec;
        case 0x4bb5fcu: goto label_4bb5fc;
        case 0x4bb60cu: goto label_4bb60c;
        case 0x4bb618u: goto label_4bb618;
        case 0x4bb62cu: goto label_4bb62c;
        case 0x4bb640u: goto label_4bb640;
        case 0x4bb654u: goto label_4bb654;
        case 0x4bb660u: goto label_4bb660;
        case 0x4bb678u: goto label_4bb678;
        case 0x4bb684u: goto label_4bb684;
        case 0x4bb694u: goto label_4bb694;
        case 0x4bb6b0u: goto label_4bb6b0;
        case 0x4bb6bcu: goto label_4bb6bc;
        case 0x4bb6ccu: goto label_4bb6cc;
        case 0x4bb6d8u: goto label_4bb6d8;
        case 0x4bb6e4u: goto label_4bb6e4;
        case 0x4bb6f0u: goto label_4bb6f0;
        case 0x4bb740u: goto label_4bb740;
        case 0x4bb74cu: goto label_4bb74c;
        case 0x4bb75cu: goto label_4bb75c;
        case 0x4bb768u: goto label_4bb768;
        case 0x4bb778u: goto label_4bb778;
        case 0x4bb788u: goto label_4bb788;
        case 0x4bb7ccu: goto label_4bb7cc;
        case 0x4bb7e8u: goto label_4bb7e8;
        case 0x4bb7f8u: goto label_4bb7f8;
        case 0x4bb804u: goto label_4bb804;
        case 0x4bb81cu: goto label_4bb81c;
        case 0x4bb86cu: goto label_4bb86c;
        case 0x4bb884u: goto label_4bb884;
        case 0x4bb890u: goto label_4bb890;
        case 0x4bb8acu: goto label_4bb8ac;
        case 0x4bb94cu: goto label_4bb94c;
        case 0x4bb95cu: goto label_4bb95c;
        case 0x4bb978u: goto label_4bb978;
        case 0x4bb988u: goto label_4bb988;
        case 0x4bb994u: goto label_4bb994;
        case 0x4bb9a4u: goto label_4bb9a4;
        case 0x4bb9b8u: goto label_4bb9b8;
        case 0x4bb9c4u: goto label_4bb9c4;
        case 0x4bb9d4u: goto label_4bb9d4;
        case 0x4bb9e4u: goto label_4bb9e4;
        case 0x4bb9f0u: goto label_4bb9f0;
        case 0x4bba00u: goto label_4bba00;
        case 0x4bba14u: goto label_4bba14;
        case 0x4bba24u: goto label_4bba24;
        case 0x4bba30u: goto label_4bba30;
        case 0x4bba40u: goto label_4bba40;
        case 0x4bba4cu: goto label_4bba4c;
        case 0x4bba5cu: goto label_4bba5c;
        case 0x4bba68u: goto label_4bba68;
        case 0x4bba78u: goto label_4bba78;
        case 0x4bba84u: goto label_4bba84;
        case 0x4bba90u: goto label_4bba90;
        case 0x4bbaa0u: goto label_4bbaa0;
        case 0x4bbab4u: goto label_4bbab4;
        case 0x4bbac0u: goto label_4bbac0;
        case 0x4bbad0u: goto label_4bbad0;
        case 0x4bbadcu: goto label_4bbadc;
        case 0x4bbae8u: goto label_4bbae8;
        case 0x4bbaf4u: goto label_4bbaf4;
        case 0x4bbb04u: goto label_4bbb04;
        case 0x4bbb30u: goto label_4bbb30;
        case 0x4bbb60u: goto label_4bbb60;
        default: break;
    }

    ctx->pc = 0x4bae68u;

    // 0x4bae68: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4bae68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x4bae6c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x4bae6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x4bae70: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x4bae70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x4bae74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4bae74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bae78: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x4bae78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x4bae7c: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x4bae7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x4bae80: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x4bae80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x4bae84: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x4bae84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x4bae88: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x4bae88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x4bae8c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x4bae8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x4bae90: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x4bae90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x4bae94: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x4bae94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x4bae98: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x4bae98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x4bae9c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4bae9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4baea0: 0x2b03f  dsra32      $s6, $v0, 0
    ctx->pc = 0x4baea0u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4baea4: 0x2b83c  dsll32      $s7, $v0, 0
    ctx->pc = 0x4baea4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4baea8: 0x17b83f  dsra32      $s7, $s7, 0
    ctx->pc = 0x4baea8u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x4baeac: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4baeacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4baeb0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x4baeb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4baeb4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x4baeb4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x4baeb8: 0x3a03f  dsra32      $s4, $v1, 0
    ctx->pc = 0x4baeb8u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4baebc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x4baebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x4baec0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4baec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4baec4: 0x2828024  and         $s0, $s4, $v0
    ctx->pc = 0x4baec4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x4baec8: 0x2041825  or          $v1, $s0, $a0
    ctx->pc = 0x4baec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x4baecc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BAECCu;
    {
        const bool branch_taken_0x4baecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BAED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAECCu;
        // 0x4baed0: 0x2c2a824  and         $s5, $s6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4baecc) {
            ctx->pc = 0x4BAEE8u;
            goto label_4baee8;
        }
    }
    ctx->pc = 0x4BAED4u;
    // 0x4baed4: 0x3402ffc0  ori         $v0, $zero, 0xFFC0
    ctx->pc = 0x4baed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4baed8: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x4baed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x4baedc: 0x10000321  b           . + 4 + (0x321 << 2)
    ctx->pc = 0x4BAEDCu;
    {
        const bool branch_taken_0x4baedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BAEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAEDCu;
        // 0x4baee0: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4baedc) {
            ctx->pc = 0x4BBB64u;
            goto label_4bbb64;
        }
    }
    ctx->pc = 0x4BAEE4u;
    // 0x4baee4: 0x0  nop
    ctx->pc = 0x4baee4u;
    // NOP
label_4baee8:
    // 0x4baee8: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x4baee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x4baeec: 0x75102a  slt         $v0, $v1, $s5
    ctx->pc = 0x4baeecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x4baef0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4BAEF0u;
    {
        const bool branch_taken_0x4baef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BAEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAEF0u;
        // 0x4baef4: 0xdfa50000  ld          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4baef0) {
            ctx->pc = 0x4BAF20u;
            goto label_4baf20;
        }
    }
    ctx->pc = 0x4BAEF8u;
    // 0x4baef8: 0x16a30003  bne         $s5, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BAEF8u;
    {
        const bool branch_taken_0x4baef8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x4BAEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAEF8u;
        // 0x4baefc: 0x70102a  slt         $v0, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4baef8) {
            ctx->pc = 0x4BAF08u;
            goto label_4baf08;
        }
    }
    ctx->pc = 0x4BAF00u;
    // 0x4baf00: 0x16e00007  bnez        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BAF00u;
    {
        const bool branch_taken_0x4baf00 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x4baf00) {
            ctx->pc = 0x4BAF20u;
            goto label_4baf20;
        }
    }
    ctx->pc = 0x4BAF08u;
label_4baf08:
    // 0x4baf08: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BAF08u;
    {
        const bool branch_taken_0x4baf08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4baf08) {
            ctx->pc = 0x4BAF0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BAF08u;
            // 0x4baf0c: 0xdfa50000  ld          $a1, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BAF20u;
            goto label_4baf20;
        }
    }
    ctx->pc = 0x4BAF10u;
    // 0x4baf10: 0x16030007  bne         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BAF10u;
    {
        const bool branch_taken_0x4baf10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x4baf10) {
            ctx->pc = 0x4BAF30u;
            goto label_4baf30;
        }
    }
    ctx->pc = 0x4BAF18u;
    // 0x4baf18: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BAF18u;
    {
        const bool branch_taken_0x4baf18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BAF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAF18u;
        // 0x4baf1c: 0xdfa50000  ld          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4baf18) {
            ctx->pc = 0x4BAF30u;
            goto label_4baf30;
        }
    }
    ctx->pc = 0x4BAF20u;
label_4baf20:
    // 0x4baf20: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BAF20u;
    SET_GPR_U32(ctx, 31, 0x4BAF28u);
    ctx->pc = 0x4BAF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAF20u;
    // 0x4baf24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BAF20u, 0x4BAF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAF28u;
label_4baf28:
    // 0x4baf28: 0x1000030e  b           . + 4 + (0x30E << 2)
    ctx->pc = 0x4BAF28u;
    {
        const bool branch_taken_0x4baf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAF28u;
        // 0x4baf2c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4baf28) {
            ctx->pc = 0x4BBB64u;
            goto label_4bbb64;
        }
    }
    ctx->pc = 0x4BAF30u;
label_4baf30:
    // 0x4baf30: 0x6c10020  bgez        $s6, . + 4 + (0x20 << 2)
    ctx->pc = 0x4BAF30u;
    {
        const bool branch_taken_0x4baf30 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x4BAF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAF30u;
        // 0x4baf34: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4baf30) {
            ctx->pc = 0x4BAFB4u;
            goto label_4bafb4;
        }
    }
    ctx->pc = 0x4BAF38u;
    // 0x4baf38: 0x3c02433f  lui         $v0, 0x433F
    ctx->pc = 0x4baf38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17215 << 16));
    // 0x4baf3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4baf3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4baf40: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4baf40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4baf44: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4BAF44u;
    {
        const bool branch_taken_0x4baf44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BAF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAF44u;
        // 0x4baf48: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4baf44) {
            ctx->pc = 0x4BAFB0u;
            goto label_4bafb0;
        }
    }
    ctx->pc = 0x4BAF4Cu;
    // 0x4baf4c: 0x3c023fef  lui         $v0, 0x3FEF
    ctx->pc = 0x4baf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16367 << 16));
    // 0x4baf50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4baf50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4baf54: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4baf54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4baf58: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4BAF58u;
    {
        const bool branch_taken_0x4baf58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BAF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAF58u;
        // 0x4baf5c: 0x101503  sra         $v0, $s0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4baf58) {
            ctx->pc = 0x4BAFB4u;
            goto label_4bafb4;
        }
    }
    ctx->pc = 0x4BAF60u;
    // 0x4baf60: 0x2453fc01  addiu       $s3, $v0, -0x3FF
    ctx->pc = 0x4baf60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966273));
    // 0x4baf64: 0x2a630015  slti        $v1, $s3, 0x15
    ctx->pc = 0x4baf64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x4baf68: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4BAF68u;
    {
        const bool branch_taken_0x4baf68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BAF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAF68u;
        // 0x4baf6c: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4baf68) {
            ctx->pc = 0x4BAF8Cu;
            goto label_4baf8c;
        }
    }
    ctx->pc = 0x4BAF70u;
    // 0x4baf70: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x4baf70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x4baf74: 0x448806  srlv        $s1, $a0, $v0
    ctx->pc = 0x4baf74u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x4baf78: 0x511004  sllv        $v0, $s1, $v0
    ctx->pc = 0x4baf78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
    // 0x4baf7c: 0x1444000d  bne         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x4BAF7Cu;
    {
        const bool branch_taken_0x4baf7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x4BAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAF7Cu;
        // 0x4baf80: 0x32230001  andi        $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4baf7c) {
            ctx->pc = 0x4BAFB4u;
            goto label_4bafb4;
        }
    }
    ctx->pc = 0x4BAF84u;
    // 0x4baf84: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4BAF84u;
    {
        const bool branch_taken_0x4baf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BAF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAF84u;
        // 0x4baf88: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4baf84) {
            ctx->pc = 0x4BAFACu;
            goto label_4bafac;
        }
    }
    ctx->pc = 0x4BAF8Cu;
label_4baf8c:
    // 0x4baf8c: 0x1480003d  bnez        $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x4BAF8Cu;
    {
        const bool branch_taken_0x4baf8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BAF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAF8Cu;
        // 0x4baf90: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4baf8c) {
            ctx->pc = 0x4BB084u;
            goto label_4bb084;
        }
    }
    ctx->pc = 0x4BAF94u;
    // 0x4baf94: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x4baf94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x4baf98: 0x508807  srav        $s1, $s0, $v0
    ctx->pc = 0x4baf98u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4baf9c: 0x511004  sllv        $v0, $s1, $v0
    ctx->pc = 0x4baf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
    // 0x4bafa0: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BAFA0u;
    {
        const bool branch_taken_0x4bafa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4BAFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAFA0u;
        // 0x4bafa4: 0x32230001  andi        $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bafa0) {
            ctx->pc = 0x4BAFB4u;
            goto label_4bafb4;
        }
    }
    ctx->pc = 0x4BAFA8u;
    // 0x4bafa8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4bafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4bafac:
    // 0x4bafac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4bafacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4bafb0:
    // 0x4bafb0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x4bafb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_4bafb4:
    // 0x4bafb4: 0x14800033  bnez        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x4BAFB4u;
    {
        const bool branch_taken_0x4bafb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BAFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAFB4u;
        // 0x4bafb8: 0x3c027ff0  lui         $v0, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bafb4) {
            ctx->pc = 0x4BB084u;
            goto label_4bb084;
        }
    }
    ctx->pc = 0x4BAFBCu;
    // 0x4bafbc: 0x1602001a  bne         $s0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4BAFBCu;
    {
        const bool branch_taken_0x4bafbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x4BAFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAFBCu;
        // 0x4bafc0: 0x3c023ff0  lui         $v0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bafbc) {
            ctx->pc = 0x4BB028u;
            goto label_4bb028;
        }
    }
    ctx->pc = 0x4BAFC4u;
    // 0x4bafc4: 0x3c02c010  lui         $v0, 0xC010
    ctx->pc = 0x4bafc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49168 << 16));
    // 0x4bafc8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x4bafc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x4bafcc: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4bafccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4bafd0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BAFD0u;
    {
        const bool branch_taken_0x4bafd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BAFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAFD0u;
        // 0x4bafd4: 0x3c023fef  lui         $v0, 0x3FEF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16367 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bafd0) {
            ctx->pc = 0x4BAFECu;
            goto label_4bafec;
        }
    }
    ctx->pc = 0x4BAFD8u;
    // 0x4bafd8: 0xdfa40000  ld          $a0, 0x0($sp)
    ctx->pc = 0x4bafd8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bafdc: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BAFDCu;
    SET_GPR_U32(ctx, 31, 0x4BAFE4u);
    ctx->pc = 0x4BAFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAFDCu;
    // 0x4bafe0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BAFDCu, 0x4BAFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAFE4u;
label_4bafe4:
    // 0x4bafe4: 0x100002df  b           . + 4 + (0x2DF << 2)
    ctx->pc = 0x4BAFE4u;
    {
        const bool branch_taken_0x4bafe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BAFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAFE4u;
        // 0x4bafe8: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bafe4) {
            ctx->pc = 0x4BBB64u;
            goto label_4bbb64;
        }
    }
    ctx->pc = 0x4BAFECu;
label_4bafec:
    // 0x4bafec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bafecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4baff0: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x4baff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x4baff4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BAFF4u;
    {
        const bool branch_taken_0x4baff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4baff4) {
            ctx->pc = 0x4BB00Cu;
            goto label_4bb00c;
        }
    }
    ctx->pc = 0x4BAFFCu;
    // 0x4baffc: 0x68002d8  bltz        $s4, . + 4 + (0x2D8 << 2)
    ctx->pc = 0x4BAFFCu;
    {
        const bool branch_taken_0x4baffc = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x4BB000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAFFCu;
        // 0x4bb000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4baffc) {
            ctx->pc = 0x4BBB60u;
            goto label_4bbb60;
        }
    }
    ctx->pc = 0x4BB004u;
    // 0x4bb004: 0x100002d6  b           . + 4 + (0x2D6 << 2)
    ctx->pc = 0x4BB004u;
    {
        const bool branch_taken_0x4bb004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB004u;
        // 0x4bb008: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb004) {
            ctx->pc = 0x4BBB60u;
            goto label_4bbb60;
        }
    }
    ctx->pc = 0x4BB00Cu;
label_4bb00c:
    // 0x4bb00c: 0x68102d4  bgez        $s4, . + 4 + (0x2D4 << 2)
    ctx->pc = 0x4BB00Cu;
    {
        const bool branch_taken_0x4bb00c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x4BB010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB00Cu;
        // 0x4bb010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb00c) {
            ctx->pc = 0x4BBB60u;
            goto label_4bbb60;
        }
    }
    ctx->pc = 0x4BB014u;
    // 0x4bb014: 0xdfa50000  ld          $a1, 0x0($sp)
    ctx->pc = 0x4bb014u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bb018: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB018u;
    SET_GPR_U32(ctx, 31, 0x4BB020u);
    ctx->pc = 0x4BB01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB018u;
    // 0x4bb01c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB018u, 0x4BB020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB020u;
label_4bb020:
    // 0x4bb020: 0x100002d0  b           . + 4 + (0x2D0 << 2)
    ctx->pc = 0x4BB020u;
    {
        const bool branch_taken_0x4bb020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB020u;
        // 0x4bb024: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb020) {
            ctx->pc = 0x4BBB64u;
            goto label_4bbb64;
        }
    }
    ctx->pc = 0x4BB028u;
label_4bb028:
    // 0x4bb028: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4BB028u;
    {
        const bool branch_taken_0x4bb028 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x4BB02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB028u;
        // 0x4bb02c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb028) {
            ctx->pc = 0x4BB050u;
            goto label_4bb050;
        }
    }
    ctx->pc = 0x4BB030u;
    // 0x4bb030: 0x68102cb  bgez        $s4, . + 4 + (0x2CB << 2)
    ctx->pc = 0x4BB030u;
    {
        const bool branch_taken_0x4bb030 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x4BB034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB030u;
        // 0x4bb034: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb030) {
            ctx->pc = 0x4BBB60u;
            goto label_4bbb60;
        }
    }
    ctx->pc = 0x4BB038u;
    // 0x4bb038: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x4bb038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4bb03c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x4bb03cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x4bb040: 0xc10b000  jal         func_42C000
    ctx->pc = 0x4BB040u;
    SET_GPR_U32(ctx, 31, 0x4BB048u);
    ctx->pc = 0x4BB044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB040u;
    // 0x4bb044: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x4BB040u, 0x4BB048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB048u;
label_4bb048:
    // 0x4bb048: 0x100002c6  b           . + 4 + (0x2C6 << 2)
    ctx->pc = 0x4BB048u;
    {
        const bool branch_taken_0x4bb048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB048u;
        // 0x4bb04c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb048) {
            ctx->pc = 0x4BBB64u;
            goto label_4bbb64;
        }
    }
    ctx->pc = 0x4BB050u;
label_4bb050:
    // 0x4bb050: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BB050u;
    {
        const bool branch_taken_0x4bb050 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x4BB054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB050u;
        // 0x4bb054: 0x3c023fe0  lui         $v0, 0x3FE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb050) {
            ctx->pc = 0x4BB064u;
            goto label_4bb064;
        }
    }
    ctx->pc = 0x4BB058u;
    // 0x4bb058: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4bb058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb05c: 0x100002be  b           . + 4 + (0x2BE << 2)
    ctx->pc = 0x4BB05Cu;
    {
        const bool branch_taken_0x4bb05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB05Cu;
        // 0x4bb060: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb05c) {
            ctx->pc = 0x4BBB58u;
            goto label_4bbb58;
        }
    }
    ctx->pc = 0x4BB064u;
label_4bb064:
    // 0x4bb064: 0x16820007  bne         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BB064u;
    {
        const bool branch_taken_0x4bb064 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x4bb064) {
            ctx->pc = 0x4BB084u;
            goto label_4bb084;
        }
    }
    ctx->pc = 0x4BB06Cu;
    // 0x4bb06c: 0x6c00005  bltz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BB06Cu;
    {
        const bool branch_taken_0x4bb06c = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x4bb06c) {
            ctx->pc = 0x4BB084u;
            goto label_4bb084;
        }
    }
    ctx->pc = 0x4BB074u;
    // 0x4bb074: 0xc12eee4  jal         func_4BBB90
    ctx->pc = 0x4BB074u;
    SET_GPR_U32(ctx, 31, 0x4BB07Cu);
    ctx->pc = 0x4BB078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB074u;
    // 0x4bb078: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BBB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BBB90u, 0x4BB074u, 0x4BB07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB07Cu;
label_4bb07c:
    // 0x4bb07c: 0x100002b9  b           . + 4 + (0x2B9 << 2)
    ctx->pc = 0x4BB07Cu;
    {
        const bool branch_taken_0x4bb07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB07Cu;
        // 0x4bb080: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb07c) {
            ctx->pc = 0x4BBB64u;
            goto label_4bbb64;
        }
    }
    ctx->pc = 0x4BB084u;
label_4bb084:
    // 0x4bb084: 0xc12f8c2  jal         func_4BE308
    ctx->pc = 0x4BB084u;
    SET_GPR_U32(ctx, 31, 0x4BB08Cu);
    ctx->pc = 0x4BB088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB084u;
    // 0x4bb088: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE308u, 0x4BB084u, 0x4BB08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB08Cu;
label_4bb08c:
    // 0x4bb08c: 0x16e00028  bnez        $s7, . + 4 + (0x28 << 2)
    ctx->pc = 0x4BB08Cu;
    {
        const bool branch_taken_0x4bb08c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BB090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB08Cu;
        // 0x4bb090: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb08c) {
            ctx->pc = 0x4BB130u;
            goto label_4bb130;
        }
    }
    ctx->pc = 0x4BB094u;
    // 0x4bb094: 0x3c027ff0  lui         $v0, 0x7FF0
    ctx->pc = 0x4bb094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
    // 0x4bb098: 0x12a20005  beq         $s5, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BB098u;
    {
        const bool branch_taken_0x4bb098 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x4bb098) {
            ctx->pc = 0x4BB0B0u;
            goto label_4bb0b0;
        }
    }
    ctx->pc = 0x4BB0A0u;
    // 0x4bb0a0: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BB0A0u;
    {
        const bool branch_taken_0x4bb0a0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB0A0u;
        // 0x4bb0a4: 0x3c023ff0  lui         $v0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb0a0) {
            ctx->pc = 0x4BB0B0u;
            goto label_4bb0b0;
        }
    }
    ctx->pc = 0x4BB0A8u;
    // 0x4bb0a8: 0x56a20022  bnel        $s5, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4BB0A8u;
    {
        const bool branch_taken_0x4bb0a8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x4bb0a8) {
            ctx->pc = 0x4BB0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BB0A8u;
            // 0x4bb0ac: 0x16b7c2  srl         $s6, $s6, 31 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 22), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BB134u;
            goto label_4bb134;
        }
    }
    ctx->pc = 0x4BB0B0u;
label_4bb0b0:
    // 0x4bb0b0: 0x6810006  bgez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BB0B0u;
    {
        const bool branch_taken_0x4bb0b0 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x4BB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB0B0u;
        // 0x4bb0b4: 0x3c0902d  daddu       $s2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb0b0) {
            ctx->pc = 0x4BB0CCu;
            goto label_4bb0cc;
        }
    }
    ctx->pc = 0x4BB0B8u;
    // 0x4bb0b8: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x4bb0b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4bb0bc: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x4bb0bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x4bb0c0: 0xc10b000  jal         func_42C000
    ctx->pc = 0x4BB0C0u;
    SET_GPR_U32(ctx, 31, 0x4BB0C8u);
    ctx->pc = 0x4BB0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB0C0u;
    // 0x4bb0c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x4BB0C0u, 0x4BB0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB0C8u;
label_4bb0c8:
    // 0x4bb0c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4bb0c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4bb0cc:
    // 0x4bb0cc: 0x6c102a4  bgez        $s6, . + 4 + (0x2A4 << 2)
    ctx->pc = 0x4BB0CCu;
    {
        const bool branch_taken_0x4bb0cc = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x4BB0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB0CCu;
        // 0x4bb0d0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb0cc) {
            ctx->pc = 0x4BBB60u;
            goto label_4bbb60;
        }
    }
    ctx->pc = 0x4BB0D4u;
    // 0x4bb0d4: 0x3c02c010  lui         $v0, 0xC010
    ctx->pc = 0x4bb0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49168 << 16));
    // 0x4bb0d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x4bb0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bb0dc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x4bb0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x4bb0e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4bb0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4bb0e4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4BB0E4u;
    {
        const bool branch_taken_0x4bb0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BB0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB0E4u;
        // 0x4bb0e8: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb0e4) {
            ctx->pc = 0x4BB10Cu;
            goto label_4bb10c;
        }
    }
    ctx->pc = 0x4BB0ECu;
    // 0x4bb0ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4bb0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb0f0: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB0F0u;
    SET_GPR_U32(ctx, 31, 0x4BB0F8u);
    ctx->pc = 0x4BB0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB0F0u;
    // 0x4bb0f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB0F0u, 0x4BB0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB0F8u;
label_4bb0f8:
    // 0x4bb0f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bb0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb0fc: 0xc10b000  jal         func_42C000
    ctx->pc = 0x4BB0FCu;
    SET_GPR_U32(ctx, 31, 0x4BB104u);
    ctx->pc = 0x4BB100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB0FCu;
    // 0x4bb100: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x4BB0FCu, 0x4BB104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB104u;
label_4bb104:
    // 0x4bb104: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4BB104u;
    {
        const bool branch_taken_0x4bb104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB104u;
        // 0x4bb108: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb104) {
            ctx->pc = 0x4BB128u;
            goto label_4bb128;
        }
    }
    ctx->pc = 0x4BB10Cu;
label_4bb10c:
    // 0x4bb10c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4bb10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4bb110: 0x54820293  bnel        $a0, $v0, . + 4 + (0x293 << 2)
    ctx->pc = 0x4BB110u;
    {
        const bool branch_taken_0x4bb110 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4bb110) {
            ctx->pc = 0x4BB114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BB110u;
            // 0x4bb114: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BBB60u;
            goto label_4bbb60;
        }
    }
    ctx->pc = 0x4BB118u;
    // 0x4bb118: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4bb118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb11c: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB11Cu;
    SET_GPR_U32(ctx, 31, 0x4BB124u);
    ctx->pc = 0x4BB120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB11Cu;
    // 0x4bb120: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB11Cu, 0x4BB124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB124u;
label_4bb124:
    // 0x4bb124: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4bb124u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4bb128:
    // 0x4bb128: 0x1000028d  b           . + 4 + (0x28D << 2)
    ctx->pc = 0x4BB128u;
    {
        const bool branch_taken_0x4bb128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB128u;
        // 0x4bb12c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb128) {
            ctx->pc = 0x4BBB60u;
            goto label_4bbb60;
        }
    }
    ctx->pc = 0x4BB130u;
label_4bb130:
    // 0x4bb130: 0x16b7c2  srl         $s6, $s6, 31
    ctx->pc = 0x4bb130u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 22), 31));
label_4bb134:
    // 0x4bb134: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x4bb134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bb138: 0x26c2ffff  addiu       $v0, $s6, -0x1
    ctx->pc = 0x4bb138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x4bb13c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4bb13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4bb140: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4BB140u;
    {
        const bool branch_taken_0x4bb140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BB144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB140u;
        // 0x4bb144: 0xafb60020  sw          $s6, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb140) {
            ctx->pc = 0x4BB168u;
            goto label_4bb168;
        }
    }
    ctx->pc = 0x4BB148u;
    // 0x4bb148: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4bb148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb14c: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB14Cu;
    SET_GPR_U32(ctx, 31, 0x4BB154u);
    ctx->pc = 0x4BB150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB14Cu;
    // 0x4bb150: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB14Cu, 0x4BB154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB154u;
label_4bb154:
    // 0x4bb154: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bb154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb158: 0xc10b000  jal         func_42C000
    ctx->pc = 0x4BB158u;
    SET_GPR_U32(ctx, 31, 0x4BB160u);
    ctx->pc = 0x4BB15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB158u;
    // 0x4bb15c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x4BB158u, 0x4BB160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB160u;
label_4bb160:
    // 0x4bb160: 0x10000280  b           . + 4 + (0x280 << 2)
    ctx->pc = 0x4BB160u;
    {
        const bool branch_taken_0x4bb160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB160u;
        // 0x4bb164: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb160) {
            ctx->pc = 0x4BBB64u;
            goto label_4bbb64;
        }
    }
    ctx->pc = 0x4BB168u;
label_4bb168:
    // 0x4bb168: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x4bb168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
    // 0x4bb16c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4bb16cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4bb170: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x4BB170u;
    {
        const bool branch_taken_0x4bb170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB170u;
        // 0x4bb174: 0x3c0243f0  lui         $v0, 0x43F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb170) {
            ctx->pc = 0x4BB2D8u;
            goto label_4bb2d8;
        }
    }
    ctx->pc = 0x4BB178u;
    // 0x4bb178: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4bb178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4bb17c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4BB17Cu;
    {
        const bool branch_taken_0x4bb17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB17Cu;
        // 0x4bb180: 0x3c023fef  lui         $v0, 0x3FEF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16367 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb17c) {
            ctx->pc = 0x4BB1B8u;
            goto label_4bb1b8;
        }
    }
    ctx->pc = 0x4BB184u;
    // 0x4bb184: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bb184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bb188: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x4bb188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x4bb18c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BB18Cu;
    {
        const bool branch_taken_0x4bb18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bb18c) {
            ctx->pc = 0x4BB1A8u;
            goto label_4bb1a8;
        }
    }
    ctx->pc = 0x4BB194u;
    // 0x4bb194: 0x6830272  bgezl       $s4, . + 4 + (0x272 << 2)
    ctx->pc = 0x4BB194u;
    {
        const bool branch_taken_0x4bb194 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x4bb194) {
            ctx->pc = 0x4BB198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BB194u;
            // 0x4bb198: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BBB60u;
            goto label_4bbb60;
        }
    }
    ctx->pc = 0x4BB19Cu;
    // 0x4bb19c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4bb19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4bb1a0:
    // 0x4bb1a0: 0x1000026f  b           . + 4 + (0x26F << 2)
    ctx->pc = 0x4BB1A0u;
    {
        const bool branch_taken_0x4bb1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB1A0u;
        // 0x4bb1a4: 0xdc421320  ld          $v0, 0x1320($v0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb1a0) {
            ctx->pc = 0x4BBB60u;
            goto label_4bbb60;
        }
    }
    ctx->pc = 0x4BB1A8u;
label_4bb1a8:
    // 0x4bb1a8: 0x1e80fffd  bgtz        $s4, . + 4 + (-0x3 << 2)
    ctx->pc = 0x4BB1A8u;
    {
        const bool branch_taken_0x4bb1a8 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x4BB1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB1A8u;
        // 0x4bb1ac: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb1a8) {
            ctx->pc = 0x4BB1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bb1a0;
        }
    }
    ctx->pc = 0x4BB1B0u;
    // 0x4bb1b0: 0x1000026b  b           . + 4 + (0x26B << 2)
    ctx->pc = 0x4BB1B0u;
    {
        const bool branch_taken_0x4bb1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB1B0u;
        // 0x4bb1b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb1b0) {
            ctx->pc = 0x4BBB60u;
            goto label_4bbb60;
        }
    }
    ctx->pc = 0x4BB1B8u;
label_4bb1b8:
    // 0x4bb1b8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x4bb1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x4bb1bc: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x4bb1bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x4bb1c0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BB1C0u;
    {
        const bool branch_taken_0x4bb1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bb1c0) {
            ctx->pc = 0x4BB1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BB1C0u;
            // 0x4bb1c4: 0x3c023ff0  lui         $v0, 0x3FF0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BB1D8u;
            goto label_4bb1d8;
        }
    }
    ctx->pc = 0x4BB1C8u;
    // 0x4bb1c8: 0x680fff5  bltz        $s4, . + 4 + (-0xB << 2)
    ctx->pc = 0x4BB1C8u;
    {
        const bool branch_taken_0x4bb1c8 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x4BB1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB1C8u;
        // 0x4bb1cc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb1c8) {
            ctx->pc = 0x4BB1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bb1a0;
        }
    }
    ctx->pc = 0x4BB1D0u;
    // 0x4bb1d0: 0x10000263  b           . + 4 + (0x263 << 2)
    ctx->pc = 0x4BB1D0u;
    {
        const bool branch_taken_0x4bb1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB1D0u;
        // 0x4bb1d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb1d0) {
            ctx->pc = 0x4BBB60u;
            goto label_4bbb60;
        }
    }
    ctx->pc = 0x4BB1D8u;
label_4bb1d8:
    // 0x4bb1d8: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x4bb1d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x4bb1dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BB1DCu;
    {
        const bool branch_taken_0x4bb1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bb1dc) {
            ctx->pc = 0x4BB1F4u;
            goto label_4bb1f4;
        }
    }
    ctx->pc = 0x4BB1E4u;
    // 0x4bb1e4: 0x1e80ffee  bgtz        $s4, . + 4 + (-0x12 << 2)
    ctx->pc = 0x4BB1E4u;
    {
        const bool branch_taken_0x4bb1e4 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x4BB1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB1E4u;
        // 0x4bb1e8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb1e4) {
            ctx->pc = 0x4BB1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bb1a0;
        }
    }
    ctx->pc = 0x4BB1ECu;
    // 0x4bb1ec: 0x1000025c  b           . + 4 + (0x25C << 2)
    ctx->pc = 0x4BB1ECu;
    {
        const bool branch_taken_0x4bb1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB1ECu;
        // 0x4bb1f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb1ec) {
            ctx->pc = 0x4BBB60u;
            goto label_4bbb60;
        }
    }
    ctx->pc = 0x4BB1F4u;
label_4bb1f4:
    // 0x4bb1f4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x4bb1f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4bb1f8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x4bb1f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x4bb1fc: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB1FCu;
    SET_GPR_U32(ctx, 31, 0x4BB204u);
    ctx->pc = 0x4BB200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB1FCu;
    // 0x4bb200: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB1FCu, 0x4BB204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB204u;
label_4bb204:
    // 0x4bb204: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4bb204u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb208: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4bb208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb20c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB20Cu;
    SET_GPR_U32(ctx, 31, 0x4BB214u);
    ctx->pc = 0x4BB210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB20Cu;
    // 0x4bb210: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB20Cu, 0x4BB214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB214u;
label_4bb214:
    // 0x4bb214: 0x3405ff40  ori         $a1, $zero, 0xFF40
    ctx->pc = 0x4bb214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65344);
    // 0x4bb218: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x4bb218u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x4bb21c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4bb21cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb220: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB220u;
    SET_GPR_U32(ctx, 31, 0x4BB228u);
    ctx->pc = 0x4BB224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB220u;
    // 0x4bb224: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB220u, 0x4BB228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB228u;
label_4bb228:
    // 0x4bb228: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bb228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bb22c: 0xdc241338  ld          $a0, 0x1338($at)
    ctx->pc = 0x4bb22cu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x591338u));
    // 0x4bb230: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB230u;
    SET_GPR_U32(ctx, 31, 0x4BB238u);
    ctx->pc = 0x4BB234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB230u;
    // 0x4bb234: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB230u, 0x4BB238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB238u;
label_4bb238:
    // 0x4bb238: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4bb238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb23c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB23Cu;
    SET_GPR_U32(ctx, 31, 0x4BB244u);
    ctx->pc = 0x4BB240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB23Cu;
    // 0x4bb240: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB23Cu, 0x4BB244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB244u;
label_4bb244:
    // 0x4bb244: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x4bb244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x4bb248: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x4bb248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x4bb24c: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB24Cu;
    SET_GPR_U32(ctx, 31, 0x4BB254u);
    ctx->pc = 0x4BB250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB24Cu;
    // 0x4bb250: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB24Cu, 0x4BB254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB254u;
label_4bb254:
    // 0x4bb254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bb254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb258: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB258u;
    SET_GPR_U32(ctx, 31, 0x4BB260u);
    ctx->pc = 0x4BB25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB258u;
    // 0x4bb25c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB258u, 0x4BB260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB260u;
label_4bb260:
    // 0x4bb260: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bb260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bb264: 0xdc251340  ld          $a1, 0x1340($at)
    ctx->pc = 0x4bb264u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591340u));
    // 0x4bb268: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4bb268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb26c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB26Cu;
    SET_GPR_U32(ctx, 31, 0x4BB274u);
    ctx->pc = 0x4BB270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB26Cu;
    // 0x4bb270: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB26Cu, 0x4BB274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB274u;
label_4bb274:
    // 0x4bb274: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bb274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bb278: 0xdc251348  ld          $a1, 0x1348($at)
    ctx->pc = 0x4bb278u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591348u));
    // 0x4bb27c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4bb27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb280: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB280u;
    SET_GPR_U32(ctx, 31, 0x4BB288u);
    ctx->pc = 0x4BB284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB280u;
    // 0x4bb284: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB280u, 0x4BB288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB288u;
label_4bb288:
    // 0x4bb288: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bb288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bb28c: 0xdc251350  ld          $a1, 0x1350($at)
    ctx->pc = 0x4bb28cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591350u));
    // 0x4bb290: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4bb290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb294: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB294u;
    SET_GPR_U32(ctx, 31, 0x4BB29Cu);
    ctx->pc = 0x4BB298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB294u;
    // 0x4bb298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB294u, 0x4BB29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB29Cu;
label_4bb29c:
    // 0x4bb29c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bb29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb2a0: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB2A0u;
    SET_GPR_U32(ctx, 31, 0x4BB2A8u);
    ctx->pc = 0x4BB2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB2A0u;
    // 0x4bb2a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB2A0u, 0x4BB2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB2A8u;
label_4bb2a8:
    // 0x4bb2a8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4bb2a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb2ac: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x4bb2acu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bb2b0: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BB2B0u;
    SET_GPR_U32(ctx, 31, 0x4BB2B8u);
    ctx->pc = 0x4BB2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB2B0u;
    // 0x4bb2b4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BB2B0u, 0x4BB2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB2B8u;
label_4bb2b8:
    // 0x4bb2b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4bb2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4bb2bc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4bb2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4bb2c0: 0x43a024  and         $s4, $v0, $v1
    ctx->pc = 0x4bb2c0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4bb2c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4bb2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb2c8: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB2C8u;
    SET_GPR_U32(ctx, 31, 0x4BB2D0u);
    ctx->pc = 0x4BB2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB2C8u;
    // 0x4bb2cc: 0xdfa50010  ld          $a1, 0x10($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB2C8u, 0x4BB2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB2D0u;
label_4bb2d0:
    // 0x4bb2d0: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x4BB2D0u;
    {
        const bool branch_taken_0x4bb2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB2D0u;
        // 0x4bb2d4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb2d0) {
            ctx->pc = 0x4BB6E8u;
            goto label_4bb6e8;
        }
    }
    ctx->pc = 0x4BB2D8u;
label_4bb2d8:
    // 0x4bb2d8: 0x3c10000f  lui         $s0, 0xF
    ctx->pc = 0x4bb2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)15 << 16));
    // 0x4bb2dc: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x4bb2dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4bb2e0: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x4bb2e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x4bb2e4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4BB2E4u;
    {
        const bool branch_taken_0x4bb2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BB2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB2E4u;
        // 0x4bb2e8: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb2e4) {
            ctx->pc = 0x4BB310u;
            goto label_4bb310;
        }
    }
    ctx->pc = 0x4BB2ECu;
    // 0x4bb2ec: 0x2402ffcb  addiu       $v0, $zero, -0x35
    ctx->pc = 0x4bb2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967243));
    // 0x4bb2f0: 0x34058680  ori         $a1, $zero, 0x8680
    ctx->pc = 0x4bb2f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34432);
    // 0x4bb2f4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x4bb2f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x4bb2f8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4bb2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb2fc: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB2FCu;
    SET_GPR_U32(ctx, 31, 0x4BB304u);
    ctx->pc = 0x4BB300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB2FCu;
    // 0x4bb300: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB2FCu, 0x4BB304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB304u;
label_4bb304:
    // 0x4bb304: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x4bb304u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb308: 0x2a83f  dsra32      $s5, $v0, 0
    ctx->pc = 0x4bb308u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4bb30c: 0x0  nop
    ctx->pc = 0x4bb30cu;
    // NOP
label_4bb310:
    // 0x4bb310: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x4bb310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x4bb314: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4bb314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x4bb318: 0x2b08824  and         $s1, $s5, $s0
    ctx->pc = 0x4bb318u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) & GPR_U64(ctx, 16));
    // 0x4bb31c: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x4bb31cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x4bb320: 0x2465fc01  addiu       $a1, $v1, -0x3FF
    ctx->pc = 0x4bb320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966273));
    // 0x4bb324: 0x3442988e  ori         $v0, $v0, 0x988E
    ctx->pc = 0x4bb324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39054);
    // 0x4bb328: 0x151d03  sra         $v1, $s5, 20
    ctx->pc = 0x4bb328u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 21), 20));
    // 0x4bb32c: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x4bb32cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x4bb330: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4bb330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4bb334: 0x224a825  or          $s5, $s1, $a0
    ctx->pc = 0x4bb334u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x4bb338: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BB338u;
    {
        const bool branch_taken_0x4bb338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BB33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB338u;
        // 0x4bb33c: 0xafa5001c  sw          $a1, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb338) {
            ctx->pc = 0x4BB348u;
            goto label_4bb348;
        }
    }
    ctx->pc = 0x4BB340u;
    // 0x4bb340: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4BB340u;
    {
        const bool branch_taken_0x4bb340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB340u;
        // 0x4bb344: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb340) {
            ctx->pc = 0x4BB374u;
            goto label_4bb374;
        }
    }
    ctx->pc = 0x4BB348u;
label_4bb348:
    // 0x4bb348: 0x3c02000b  lui         $v0, 0xB
    ctx->pc = 0x4bb348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
    // 0x4bb34c: 0x3442b679  ori         $v0, $v0, 0xB679
    ctx->pc = 0x4bb34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46713);
    // 0x4bb350: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x4bb350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x4bb354: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BB354u;
    {
        const bool branch_taken_0x4bb354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB354u;
        // 0x4bb358: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb354) {
            ctx->pc = 0x4BB374u;
            goto label_4bb374;
        }
    }
    ctx->pc = 0x4BB35Cu;
    // 0x4bb35c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x4bb35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x4bb360: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x4bb360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x4bb364: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4bb364u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb368: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x4bb368u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x4bb36c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4bb36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4bb370: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x4bb370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_4bb374:
    // 0x4bb374: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4bb374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb378: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4bb378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4bb37c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4bb37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4bb380: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4bb380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4bb384: 0x15183c  dsll32      $v1, $s5, 0
    ctx->pc = 0x4bb384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
    // 0x4bb388: 0x83f025  or          $fp, $a0, $v1
    ctx->pc = 0x4bb388u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4bb38c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4bb38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4bb390: 0x24421218  addiu       $v0, $v0, 0x1218
    ctx->pc = 0x4bb390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4632));
    // 0x4bb394: 0x13a0c0  sll         $s4, $s3, 3
    ctx->pc = 0x4bb394u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x4bb398: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4bb398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x4bb39c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4bb39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb3a0: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x4bb3a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4bb3a4: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB3A4u;
    SET_GPR_U32(ctx, 31, 0x4BB3ACu);
    ctx->pc = 0x4BB3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB3A4u;
    // 0x4bb3a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB3A4u, 0x4BB3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB3ACu;
label_4bb3ac:
    // 0x4bb3ac: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x4bb3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x4bb3b0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4bb3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb3b4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BB3B4u;
    SET_GPR_U32(ctx, 31, 0x4BB3BCu);
    ctx->pc = 0x4BB3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB3B4u;
    // 0x4bb3b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BB3B4u, 0x4BB3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB3BCu;
label_4bb3bc:
    // 0x4bb3bc: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x4bb3bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4bb3c0: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x4bb3c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x4bb3c4: 0xc10b000  jal         func_42C000
    ctx->pc = 0x4BB3C4u;
    SET_GPR_U32(ctx, 31, 0x4BB3CCu);
    ctx->pc = 0x4BB3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB3C4u;
    // 0x4bb3c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x4BB3C4u, 0x4BB3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB3CCu;
label_4bb3cc:
    // 0x4bb3cc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4bb3ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb3d0: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x4bb3d0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bb3d4: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB3D4u;
    SET_GPR_U32(ctx, 31, 0x4BB3DCu);
    ctx->pc = 0x4BB3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB3D4u;
    // 0x4bb3d8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB3D4u, 0x4BB3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB3DCu;
label_4bb3dc:
    // 0x4bb3dc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x4bb3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x4bb3e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4bb3e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb3e4: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x4bb3e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4bb3e8: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x4bb3e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x4bb3ec: 0x728824  and         $s1, $v1, $s2
    ctx->pc = 0x4bb3ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4bb3f0: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x4bb3f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x4bb3f4: 0x131c80  sll         $v1, $s3, 18
    ctx->pc = 0x4bb3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 18));
    // 0x4bb3f8: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x4bb3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x4bb3fc: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x4bb3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x4bb400: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4bb400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4bb404: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4bb404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4bb408: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4bb408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4bb40c: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x4bb40cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4bb410: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4bb410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb414: 0x34158010  ori         $s5, $zero, 0x8010
    ctx->pc = 0x4bb414u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x4bb418: 0x15abfc  dsll32      $s5, $s5, 15
    ctx->pc = 0x4bb418u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 15));
    // 0x4bb41c: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB41Cu;
    SET_GPR_U32(ctx, 31, 0x4BB424u);
    ctx->pc = 0x4BB420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB41Cu;
    // 0x4bb420: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB41Cu, 0x4BB424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB424u;
label_4bb424:
    // 0x4bb424: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4bb424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb428: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB428u;
    SET_GPR_U32(ctx, 31, 0x4BB430u);
    ctx->pc = 0x4BB42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB428u;
    // 0x4bb42c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB428u, 0x4BB430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB430u;
label_4bb430:
    // 0x4bb430: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x4bb430u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb434: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4bb434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb438: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB438u;
    SET_GPR_U32(ctx, 31, 0x4BB440u);
    ctx->pc = 0x4BB43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB438u;
    // 0x4bb43c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB438u, 0x4BB440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB440u;
label_4bb440:
    // 0x4bb440: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x4bb440u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bb444: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB444u;
    SET_GPR_U32(ctx, 31, 0x4BB44Cu);
    ctx->pc = 0x4BB448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB444u;
    // 0x4bb448: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB444u, 0x4BB44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB44Cu;
label_4bb44c:
    // 0x4bb44c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4bb44cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb450: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4bb450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb454: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB454u;
    SET_GPR_U32(ctx, 31, 0x4BB45Cu);
    ctx->pc = 0x4BB458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB454u;
    // 0x4bb458: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB454u, 0x4BB45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB45Cu;
label_4bb45c:
    // 0x4bb45c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bb45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb460: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB460u;
    SET_GPR_U32(ctx, 31, 0x4BB468u);
    ctx->pc = 0x4BB464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB460u;
    // 0x4bb464: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB460u, 0x4BB468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB468u;
label_4bb468:
    // 0x4bb468: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4bb468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb46c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB46Cu;
    SET_GPR_U32(ctx, 31, 0x4BB474u);
    ctx->pc = 0x4BB470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB46Cu;
    // 0x4bb470: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB46Cu, 0x4BB474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB474u;
label_4bb474:
    // 0x4bb474: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x4bb474u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bb478: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4bb478u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb47c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB47Cu;
    SET_GPR_U32(ctx, 31, 0x4BB484u);
    ctx->pc = 0x4BB480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB47Cu;
    // 0x4bb480: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB47Cu, 0x4BB484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB484u;
label_4bb484:
    // 0x4bb484: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4bb484u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb488: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4bb488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb48c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB48Cu;
    SET_GPR_U32(ctx, 31, 0x4BB494u);
    ctx->pc = 0x4BB490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB48Cu;
    // 0x4bb490: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB48Cu, 0x4BB494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB494u;
label_4bb494:
    // 0x4bb494: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bb494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bb498: 0xdc251358  ld          $a1, 0x1358($at)
    ctx->pc = 0x4bb498u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591358u));
    // 0x4bb49c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4bb49cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb4a0: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB4A0u;
    SET_GPR_U32(ctx, 31, 0x4BB4A8u);
    ctx->pc = 0x4BB4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB4A0u;
    // 0x4bb4a4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB4A0u, 0x4BB4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB4A8u;
label_4bb4a8:
    // 0x4bb4a8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bb4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bb4ac: 0xdc251360  ld          $a1, 0x1360($at)
    ctx->pc = 0x4bb4acu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591360u));
    // 0x4bb4b0: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BB4B0u;
    SET_GPR_U32(ctx, 31, 0x4BB4B8u);
    ctx->pc = 0x4BB4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB4B0u;
    // 0x4bb4b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BB4B0u, 0x4BB4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB4B8u;
label_4bb4b8:
    // 0x4bb4b8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4bb4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb4bc: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB4BCu;
    SET_GPR_U32(ctx, 31, 0x4BB4C4u);
    ctx->pc = 0x4BB4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB4BCu;
    // 0x4bb4c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB4BCu, 0x4BB4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB4C4u;
label_4bb4c4:
    // 0x4bb4c4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bb4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bb4c8: 0xdc251368  ld          $a1, 0x1368($at)
    ctx->pc = 0x4bb4c8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591368u));
    // 0x4bb4cc: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BB4CCu;
    SET_GPR_U32(ctx, 31, 0x4BB4D4u);
    ctx->pc = 0x4BB4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB4CCu;
    // 0x4bb4d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BB4CCu, 0x4BB4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB4D4u;
label_4bb4d4:
    // 0x4bb4d4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4bb4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb4d8: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB4D8u;
    SET_GPR_U32(ctx, 31, 0x4BB4E0u);
    ctx->pc = 0x4BB4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB4D8u;
    // 0x4bb4dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB4D8u, 0x4BB4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB4E0u;
label_4bb4e0:
    // 0x4bb4e0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bb4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bb4e4: 0xdc251370  ld          $a1, 0x1370($at)
    ctx->pc = 0x4bb4e4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591370u));
    // 0x4bb4e8: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BB4E8u;
    SET_GPR_U32(ctx, 31, 0x4BB4F0u);
    ctx->pc = 0x4BB4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB4E8u;
    // 0x4bb4ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BB4E8u, 0x4BB4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB4F0u;
label_4bb4f0:
    // 0x4bb4f0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4bb4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb4f4: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB4F4u;
    SET_GPR_U32(ctx, 31, 0x4BB4FCu);
    ctx->pc = 0x4BB4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB4F4u;
    // 0x4bb4f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB4F4u, 0x4BB4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB4FCu;
label_4bb4fc:
    // 0x4bb4fc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bb4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bb500: 0xdc251378  ld          $a1, 0x1378($at)
    ctx->pc = 0x4bb500u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591378u));
    // 0x4bb504: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BB504u;
    SET_GPR_U32(ctx, 31, 0x4BB50Cu);
    ctx->pc = 0x4BB508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB504u;
    // 0x4bb508: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BB504u, 0x4BB50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB50Cu;
label_4bb50c:
    // 0x4bb50c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4bb50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb510: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB510u;
    SET_GPR_U32(ctx, 31, 0x4BB518u);
    ctx->pc = 0x4BB514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB510u;
    // 0x4bb514: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB510u, 0x4BB518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB518u;
label_4bb518:
    // 0x4bb518: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bb518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bb51c: 0xdc251380  ld          $a1, 0x1380($at)
    ctx->pc = 0x4bb51cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591380u));
    // 0x4bb520: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BB520u;
    SET_GPR_U32(ctx, 31, 0x4BB528u);
    ctx->pc = 0x4BB524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB520u;
    // 0x4bb524: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BB520u, 0x4BB528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB528u;
label_4bb528:
    // 0x4bb528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bb528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb52c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB52Cu;
    SET_GPR_U32(ctx, 31, 0x4BB534u);
    ctx->pc = 0x4BB530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB52Cu;
    // 0x4bb530: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB52Cu, 0x4BB534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB534u;
label_4bb534:
    // 0x4bb534: 0xdfa50008  ld          $a1, 0x8($sp)
    ctx->pc = 0x4bb534u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bb538: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4bb538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb53c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BB53Cu;
    SET_GPR_U32(ctx, 31, 0x4BB544u);
    ctx->pc = 0x4BB540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB53Cu;
    // 0x4bb540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BB53Cu, 0x4BB544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB544u;
label_4bb544:
    // 0x4bb544: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4bb544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb548: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB548u;
    SET_GPR_U32(ctx, 31, 0x4BB550u);
    ctx->pc = 0x4BB54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB548u;
    // 0x4bb54c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB548u, 0x4BB550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB550u;
label_4bb550:
    // 0x4bb550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bb550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb554: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BB554u;
    SET_GPR_U32(ctx, 31, 0x4BB55Cu);
    ctx->pc = 0x4BB558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB554u;
    // 0x4bb558: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BB554u, 0x4BB55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB55Cu;
label_4bb55c:
    // 0x4bb55c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4bb55cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bb560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb564: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB564u;
    SET_GPR_U32(ctx, 31, 0x4BB56Cu);
    ctx->pc = 0x4BB568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB564u;
    // 0x4bb568: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB564u, 0x4BB56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB56Cu;
label_4bb56c:
    // 0x4bb56c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4bb56cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb570: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4bb570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb574: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BB574u;
    SET_GPR_U32(ctx, 31, 0x4BB57Cu);
    ctx->pc = 0x4BB578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB574u;
    // 0x4bb578: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BB574u, 0x4BB57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB57Cu;
label_4bb57c:
    // 0x4bb57c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4bb57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb580: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BB580u;
    SET_GPR_U32(ctx, 31, 0x4BB588u);
    ctx->pc = 0x4BB584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB580u;
    // 0x4bb584: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BB580u, 0x4BB588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB588u;
label_4bb588:
    // 0x4bb588: 0x52b024  and         $s6, $v0, $s2
    ctx->pc = 0x4bb588u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4bb58c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4bb58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb590: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB590u;
    SET_GPR_U32(ctx, 31, 0x4BB598u);
    ctx->pc = 0x4BB594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB590u;
    // 0x4bb594: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB590u, 0x4BB598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB598u;
label_4bb598:
    // 0x4bb598: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4bb598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb59c: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB59Cu;
    SET_GPR_U32(ctx, 31, 0x4BB5A4u);
    ctx->pc = 0x4BB5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB59Cu;
    // 0x4bb5a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB59Cu, 0x4BB5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB5A4u;
label_4bb5a4:
    // 0x4bb5a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bb5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb5a8: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB5A8u;
    SET_GPR_U32(ctx, 31, 0x4BB5B0u);
    ctx->pc = 0x4BB5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB5A8u;
    // 0x4bb5ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB5A8u, 0x4BB5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB5B0u;
label_4bb5b0:
    // 0x4bb5b0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x4bb5b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb5b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bb5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb5b8: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB5B8u;
    SET_GPR_U32(ctx, 31, 0x4BB5C0u);
    ctx->pc = 0x4BB5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB5B8u;
    // 0x4bb5bc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB5B8u, 0x4BB5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB5C0u;
label_4bb5c0:
    // 0x4bb5c0: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x4bb5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x4bb5c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4bb5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb5c8: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB5C8u;
    SET_GPR_U32(ctx, 31, 0x4BB5D0u);
    ctx->pc = 0x4BB5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB5C8u;
    // 0x4bb5cc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB5C8u, 0x4BB5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB5D0u;
label_4bb5d0:
    // 0x4bb5d0: 0xdfa50008  ld          $a1, 0x8($sp)
    ctx->pc = 0x4bb5d0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bb5d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4bb5d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb5d8: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB5D8u;
    SET_GPR_U32(ctx, 31, 0x4BB5E0u);
    ctx->pc = 0x4BB5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB5D8u;
    // 0x4bb5dc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB5D8u, 0x4BB5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB5E0u;
label_4bb5e0:
    // 0x4bb5e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bb5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb5e4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BB5E4u;
    SET_GPR_U32(ctx, 31, 0x4BB5ECu);
    ctx->pc = 0x4BB5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB5E4u;
    // 0x4bb5e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BB5E4u, 0x4BB5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB5ECu;
label_4bb5ec:
    // 0x4bb5ec: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4bb5ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb5f0: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x4bb5f0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bb5f4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BB5F4u;
    SET_GPR_U32(ctx, 31, 0x4BB5FCu);
    ctx->pc = 0x4BB5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB5F4u;
    // 0x4bb5f8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BB5F4u, 0x4BB5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB5FCu;
label_4bb5fc:
    // 0x4bb5fc: 0x52b024  and         $s6, $v0, $s2
    ctx->pc = 0x4bb5fcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4bb600: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4bb600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb604: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB604u;
    SET_GPR_U32(ctx, 31, 0x4BB60Cu);
    ctx->pc = 0x4BB608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB604u;
    // 0x4bb608: 0xdfa50010  ld          $a1, 0x10($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB604u, 0x4BB60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB60Cu;
label_4bb60c:
    // 0x4bb60c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4bb60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb610: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB610u;
    SET_GPR_U32(ctx, 31, 0x4BB618u);
    ctx->pc = 0x4BB614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB610u;
    // 0x4bb614: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB610u, 0x4BB618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB618u;
label_4bb618:
    // 0x4bb618: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bb618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bb61c: 0xdc251388  ld          $a1, 0x1388($at)
    ctx->pc = 0x4bb61cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591388u));
    // 0x4bb620: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4bb620u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb624: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB624u;
    SET_GPR_U32(ctx, 31, 0x4BB62Cu);
    ctx->pc = 0x4BB628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB624u;
    // 0x4bb628: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB624u, 0x4BB62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB62Cu;
label_4bb62c:
    // 0x4bb62c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bb62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bb630: 0xdc251390  ld          $a1, 0x1390($at)
    ctx->pc = 0x4bb630u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591390u));
    // 0x4bb634: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4bb634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb638: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB638u;
    SET_GPR_U32(ctx, 31, 0x4BB640u);
    ctx->pc = 0x4BB63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB638u;
    // 0x4bb63c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB638u, 0x4BB640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB640u;
label_4bb640:
    // 0x4bb640: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bb640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bb644: 0xdc251398  ld          $a1, 0x1398($at)
    ctx->pc = 0x4bb644u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591398u));
    // 0x4bb648: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4bb648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb64c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB64Cu;
    SET_GPR_U32(ctx, 31, 0x4BB654u);
    ctx->pc = 0x4BB650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB64Cu;
    // 0x4bb650: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB64Cu, 0x4BB654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB654u;
label_4bb654:
    // 0x4bb654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bb654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb658: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BB658u;
    SET_GPR_U32(ctx, 31, 0x4BB660u);
    ctx->pc = 0x4BB65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB658u;
    // 0x4bb65c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BB658u, 0x4BB660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB660u;
label_4bb660:
    // 0x4bb660: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4bb660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4bb664: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bb664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb668: 0x24631238  addiu       $v1, $v1, 0x1238
    ctx->pc = 0x4bb668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4664));
    // 0x4bb66c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x4bb66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x4bb670: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BB670u;
    SET_GPR_U32(ctx, 31, 0x4BB678u);
    ctx->pc = 0x4BB674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB670u;
    // 0x4bb674: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BB670u, 0x4BB678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB678u;
label_4bb678:
    // 0x4bb678: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x4bb678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x4bb67c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x4BB67Cu;
    SET_GPR_U32(ctx, 31, 0x4BB684u);
    ctx->pc = 0x4BB680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB67Cu;
    // 0x4bb680: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x4BB67Cu, 0x4BB684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB684u;
label_4bb684:
    // 0x4bb684: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4bb684u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb688: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4bb688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb68c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BB68Cu;
    SET_GPR_U32(ctx, 31, 0x4BB694u);
    ctx->pc = 0x4BB690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB68Cu;
    // 0x4bb690: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BB68Cu, 0x4BB694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB694u;
label_4bb694:
    // 0x4bb694: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4bb694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4bb698: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bb698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb69c: 0x24631228  addiu       $v1, $v1, 0x1228
    ctx->pc = 0x4bb69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4648));
    // 0x4bb6a0: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x4bb6a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x4bb6a4: 0xde900000  ld          $s0, 0x0($s4)
    ctx->pc = 0x4bb6a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4bb6a8: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BB6A8u;
    SET_GPR_U32(ctx, 31, 0x4BB6B0u);
    ctx->pc = 0x4BB6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB6A8u;
    // 0x4bb6ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BB6A8u, 0x4BB6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB6B0u;
label_4bb6b0:
    // 0x4bb6b0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4bb6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb6b4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BB6B4u;
    SET_GPR_U32(ctx, 31, 0x4BB6BCu);
    ctx->pc = 0x4BB6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB6B4u;
    // 0x4bb6b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BB6B4u, 0x4BB6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB6BCu;
label_4bb6bc:
    // 0x4bb6bc: 0x52a024  and         $s4, $v0, $s2
    ctx->pc = 0x4bb6bcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4bb6c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4bb6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb6c4: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB6C4u;
    SET_GPR_U32(ctx, 31, 0x4BB6CCu);
    ctx->pc = 0x4BB6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB6C4u;
    // 0x4bb6c8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB6C4u, 0x4BB6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB6CCu;
label_4bb6cc:
    // 0x4bb6cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bb6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb6d0: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB6D0u;
    SET_GPR_U32(ctx, 31, 0x4BB6D8u);
    ctx->pc = 0x4BB6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB6D0u;
    // 0x4bb6d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB6D0u, 0x4BB6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB6D8u;
label_4bb6d8:
    // 0x4bb6d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bb6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb6dc: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB6DCu;
    SET_GPR_U32(ctx, 31, 0x4BB6E4u);
    ctx->pc = 0x4BB6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB6DCu;
    // 0x4bb6e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB6DCu, 0x4BB6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB6E4u;
label_4bb6e4:
    // 0x4bb6e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bb6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bb6e8:
    // 0x4bb6e8: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB6E8u;
    SET_GPR_U32(ctx, 31, 0x4BB6F0u);
    ctx->pc = 0x4BB6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB6E8u;
    // 0x4bb6ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB6E8u, 0x4BB6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB6F0u;
label_4bb6f0:
    // 0x4bb6f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4bb6f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb6f4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x4bb6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bb6f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x4bb6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bb6fc: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x4bb6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4bb700: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x4bb700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4bb704: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x4bb704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x4bb708: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x4bb708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4bb70c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4bb70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4bb710: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BB710u;
    {
        const bool branch_taken_0x4bb710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BB714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB710u;
        // 0x4bb714: 0xffa50008  sd          $a1, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb710) {
            ctx->pc = 0x4BB724u;
            goto label_4bb724;
        }
    }
    ctx->pc = 0x4BB718u;
    // 0x4bb718: 0x3402bff0  ori         $v0, $zero, 0xBFF0
    ctx->pc = 0x4bb718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x4bb71c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4bb71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x4bb720: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x4bb720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_4bb724:
    // 0x4bb724: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x4bb724u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bb728: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4bb728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4bb72c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4bb72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4bb730: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x4bb730u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bb734: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4bb734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb738: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB738u;
    SET_GPR_U32(ctx, 31, 0x4BB740u);
    ctx->pc = 0x4BB73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB738u;
    // 0x4bb73c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB738u, 0x4BB740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB740u;
label_4bb740:
    // 0x4bb740: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4bb740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb744: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB744u;
    SET_GPR_U32(ctx, 31, 0x4BB74Cu);
    ctx->pc = 0x4BB748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB744u;
    // 0x4bb748: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB744u, 0x4BB74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB74Cu;
label_4bb74c:
    // 0x4bb74c: 0xdfa40000  ld          $a0, 0x0($sp)
    ctx->pc = 0x4bb74cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bb750: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4bb750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb754: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB754u;
    SET_GPR_U32(ctx, 31, 0x4BB75Cu);
    ctx->pc = 0x4BB758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB754u;
    // 0x4bb758: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB754u, 0x4BB75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB75Cu;
label_4bb75c:
    // 0x4bb75c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bb75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb760: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BB760u;
    SET_GPR_U32(ctx, 31, 0x4BB768u);
    ctx->pc = 0x4BB764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB760u;
    // 0x4bb764: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BB760u, 0x4BB768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB768u;
label_4bb768:
    // 0x4bb768: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4bb768u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb76c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bb76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb770: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB770u;
    SET_GPR_U32(ctx, 31, 0x4BB778u);
    ctx->pc = 0x4BB774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB770u;
    // 0x4bb774: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB770u, 0x4BB778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB778u;
label_4bb778:
    // 0x4bb778: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4bb778u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb77c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4bb77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb780: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BB780u;
    SET_GPR_U32(ctx, 31, 0x4BB788u);
    ctx->pc = 0x4BB784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB780u;
    // 0x4bb784: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BB780u, 0x4BB788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB788u;
label_4bb788:
    // 0x4bb788: 0x2883f  dsra32      $s1, $v0, 0
    ctx->pc = 0x4bb788u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4bb78c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x4bb78cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4bb790: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x4bb790u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x4bb794: 0x3c03408f  lui         $v1, 0x408F
    ctx->pc = 0x4bb794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16527 << 16));
    // 0x4bb798: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb79c: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x4bb79cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x4bb7a0: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x4BB7A0u;
    {
        const bool branch_taken_0x4bb7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB7A0u;
        // 0x4bb7a4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb7a0) {
            ctx->pc = 0x4BB828u;
            goto label_4bb828;
        }
    }
    ctx->pc = 0x4BB7A8u;
    // 0x4bb7a8: 0x3c02bf70  lui         $v0, 0xBF70
    ctx->pc = 0x4bb7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49008 << 16));
    // 0x4bb7ac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4bb7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4bb7b0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4bb7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4bb7b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4BB7B4u;
    {
        const bool branch_taken_0x4bb7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB7B4u;
        // 0x4bb7b8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb7b4) {
            ctx->pc = 0x4BB7D8u;
            goto label_4bb7d8;
        }
    }
    ctx->pc = 0x4BB7BCu;
    // 0x4bb7bc: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x4bb7bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bb7c0: 0xdc501328  ld          $s0, 0x1328($v0)
    ctx->pc = 0x4bb7c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4904)));
    // 0x4bb7c4: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB7C4u;
    SET_GPR_U32(ctx, 31, 0x4BB7CCu);
    ctx->pc = 0x4BB7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB7C4u;
    // 0x4bb7c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB7C4u, 0x4BB7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB7CCu;
label_4bb7cc:
    // 0x4bb7cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bb7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb7d0: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x4BB7D0u;
    {
        const bool branch_taken_0x4bb7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB7D0u;
        // 0x4bb7d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb7d0) {
            ctx->pc = 0x4BBB58u;
            goto label_4bbb58;
        }
    }
    ctx->pc = 0x4BB7D8u;
label_4bb7d8:
    // 0x4bb7d8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bb7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bb7dc: 0xdc2513a0  ld          $a1, 0x13A0($at)
    ctx->pc = 0x4bb7dcu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5913A0u));
    // 0x4bb7e0: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BB7E0u;
    SET_GPR_U32(ctx, 31, 0x4BB7E8u);
    ctx->pc = 0x4BB7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB7E0u;
    // 0x4bb7e4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BB7E0u, 0x4BB7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB7E8u;
label_4bb7e8:
    // 0x4bb7e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4bb7e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb7ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4bb7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb7f0: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB7F0u;
    SET_GPR_U32(ctx, 31, 0x4BB7F8u);
    ctx->pc = 0x4BB7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB7F0u;
    // 0x4bb7f4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB7F0u, 0x4BB7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB7F8u;
label_4bb7f8:
    // 0x4bb7f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bb7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb7fc: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4BB7FCu;
    SET_GPR_U32(ctx, 31, 0x4BB804u);
    ctx->pc = 0x4BB800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB7FCu;
    // 0x4bb800: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4BB7FCu, 0x4BB804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB804u;
label_4bb804:
    // 0x4bb804: 0x1840002c  blez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x4BB804u;
    {
        const bool branch_taken_0x4bb804 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4BB808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB804u;
        // 0x4bb808: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb804) {
            ctx->pc = 0x4BB8B8u;
            goto label_4bb8b8;
        }
    }
    ctx->pc = 0x4BB80Cu;
    // 0x4bb80c: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x4bb80cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bb810: 0xdc501328  ld          $s0, 0x1328($v0)
    ctx->pc = 0x4bb810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4904)));
    // 0x4bb814: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB814u;
    SET_GPR_U32(ctx, 31, 0x4BB81Cu);
    ctx->pc = 0x4BB818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB814u;
    // 0x4bb818: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB814u, 0x4BB81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB81Cu;
label_4bb81c:
    // 0x4bb81c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bb81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb820: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x4BB820u;
    {
        const bool branch_taken_0x4bb820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB820u;
        // 0x4bb824: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb820) {
            ctx->pc = 0x4BBB58u;
            goto label_4bbb58;
        }
    }
    ctx->pc = 0x4BB828u;
label_4bb828:
    // 0x4bb828: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x4bb828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x4bb82c: 0x3c034090  lui         $v1, 0x4090
    ctx->pc = 0x4bb82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16528 << 16));
    // 0x4bb830: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bb830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bb834: 0x3463cbff  ori         $v1, $v1, 0xCBFF
    ctx->pc = 0x4bb834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52223);
    // 0x4bb838: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x4bb838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x4bb83c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x4bb83cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4bb840: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x4BB840u;
    {
        const bool branch_taken_0x4bb840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB840u;
        // 0x4bb844: 0x3c023f6f  lui         $v0, 0x3F6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16239 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb840) {
            ctx->pc = 0x4BB8B8u;
            goto label_4bb8b8;
        }
    }
    ctx->pc = 0x4BB848u;
    // 0x4bb848: 0x34423400  ori         $v0, $v0, 0x3400
    ctx->pc = 0x4bb848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13312);
    // 0x4bb84c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4bb84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4bb850: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4bb850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4bb854: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4BB854u;
    {
        const bool branch_taken_0x4bb854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB854u;
        // 0x4bb858: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb854) {
            ctx->pc = 0x4BB878u;
            goto label_4bb878;
        }
    }
    ctx->pc = 0x4BB85Cu;
    // 0x4bb85c: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x4bb85cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bb860: 0xdc501330  ld          $s0, 0x1330($v0)
    ctx->pc = 0x4bb860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4912)));
    // 0x4bb864: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB864u;
    SET_GPR_U32(ctx, 31, 0x4BB86Cu);
    ctx->pc = 0x4BB868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB864u;
    // 0x4bb868: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB864u, 0x4BB86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB86Cu;
label_4bb86c:
    // 0x4bb86c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bb86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb870: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x4BB870u;
    {
        const bool branch_taken_0x4bb870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB870u;
        // 0x4bb874: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb870) {
            ctx->pc = 0x4BBB58u;
            goto label_4bbb58;
        }
    }
    ctx->pc = 0x4BB878u;
label_4bb878:
    // 0x4bb878: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4bb878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb87c: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB87Cu;
    SET_GPR_U32(ctx, 31, 0x4BB884u);
    ctx->pc = 0x4BB880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB87Cu;
    // 0x4bb880: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB87Cu, 0x4BB884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB884u;
label_4bb884:
    // 0x4bb884: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4bb884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb888: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4BB888u;
    SET_GPR_U32(ctx, 31, 0x4BB890u);
    ctx->pc = 0x4BB88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB888u;
    // 0x4bb88c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4BB888u, 0x4BB890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB890u;
label_4bb890:
    // 0x4bb890: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4BB890u;
    {
        const bool branch_taken_0x4bb890 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x4BB894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB890u;
        // 0x4bb894: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb890) {
            ctx->pc = 0x4BB8BCu;
            goto label_4bb8bc;
        }
    }
    ctx->pc = 0x4BB898u;
    // 0x4bb898: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4bb898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4bb89c: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x4bb89cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bb8a0: 0xdc501330  ld          $s0, 0x1330($v0)
    ctx->pc = 0x4bb8a0u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x591330u));
    // 0x4bb8a4: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB8A4u;
    SET_GPR_U32(ctx, 31, 0x4BB8ACu);
    ctx->pc = 0x4BB8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB8A4u;
    // 0x4bb8a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB8A4u, 0x4BB8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB8ACu;
label_4bb8ac:
    // 0x4bb8ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bb8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb8b0: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x4BB8B0u;
    {
        const bool branch_taken_0x4bb8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB8B0u;
        // 0x4bb8b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb8b0) {
            ctx->pc = 0x4BBB58u;
            goto label_4bbb58;
        }
    }
    ctx->pc = 0x4BB8B8u;
label_4bb8b8:
    // 0x4bb8b8: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x4bb8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_4bb8bc:
    // 0x4bb8bc: 0x3c023fe0  lui         $v0, 0x3FE0
    ctx->pc = 0x4bb8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
    // 0x4bb8c0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4bb8c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4bb8c4: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x4bb8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x4bb8c8: 0x2262024  and         $a0, $s1, $a2
    ctx->pc = 0x4bb8c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 6));
    // 0x4bb8cc: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4bb8ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4bb8d0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x4BB8D0u;
    {
        const bool branch_taken_0x4bb8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BB8D0u;
        // 0x4bb8d4: 0x41d03  sra         $v1, $a0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb8d0) {
            ctx->pc = 0x4BB950u;
            goto label_4bb950;
        }
    }
    ctx->pc = 0x4BB8D8u;
    // 0x4bb8d8: 0x2463fc02  addiu       $v1, $v1, -0x3FE
    ctx->pc = 0x4bb8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966274));
    // 0x4bb8dc: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x4bb8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x4bb8e0: 0x641807  srav        $v1, $a0, $v1
    ctx->pc = 0x4bb8e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x4bb8e4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x4bb8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x4bb8e8: 0x661024  and         $v0, $v1, $a2
    ctx->pc = 0x4bb8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4bb8ec: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x4bb8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x4bb8f0: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x4bb8f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
    // 0x4bb8f4: 0x2453fc01  addiu       $s3, $v0, -0x3FF
    ctx->pc = 0x4bb8f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966273));
    // 0x4bb8f8: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x4bb8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x4bb8fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bb8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bb900: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x4bb900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x4bb904: 0x2631007  srav        $v0, $v1, $s3
    ctx->pc = 0x4bb904u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
    // 0x4bb908: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x4bb908u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x4bb90c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x4bb90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4bb910: 0x2a83c  dsll32      $s5, $v0, 0
    ctx->pc = 0x4bb910u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4bb914: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x4bb914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4bb918: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x4bb918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x4bb91c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4bb91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4bb920: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x4bb920u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x4bb924: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4bb924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4bb928: 0x431807  srav        $v1, $v1, $v0
    ctx->pc = 0x4bb928u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x4bb92c: 0xb1282a  slt         $a1, $a1, $s1
    ctx->pc = 0x4bb92cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x4bb930: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x4bb930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x4bb934: 0x31023  negu        $v0, $v1
    ctx->pc = 0x4bb934u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4bb938: 0x45180a  movz        $v1, $v0, $a1
    ctx->pc = 0x4bb938u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x4bb93c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4bb93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb940: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x4bb940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x4bb944: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB944u;
    SET_GPR_U32(ctx, 31, 0x4BB94Cu);
    ctx->pc = 0x4BB948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB944u;
    // 0x4bb948: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB944u, 0x4BB94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB94Cu;
label_4bb94c:
    // 0x4bb94c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4bb94cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4bb950:
    // 0x4bb950: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4bb950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb954: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BB954u;
    SET_GPR_U32(ctx, 31, 0x4BB95Cu);
    ctx->pc = 0x4BB958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB954u;
    // 0x4bb958: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BB954u, 0x4BB95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB95Cu;
label_4bb95c:
    // 0x4bb95c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4bb95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4bb960: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4bb960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4bb964: 0x43a824  and         $s5, $v0, $v1
    ctx->pc = 0x4bb964u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4bb968: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bb968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bb96c: 0xdc2513a8  ld          $a1, 0x13A8($at)
    ctx->pc = 0x4bb96cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5913A8u));
    // 0x4bb970: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB970u;
    SET_GPR_U32(ctx, 31, 0x4BB978u);
    ctx->pc = 0x4BB974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB970u;
    // 0x4bb974: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB970u, 0x4BB978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB978u;
label_4bb978:
    // 0x4bb978: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x4bb978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x4bb97c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4bb97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb980: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB980u;
    SET_GPR_U32(ctx, 31, 0x4BB988u);
    ctx->pc = 0x4BB984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB980u;
    // 0x4bb984: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB980u, 0x4BB988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB988u;
label_4bb988:
    // 0x4bb988: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4bb988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb98c: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB98Cu;
    SET_GPR_U32(ctx, 31, 0x4BB994u);
    ctx->pc = 0x4BB990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB98Cu;
    // 0x4bb990: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB98Cu, 0x4BB994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB994u;
label_4bb994:
    // 0x4bb994: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bb994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bb998: 0xdc2513b0  ld          $a1, 0x13B0($at)
    ctx->pc = 0x4bb998u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5913B0u));
    // 0x4bb99c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB99Cu;
    SET_GPR_U32(ctx, 31, 0x4BB9A4u);
    ctx->pc = 0x4BB9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB99Cu;
    // 0x4bb9a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB99Cu, 0x4BB9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB9A4u;
label_4bb9a4:
    // 0x4bb9a4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bb9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bb9a8: 0xdc2513b8  ld          $a1, 0x13B8($at)
    ctx->pc = 0x4bb9a8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5913B8u));
    // 0x4bb9ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4bb9acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb9b0: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB9B0u;
    SET_GPR_U32(ctx, 31, 0x4BB9B8u);
    ctx->pc = 0x4BB9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB9B0u;
    // 0x4bb9b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB9B0u, 0x4BB9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB9B8u;
label_4bb9b8:
    // 0x4bb9b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bb9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb9bc: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BB9BCu;
    SET_GPR_U32(ctx, 31, 0x4BB9C4u);
    ctx->pc = 0x4BB9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB9BCu;
    // 0x4bb9c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BB9BCu, 0x4BB9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB9C4u;
label_4bb9c4:
    // 0x4bb9c4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4bb9c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb9c8: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x4bb9c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bb9cc: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BB9CCu;
    SET_GPR_U32(ctx, 31, 0x4BB9D4u);
    ctx->pc = 0x4BB9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB9CCu;
    // 0x4bb9d0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BB9CCu, 0x4BB9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB9D4u;
label_4bb9d4:
    // 0x4bb9d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4bb9d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb9d8: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x4bb9d8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bb9dc: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB9DCu;
    SET_GPR_U32(ctx, 31, 0x4BB9E4u);
    ctx->pc = 0x4BB9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB9DCu;
    // 0x4bb9e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB9DCu, 0x4BB9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB9E4u;
label_4bb9e4:
    // 0x4bb9e4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4bb9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb9e8: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BB9E8u;
    SET_GPR_U32(ctx, 31, 0x4BB9F0u);
    ctx->pc = 0x4BB9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB9E8u;
    // 0x4bb9ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BB9E8u, 0x4BB9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BB9F0u;
label_4bb9f0:
    // 0x4bb9f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4bb9f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb9f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4bb9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bb9f8: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BB9F8u;
    SET_GPR_U32(ctx, 31, 0x4BBA00u);
    ctx->pc = 0x4BB9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BB9F8u;
    // 0x4bb9fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BB9F8u, 0x4BBA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBA00u;
label_4bba00:
    // 0x4bba00: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4bba00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bba04: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bba04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bba08: 0xdc2513c0  ld          $a1, 0x13C0($at)
    ctx->pc = 0x4bba08u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5913C0u));
    // 0x4bba0c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BBA0Cu;
    SET_GPR_U32(ctx, 31, 0x4BBA14u);
    ctx->pc = 0x4BBA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBA0Cu;
    // 0x4bba10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BBA0Cu, 0x4BBA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBA14u;
label_4bba14:
    // 0x4bba14: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bba14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bba18: 0xdc2513c8  ld          $a1, 0x13C8($at)
    ctx->pc = 0x4bba18u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5913C8u));
    // 0x4bba1c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BBA1Cu;
    SET_GPR_U32(ctx, 31, 0x4BBA24u);
    ctx->pc = 0x4BBA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBA1Cu;
    // 0x4bba20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BBA1Cu, 0x4BBA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBA24u;
label_4bba24:
    // 0x4bba24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4bba24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bba28: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BBA28u;
    SET_GPR_U32(ctx, 31, 0x4BBA30u);
    ctx->pc = 0x4BBA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBA28u;
    // 0x4bba2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BBA28u, 0x4BBA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBA30u;
label_4bba30:
    // 0x4bba30: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bba30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bba34: 0xdc2513d0  ld          $a1, 0x13D0($at)
    ctx->pc = 0x4bba34u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5913D0u));
    // 0x4bba38: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BBA38u;
    SET_GPR_U32(ctx, 31, 0x4BBA40u);
    ctx->pc = 0x4BBA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBA38u;
    // 0x4bba3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BBA38u, 0x4BBA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBA40u;
label_4bba40:
    // 0x4bba40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4bba40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bba44: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BBA44u;
    SET_GPR_U32(ctx, 31, 0x4BBA4Cu);
    ctx->pc = 0x4BBA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBA44u;
    // 0x4bba48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BBA44u, 0x4BBA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBA4Cu;
label_4bba4c:
    // 0x4bba4c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bba4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bba50: 0xdc2513d8  ld          $a1, 0x13D8($at)
    ctx->pc = 0x4bba50u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5913D8u));
    // 0x4bba54: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BBA54u;
    SET_GPR_U32(ctx, 31, 0x4BBA5Cu);
    ctx->pc = 0x4BBA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBA54u;
    // 0x4bba58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BBA54u, 0x4BBA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBA5Cu;
label_4bba5c:
    // 0x4bba5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4bba5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bba60: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BBA60u;
    SET_GPR_U32(ctx, 31, 0x4BBA68u);
    ctx->pc = 0x4BBA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBA60u;
    // 0x4bba64: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BBA60u, 0x4BBA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBA68u;
label_4bba68:
    // 0x4bba68: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bba68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bba6c: 0xdc2513e0  ld          $a1, 0x13E0($at)
    ctx->pc = 0x4bba6cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5913E0u));
    // 0x4bba70: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BBA70u;
    SET_GPR_U32(ctx, 31, 0x4BBA78u);
    ctx->pc = 0x4BBA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBA70u;
    // 0x4bba74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BBA70u, 0x4BBA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBA78u;
label_4bba78:
    // 0x4bba78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4bba78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bba7c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BBA7Cu;
    SET_GPR_U32(ctx, 31, 0x4BBA84u);
    ctx->pc = 0x4BBA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBA7Cu;
    // 0x4bba80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BBA7Cu, 0x4BBA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBA84u;
label_4bba84:
    // 0x4bba84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4bba84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bba88: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BBA88u;
    SET_GPR_U32(ctx, 31, 0x4BBA90u);
    ctx->pc = 0x4BBA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBA88u;
    // 0x4bba8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BBA88u, 0x4BBA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBA90u;
label_4bba90:
    // 0x4bba90: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4bba90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bba94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4bba94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bba98: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BBA98u;
    SET_GPR_U32(ctx, 31, 0x4BBAA0u);
    ctx->pc = 0x4BBA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBA98u;
    // 0x4bba9c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BBA98u, 0x4BBAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBAA0u;
label_4bbaa0:
    // 0x4bbaa0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x4bbaa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x4bbaa4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x4bbaa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x4bbaa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4bbaa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbaac: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BBAACu;
    SET_GPR_U32(ctx, 31, 0x4BBAB4u);
    ctx->pc = 0x4BBAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBAACu;
    // 0x4bbab0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BBAACu, 0x4BBAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBAB4u;
label_4bbab4:
    // 0x4bbab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bbab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbab8: 0xc10b000  jal         func_42C000
    ctx->pc = 0x4BBAB8u;
    SET_GPR_U32(ctx, 31, 0x4BBAC0u);
    ctx->pc = 0x4BBABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBAB8u;
    // 0x4bbabc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x4BBAB8u, 0x4BBAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBAC0u;
label_4bbac0:
    // 0x4bbac0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4bbac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbac4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4bbac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbac8: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BBAC8u;
    SET_GPR_U32(ctx, 31, 0x4BBAD0u);
    ctx->pc = 0x4BBACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBAC8u;
    // 0x4bbacc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BBAC8u, 0x4BBAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBAD0u;
label_4bbad0:
    // 0x4bbad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bbad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbad4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BBAD4u;
    SET_GPR_U32(ctx, 31, 0x4BBADCu);
    ctx->pc = 0x4BBAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBAD4u;
    // 0x4bbad8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BBAD4u, 0x4BBADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBADCu;
label_4bbadc:
    // 0x4bbadc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bbadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbae0: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BBAE0u;
    SET_GPR_U32(ctx, 31, 0x4BBAE8u);
    ctx->pc = 0x4BBAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBAE0u;
    // 0x4bbae4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BBAE0u, 0x4BBAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBAE8u;
label_4bbae8:
    // 0x4bbae8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4bbae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbaec: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BBAECu;
    SET_GPR_U32(ctx, 31, 0x4BBAF4u);
    ctx->pc = 0x4BBAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBAECu;
    // 0x4bbaf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BBAECu, 0x4BBAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBAF4u;
label_4bbaf4:
    // 0x4bbaf4: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x4bbaf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4bbaf8: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x4bbaf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x4bbafc: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BBAFCu;
    SET_GPR_U32(ctx, 31, 0x4BBB04u);
    ctx->pc = 0x4BBB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBAFCu;
    // 0x4bbb00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BBAFCu, 0x4BBB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBB04u;
label_4bbb04:
    // 0x4bbb04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4bbb04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbb08: 0x2883f  dsra32      $s1, $v0, 0
    ctx->pc = 0x4bbb08u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4bbb0c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x4bbb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x4bbb10: 0x21d00  sll         $v1, $v0, 20
    ctx->pc = 0x4bbb10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x4bbb14: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x4bbb14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x4bbb18: 0x111503  sra         $v0, $s1, 20
    ctx->pc = 0x4bbb18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 20));
    // 0x4bbb1c: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BBB1Cu;
    {
        const bool branch_taken_0x4bbb1c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x4BBB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBB1Cu;
        // 0x4bbb20: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbb1c) {
            ctx->pc = 0x4BBB38u;
            goto label_4bbb38;
        }
    }
    ctx->pc = 0x4BBB24u;
    // 0x4bbb24: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x4bbb24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x4bbb28: 0xc12e1f8  jal         func_4B87E0
    ctx->pc = 0x4BBB28u;
    SET_GPR_U32(ctx, 31, 0x4BBB30u);
    ctx->pc = 0x4BBB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBB28u;
    // 0x4bbb2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B87E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B87E0u, 0x4BBB28u, 0x4BBB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBB30u;
label_4bbb30:
    // 0x4bbb30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4BBB30u;
    {
        const bool branch_taken_0x4bbb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BBB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBB30u;
        // 0x4bbb34: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbb30) {
            ctx->pc = 0x4BBB50u;
            goto label_4bbb50;
        }
    }
    ctx->pc = 0x4BBB38u;
label_4bbb38:
    // 0x4bbb38: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4bbb38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4bbb3c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x4bbb3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x4bbb40: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x4bbb40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x4bbb44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4bbb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4bbb48: 0x449025  or          $s2, $v0, $a0
    ctx->pc = 0x4bbb48u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4bbb4c: 0x0  nop
    ctx->pc = 0x4bbb4cu;
    // NOP
label_4bbb50:
    // 0x4bbb50: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x4bbb50u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bbb54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4bbb54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4bbb58:
    // 0x4bbb58: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BBB58u;
    SET_GPR_U32(ctx, 31, 0x4BBB60u);
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BBB58u, 0x4BBB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBB60u;
label_4bbb60:
    // 0x4bbb60: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x4bbb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_4bbb64:
    // 0x4bbb64: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x4bbb64u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4bbb68: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x4bbb68u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4bbb6c: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x4bbb6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4bbb70: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x4bbb70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4bbb74: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x4bbb74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4bbb78: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x4bbb78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4bbb7c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x4bbb7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4bbb80: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x4bbb80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bbb84: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x4bbb84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bbb88: 0x3e00008  jr          $ra
    ctx->pc = 0x4BBB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BBB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBB88u;
        // 0x4bbb8c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BBB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BBB90u;
}
